/*
Pergunta 4

Escreva um algoritmo para determinar se uma string de caracteres de entrada é da forma:
xCy
Onde x é uma string consistindo nas letras 'A' e 'B' e y é o inverso de x 
(isto é, se x "ABABBA", y deve equivaler a ABBABA). 
Em cada ponto você só poderá ler o próximo caractere da string.
-------------------------------------Gabriel Salmai - 1922130017---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]){

    char x[30], y[30];
    int tam, i;

    printf("\nDigite a palavra: ");
    scanf("%s",x);
    tam = strlen(x);

    for(i=0;i<tam;i++){
        y[i]=x[tam-i-1];
    }

    for(i=0;i<tam/2;i++){
        if(x[i] != y[i]){
            printf("\n(X) A palavra nao segue a forma xCy\n");
            return 1;
        }
        printf("\n(OK) A palavra segue a forma xCy\n");
    }
    return 0;
}
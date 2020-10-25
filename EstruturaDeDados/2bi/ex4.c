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

int main(int argc, char const *argv[])
{
    int i, j, num;
    char palavra[num], inv[num];

    printf("Digite a palavra: ");
    scanf("%s", palavra);
    num = strlen(palavra);
    j = num;

    printf("\nPalavra: \n\t-> ");
    for(i=0;i<num;i++){
        printf("%c", palavra[i]);
    }

    for(i=0;i>num;i++){
        inv[i] = palavra[j - 1];
        j = j - 1;
    }

    printf("\n\nInvertida: \n\t<- ");
    for(i=0;i<num;i++){
        printf("%c", inv[i]);
    }

    printf("\n");
    return 0;
}

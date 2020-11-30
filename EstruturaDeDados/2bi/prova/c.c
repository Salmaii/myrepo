/*
C. FILA
-------------------------------------Gabriel Salmai - 1922130017---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int soma(int *vet, int tam);
void selection_sort (int *vet, int tam);


int main(int argc, char const *argv[])
{
    int i, tam, *tempo, resultado;

    printf("Digite o numero de pessoas na fila: \n");
    scanf("%d", &tam);

    tempo = (int *)malloc(sizeof(int)*tam);

    for(i=0; i<tam; i++){
        printf("Tempo de espera da %i pessoa: ", i+1);
        scanf("%d", &tempo[i]);
    }

    selection_sort(tempo, tam);
    resultado = soma(tempo, tam);

    printf("\n%d\n", resultado);

    return 0;
}

int soma(int *vet, int tam){
    int i, j, res=0, soma;

    for(i=0; i<tam; i++){
        soma=0;
        for(j=0; j<i; j++){
            soma = vet[j] + soma;
        }
        if(soma<=vet[i]){
            res = 1 + res;
        }
    }

    return res;
}

void selection_sort (int *vet, int tam){
   int i, j, aux1, aux;
   for (i=0; i<(tam-1); i++){
      aux1 = i;
      for(j = i+1; j<tam; j++){
         if (vet[j] < vet[aux1]){
         aux1 = j;
         }
      }
      if(i != aux1){
         aux = vet[i];
         vet[i] = vet[aux1];
         vet[aux1] = aux;
      }
   }
}
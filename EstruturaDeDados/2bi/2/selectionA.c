/*
Exercício Selection Sort

Pergunta 1
1 ponto
Implemente o algoritmo Selection Sort e:

a) mostre na tela o tempo gasto para ordenar um vetor de tamanho 150.000 totalmente embaralhado;
b) mostre o tempo gasto para ordenar o mesmo vetor com apenas 10 números fora da ordem.

-------------------------------------Gabriel Salmai - 1922130017---------------------------------------------------

A)
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long int *gera_vetor(long int tam);
void embaralha_vetor(long int *vet, long int tam);
void mostrar_vetor(long int *vet, long int tam);
void selection_sort(long int * vet,long int tam);

int main(int argc, char const *argv[]){
  clock_t tempo;
  srand(time(NULL));

  long int tam, *vet;
  tam = 150000;
  vet = gera_vetor(tam);

  embaralha_vetor(vet, tam);
  printf("Vetor gerado:");
  mostrar_vetor(vet, tam);

  tempo = clock();
  selection_sort(vet,tam);
  tempo = clock() - tempo; 

  printf("\nVetor ordenado:");
  mostrar_vetor(vet, tam);
  printf("\nTempo da execucao:%lfsegundos\n", ((double)tempo)/((CLOCKS_PER_SEC)));
  return 0;
}

long int *gera_vetor(long int tam){
  long int *vet, i;

  vet = (long int *)malloc(sizeof(long int) * tam);
  
  for (i = 0; i < tam; i++){
    vet[i] = i + 1;
  }
  return vet;
}

void embaralha_vetor(long int *vet, long int tam){
  long int aux1, aux, i;

  for (i = 0; i < tam; i++){
    aux1 = rand() % (tam);

    aux = vet[i];
    vet[i] = vet[aux1];
    vet[aux1] = aux;
  }
}

void mostrar_vetor(long int *vet, long int tam){
  long int i;

  printf("\n");
  for (i = 0; i < tam; i++){
    printf("%ld ", vet[i]);
  }
}

void selection_sort (long int * vet,long int tam) {
long int i, j, aux1, aux;

for (i = 0; i < (tam - 1); i++){
  aux1 = i;
  for (j = i+1; j < tam; j++) {
    if (vet[j] < vet[aux1]) {
  aux1 = j;
    }
  }
  if (i != aux1){
    aux = vet[i];
    vet[i] = vet[aux1];
    vet[aux1] = aux;
  }
}}
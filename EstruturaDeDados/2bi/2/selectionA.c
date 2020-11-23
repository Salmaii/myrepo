#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long int *gera_vetor(long int tam);
void embaralha_vetor(long int *vet, long int tam);
void mostrar_vetor(long int *vet, long int tam);
void selection_sort (long int * vet,long int tam);

int main(int argc, char const *argv[]){
  clock_t tempo;
  long int tam, *vet;
  srand(time(NULL));
  FILE *arq;
  tam = 150; //150000;
  vet = gera_vetor(tam);
  embaralha_vetor(vet, tam);

  printf("Vetor gerado:");
  mostrar_vetor(vet, tam);

  tempo = clock();
  selection_sort(vet,tam);
  tempo = clock() - tempo; 

  printf("\nVetor ordenado:");
  mostrar_vetor(vet, tam);
  printf("\n\nTempo de execucao:%lfs \n\n", ((double)tempo)/((CLOCKS_PER_SEC)));
  fprintf(arq,"Time: %.7lfs\n", ((double)tempo)/((CLOCKS_PER_SEC)));
  return 0;
}

long int *gera_vetor(long int tam)
{
  long int *vet, i;
  vet = (long int *)malloc(sizeof(long int) * tam);
  for (i = 0; i < tam; i++)
  {
    vet[i] = i + 1;
  }

  return vet;
}

void embaralha_vetor(long int *vet, long int tam)
{
  long int ind_aux, aux, i;

  for (i = 0; i < tam; i++)
  {
    ind_aux = rand() % (tam);

    aux = vet[i];
    vet[i] = vet[ind_aux];
    vet[ind_aux] = aux;
  }
}

void mostrar_vetor(long int *vet, long int tam)
{
  long int i;
  printf("\n");
  for (i = 0; i < tam; i++)
  {
    printf("%ld ", vet[i]);
  }
}

void selection_sort (long int * vet,long int tam) {
long int i, j, pivo, aux;

for (i = 0; i < (tam - 1); i++) {
  pivo = i;
  for (j = i+1; j < tam; j++) {
    if (vet[j] < vet[pivo]) {
  pivo = j;
    }
  }
  if (i != pivo) {
    aux = vet[i];
    vet[i] = vet[pivo];
    vet[pivo] = aux;
  }
}}
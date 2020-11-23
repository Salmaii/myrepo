#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mostrar_vetor(long int *vet, long int tam);
void selection_sort (long int * vet,long int tam);
long int *gera_vetor(long int tam);
void embaralha_vetor(long int *vet, long int tam);

int main(int argc, char const *argv[])
{

  clock_t t; //variável para armazenar tempo
  long int tam;
  long int *vet;
  srand(time(NULL));

  tam = 150;
  vet = gera_vetor(tam);
  embaralha_vetor(vet, tam);

  printf("Vetor:");
  mostrar_vetor(vet, tam);

  t = clock();
  selection_sort(vet,tam);
  t = clock() - t; 

  printf("\nVetor ordenado:");
  mostrar_vetor(vet, tam);
  printf("\n\nTempo de execucao:%lfs \n\n", ((double)t)/((CLOCKS_PER_SEC)));

  return 0;
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

void embaralha_vetor(long int *vet, long int tam)
{
  long int ind_aux, aux;
  long int i;

  for (i = 0; i < 10; i++)
  {
    ind_aux = rand() % (tam-10);

    aux = vet[i];
    vet[i] = vet[ind_aux];
    vet[ind_aux] = aux;
  }
}

long int *gera_vetor(long int tam)
{
  long int *vet;
  long int i;
  vet = (long int *)malloc(sizeof(long int) * tam);
  for (i = 0; i < tam; i++)
  {
      vet[i] = i + 1;
  }

  return vet;
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
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "omp.h"

// Complexidade:

// Bubblesort:
// Melhor caso O(n)
// Pior   caso n²

// Mergesort:
// Melhor caso O(n.logn)
// Pior caso O(n.logn)

// Quicksort:
// Melhor caso O(n.logn)
// Pior caso O(n²)

void mostrar_vetor(long int *vet, long int tam);
void bubblesort(long int *vet, long int tam);
long int *gera_vetor(long int tam);
void embaralha_vetor(long int *vet, long int tam);
void intercala(long int *vet, long int inicio, long int meio, long int fim);
void mergesort(long int *vet, long int inicio, long int fim);
void quicksort(long int *vet, long int inicio, long int fim);
void quicksort2(long int *vet, long int inicio, long int fim);


int main()
{
    float t1, t2;
    long int tam;
    long int *vet;
    srand(time(NULL));
    FILE *arq;

    // tam= 10;
    // vet=gera_vetor(tam);
    // embaralha_vetor(vet,tam);

    // printf("\n Mostrando antes de ordenar: ");
    // mostrar_vetor(vet,tam);
    // printf("\n Mostrando depois de ordenar:");
    // quicksort2(vet,0,tam-1);
    // mostrar_vetor(vet,tam);
    // return 0;

    arq = fopen("temposquicksort2.txt", "w");

    if (arq == NULL)
    {
        printf("treta no arquivo");
        return 0;
    }

    for (tam = 10000; tam <= 1000000; tam = tam + 10000)
    {
        fprintf(arq, "%ld;", tam);
        t1 = omp_get_wtime();
        vet = gera_vetor(tam);
        embaralha_vetor(vet, tam);
        t2 = omp_get_wtime();
        mostrar_vetor(vet, 10);
        printf("\nTempo total para criacao do vetor: %lf", t2 - t1);

        t1 = omp_get_wtime();
        quicksort2(vet, 0, tam - 1);
        t2 = omp_get_wtime();

        // printf("\n Mostrando conteudo do vetor depois de ordenar: \n");
        mostrar_vetor(vet, 10);
        fprintf(arq, "%lf\n", t2 - t1);
    }

    fclose(arq);

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

void embaralha_vetor(long int *vet, long int tam)
{
    long int ind_aux, aux;
    long int i;
    for (i = 0; i < tam; i++)
    {
        ind_aux = rand() % tam;

        aux = vet[i];
        vet[i] = vet[ind_aux];
        vet[ind_aux] = aux;
    }
}
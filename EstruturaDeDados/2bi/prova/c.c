/*
C. FILA
-------------------------------------Gabriel Salmai - 1922130017---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

void ordenacao(int *vetor, int tam);
void mostra_vetor(int *vetor, int tam);
int decepcionados(int *vetor, int tam);

int main(void) 
{
    int i, p, *t, aux;

    scanf("%d", &p);
    t = (int *)malloc(sizeof(int)*p);

    for(i=0; i<p; i++)
    {
        scanf("%d", &t[i]);
    }

    ordenacao(t, p);
    
    // printf("\n");
    // mostra_vetor(t, p);
    // printf("\n");
    
    aux = decepcionados(t, p);

    printf("%d\n", aux);

    return 0;
}

void mostra_vetor(int *vetor, int tam)
{
    int i;

    for(i=0; i<tam; i++)
    {
        printf("%d ", vetor[i]);
    }

    printf("\n");
}

void ordenacao(int *vetor, int tam)
{
    int i=0, j=0, aux=0;

    for(i=0; i<tam; i++)
    {
        for(j=i+1; j<tam; j++)
        {
            if(vetor[i]>vetor[j])
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

int decepcionados(int *vetor, int tam)
{
    int i=0, j=0, aux=0, soma=0;

    for(i=0; i<tam; i++)
    {
        soma=0;
        for(j=0; j<i; j++)
        {
            soma += vetor[j];
        }
        if(soma<=vetor[i])
        {
            aux += 1;
        }
    }

    return aux;
}
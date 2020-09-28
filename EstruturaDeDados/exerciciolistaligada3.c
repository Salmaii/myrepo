/*

Construa um programa que receba N números do usuário e insira esses números de forma ordenada em uma lista ligada
Não é permitido a utilização de vetores;

O programa deverá ler números do usuário até que seja digitado o número -1

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
    int qtd;
    struct registro *inicio;
} lista;

typedef struct registro
{
    int valor;
    struct registro *prox;
} registro;

registro *aloca_registro();
lista *aloca_lista();
void incluir_na_lista(lista *l, int x);
void mostrar(lista *l);
void remove_na_lista(lista *l, int x);

int main()
{
    lista *lista_1;
    int numero = 0;

    lista_1 = aloca_lista();

    printf("\n Digite os numeros para ser includo na lista, quando quiser parar digite (-1):\n");
    while(numero!=-1){
    printf("-> ");
    scanf("%d", &numero);
    incluir_na_lista(lista_1, numero);
    }

}

lista *aloca_lista()
{
    lista *nova_lista;

    nova_lista = (lista *)malloc(sizeof(lista));
    nova_lista->qtd = 0;
    nova_lista->inicio = NULL;
    return nova_lista;
}

registro *aloca_registro()
{
    registro *novo_registro;
    novo_registro = (registro *)malloc(sizeof(registro));
    novo_registro->valor = 0;
    novo_registro->prox = NULL;
    return novo_registro;
}

void incluir_na_lista(lista *l, int x)
{
    registro *novo, *aux;
    novo = aloca_registro();
    novo->valor = x;

    if (l->inicio == NULL)
    {
        l->inicio = novo;
    }
    else
    {
        aux = l->inicio;

        while (aux->prox != NULL)
        {
            aux = aux->prox;
        }

        aux->prox = novo;
    }

    l->qtd++;
}

void mostrar(lista *l)
{
    registro *aux;

    if (l->qtd == 0)
    {
        printf("\n Lista vazia");
    }
    else
    {
        aux = l->inicio;
        while (aux != NULL)
        {
            printf("\n%d", aux->valor);
            aux = aux->prox;
        }
    }
}

void remove_na_lista(lista *l, int x)
{

    registro *aux, *ant;

    if (l->inicio == NULL)
    {
        printf("\n lista vazia");
        return;
    }
    aux = l->inicio;

    while (aux != NULL)
    {
        if (aux->valor == x)
        {
            if (ant == NULL)
            {
                l->inicio = aux->prox;
            }
            else
            {
                ant->prox = aux->prox;
            }

            free(aux);
            l->qtd--;
            printf("\n Removido com sucesso");
            return;
        }
        else
        {
            ant = aux;
            aux = aux->prox;
        }
    }
    printf("\n Elemento nao foi encontrado na lista");

    return;
}
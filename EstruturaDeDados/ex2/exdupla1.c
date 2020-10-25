/*

Construa um programa que insira números em uma lista duplamente ligada.
O usuário poderá escolher se deseja incluir o número no ínício da lista ou no final da lista;

------------------------------Gabriel salmai - 1922130017-----------------------------------                              

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct lista
{
    int qtd;
    struct registro *inicio;
    struct registro *fim;
} lista;

typedef struct registro
{
    int valor;
    struct registro *prox;
    struct registro *ant;
} registro;

lista *aloca_lista();
registro *aloca_registro();
void incluir_no_final(lista *l, int x);
void incluir_na_lista(lista *l, int x);
void mostrar_lista(lista *l);

int main(){
    int opcao, numero;

    lista *lista_teste;
    lista_teste = aloca_lista();

    while(opcao!=0){
       printf("\n\tEscolha uma opcao:\n(1) Para colocar o numero no início\n(2) Para incluir o numero no final\n(x) Para fechar e mostrar a lista\n->");
       scanf("%i", &opcao);
       if(opcao==1){           
           printf("\nDigite o numero: ");
           scanf("%i", &numero);
           incluir_na_lista(lista_teste, numero);
       }
       else if (opcao==2){
           printf("\nDigite o numero: ");
           scanf("%i", &numero);
           incluir_no_final(lista_teste, numero);
       }
       else
       {
           mostrar_lista(lista_teste);
            opcao = 0;
       }   
    }

    printf("\n");
    return 0;
}

lista *aloca_lista()
{
    lista *novo;
    novo = (lista *)malloc(sizeof(lista));
    novo->qtd = 0;
    novo->inicio = NULL;
    novo->fim = NULL;
    return novo;
}

registro *aloca_registro()
{
    registro *novo;
    novo = (registro *)malloc(sizeof(registro));
    novo->valor = 0;
    novo->prox = NULL;
    novo->ant = NULL;
    return novo;
}

void incluir_no_final(lista *l, int x)
{
    registro *novo;
    novo = aloca_registro();
    novo->valor = x;

    if (l->inicio == NULL && l->fim == NULL)
    {
        l->inicio = novo;
        l->fim = novo;
    }
    else
    {
        l->fim->prox = novo;
        novo->ant = l->fim;
        l->fim = novo;
    }

    l->qtd++;
}

void incluir_na_lista(lista *l, int x){
    registro *novo, *aux;
    novo = aloca_registro();
    novo->valor = x;
    int i;

    if (l->inicio == NULL)
    {
        l->inicio = novo;
        l->fim = novo;
    }
    else
    {
        aux = l->inicio;
        novo->prox = l->inicio;
        l->inicio = novo;
    }

    l->qtd++;
}

void mostrar_lista(lista *l){
    registro *aux;

    printf("\n---START---");
    
    if (l->inicio == NULL && l->fim == NULL)
    {
        printf("\n Lista vazia");
    }
    else
    {
        aux = l->inicio;
        while (aux != NULL)
        {
            printf("\n->%d", aux->valor);
            aux = aux->prox;
        }
    }
    printf("\n---END---\n");
}
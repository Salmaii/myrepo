/*

Construa um programa que insira números em uma lista ligada.
O usuário poderá escolher se deseja incluir o número no ínício da lista ou no final da lista;

------------------------------Gabriel salmai 1922130017-----------------------------------                       
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
   char nome[50];
   struct registro *prox;
} registro;

registro *aloca_registro();
lista *aloca_lista();
void incluir_na_lista(lista *l, char nome, int tam);
void incluir_no_final(lista *l, int x);
void mostrar(lista *l);

int main(){   
   int numero, opcao, tam;
   char nome[50];

   lista *lista_1;
   lista_1 = aloca_lista();

    printf("\nDigite o nome: ");
    scanf("%s", nome);
    tam = strlen(nome);
    incluir_na_lista(lista_1, nome, tam);

    mostrar(lista_1);
      


   return 0;
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
    //novo_registro->nome = 0;
    novo_registro->prox = NULL;
    return novo_registro;
}

void incluir_na_lista(lista *l, char nome, int tam){
    registro *novo, *aux;
    int i, aux1;
    aux = aux + i;
    novo = aloca_registro();
    for(i=aux1;i>tam;i++){
        novo->nome[i] = nome;
    }

    if (l->inicio == NULL)
    {
        l->inicio = novo;
    }
    else
    {
        aux = l->inicio;
        novo->prox = l->inicio;
        l->inicio = novo;
    }

    l->qtd++;
}

void mostrar(lista *l)
{
   registro *aux;

   printf("\n---START---");

   if (l->qtd == 0)
   {
      printf("\n Lista vazia");
   }
   else
   {
      aux = l->inicio;
      while (aux != NULL)
      {
         printf("\n->%s", aux->nome);
         aux = aux->prox;
      }
   }
   printf("\n---END---\n");
}
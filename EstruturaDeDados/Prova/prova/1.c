/*
Faça um programa que leia 10 números inteiros positivos do usuário e:

a) Armazene os 5 primeiros em uma lista_ligada de nome lista_1;
b) Armazene os 5 últimos números em uma lista_ligada de nome lista_2;
c) Crie uma função que receba por parâmetro 2 listas ligadas e retorne uma lista concatenada das 2 listas recebidas por parâmetros. 
Ex: Lista_1 = 1,2,3,4,5, Lista_2 = 6,7,8,9,10, lista que será retornada = 1,2,3,4,5,6,7,8,9,10;
d) Invoque na sua função principal a função criada na letra c desse exercício e atribua o retorno da função em uma lista de nome 
lista_concatenada e mostre seu conteúdo.

-------------------------------------Gabriel Salmai - 1922130017---------------------------------------------------
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
void incluir(lista *l, int x);
void mostrar(lista *l);
lista* organiza(lista *l1, lista *l2);

int main(){   
   int numero=0, i, pos=1;

   lista *lista_1;
   lista_1 = aloca_lista();

   lista *lista_2;
   lista_2 = aloca_lista();

   lista *lista_concatenada;
   lista_concatenada = aloca_lista();

   for(i=0;i<5;i++){
      printf("Digite o %i numero para ser incluido na lista 1: \n ->", pos);
      scanf("%i", &numero);
      incluir(lista_1, numero);
      pos++;
   }  
   for(i=0;i<5;i++){
      printf("Digite o %i numero para ser incluido na lista 2: \n ->", pos);
      scanf("%i", &numero);
      incluir(lista_2, numero);
      pos++;
   }

   lista_concatenada = organiza(lista_1, lista_2);

   printf("Lista 1: ");
   mostrar(lista_1);

   printf("Lista 2: ");
   mostrar(lista_2);

   printf("Lista concatenada: ");
   mostrar(lista_concatenada);
    
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
   novo_registro->valor = 0;
   novo_registro->prox = NULL;
   return novo_registro;
}

void incluir(lista *l, int x){
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

void mostrar(lista *l){
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
         printf("\n->%d", aux->valor);
         aux = aux->prox;
      }
   }
   printf("\n---END---\n\n");
}

lista* organiza(lista *l1, lista *l2){
   registro *aux;
   lista *lista_concatenada;
   lista_concatenada = aloca_lista();

   aux = l1->inicio;
   while (aux->prox != NULL)
   {
      incluir(lista_concatenada, aux->valor);
      aux = aux->prox;
   }
   incluir(lista_concatenada, aux->valor);

   aux = l2->inicio;
   while (aux->prox != NULL)
   {
      incluir(lista_concatenada, aux->valor);
      aux = aux->prox;
   }
   incluir(lista_concatenada, aux->valor);

   return(lista_concatenada);
}

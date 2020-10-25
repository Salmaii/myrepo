/*
Faça um programa que receba N números inteiros do usuário até que seja digitado o número -1 
e armazene-os em uma lista ligada de nome lista_geral e:

a) percorra a lista ligada (lista_geral) e guarde os números pares em uma lista duplamente ligada de nome lista_de_pares 
e os ímpares em uma lista duplamente ligada de nome lista_de_impares.
b) mostre o conteúdo o conteúdo das 3 listas: lista_geral, lista_de_pares, e lista_de_impares;

-------------------------------------Gabriel Salmai - 1922130017---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

// ----------Lista ligada-------------
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
// ------------Lista ligada--------------


// ----------Lista duplamente-------------
typedef struct lista_dupla
{
   int qtd;
   struct registro_dupla *inicio;
   struct registro_dupla *fim;
} lista_dupla;
typedef struct registro_dupla
{
   int valor;
   struct registro_dupla *prox;
   struct registro_dupla *ant;
} registro_dupla;

registro_dupla *aloca_registro_dupla();
lista_dupla *aloca_lista_dupla();

void incluir_dupla(lista_dupla *l, int x);
void mostrar_dupla(lista_dupla *l);
// ----------Lista duplamente-------------

void organiza(lista * l, lista_dupla *l_par, lista_dupla *l_impar);

int main(){   
   int numero, i = 1;

// ------------Lista ligada--------------
   lista *lista_geral;
   lista_geral = aloca_lista();
// ------------Lista ligada--------------

// ----------Lista duplamente-------------
   lista_dupla *lista_impar;
   lista_impar = aloca_lista_dupla();
   lista_dupla *lista_par;
   lista_par = aloca_lista_dupla();
// ----------Lista duplamente-------------

   while(numero!=-1){
      printf("\nDigite o %i numero para ser incluido na lista geral: \n ->", i);
      scanf("%i", &numero);
      if (numero==-1)
      {
         break;
      }
      else
      {
      incluir(lista_geral, numero);   
      i++;
      }
   }
   printf("\nLista Geral: ");
   mostrar(lista_geral);

   organiza(lista_geral, lista_par, lista_impar);

   printf("\nLista Impar: ");
   mostrar_dupla(lista_impar);

   printf("\nLista Par: ");
   mostrar_dupla(lista_par);

   return 0; 
}

// ------------Lista ligada--------------
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
   int i;

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
         printf("\n->%d", aux->valor);
         aux = aux->prox;
      }
   }
   printf("\n---END---\n");
}
// ------------Lista ligada--------------


// ----------Lista duplamente-------------
lista_dupla *aloca_lista_dupla()
{
   lista_dupla *novo;
   novo = (lista_dupla*)malloc(sizeof(lista_dupla));
   novo->qtd = 0;
   novo->inicio = NULL;
   novo->fim = NULL;
   return novo;
}

registro_dupla *aloca_registro_dupla()
{
   registro_dupla *novo;
   novo = (registro_dupla *)malloc(sizeof(registro_dupla));
   novo->valor = 0;
   novo->prox = NULL;
   novo->ant = NULL;
   return novo;
}

void incluir_dupla(lista_dupla *l, int x){
   registro_dupla *novo, *aux;
   novo = aloca_registro_dupla();
   novo->valor = x;
   int i;

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

void mostrar_dupla(lista_dupla *l)
{
   registro_dupla *aux;

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
   printf("\n---END---\n");
}
// ----------Lista duplamente-------------

void organiza(lista *l, lista_dupla *l_par, lista_dupla *l_impar){
   registro *aux;

   aux = l->inicio;
   while (aux->prox != NULL)
   {
      if (aux->valor % 2 == 0)
      {
         incluir_dupla(l_par, aux->valor);
      }
      else
      {
         incluir_dupla(l_impar, aux->valor);
      }
      aux = aux->prox;
   }
}

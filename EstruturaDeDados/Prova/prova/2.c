/*
Faça um programa que receba dois números inteiros positivos do usuário n1 e n2 e:

a) Armazene os números primos entre N1 e N2(intervalo fechado) em uma lista ligada;
b) Armazene os números múltiplos de 3 em uma lista duplamente ligada;
c) Mostre o conteúdo da lista ligada de primos e da lista duplamente ligada dos números múltiplos de 3;

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

int main(){
   int n1, n2, i = 1, j, resultado;

// ------------Lista ligada--------------
   lista *lista_primos;
   lista_primos = aloca_lista();
// ------------Lista ligada--------------

// ----------Lista duplamente-------------
   lista_dupla *lista_dupla;
   lista_dupla = aloca_lista_dupla();
// ----------Lista duplamente-------------

   printf("Digite o primeiro numero \n -> ");
   scanf("%i", &n1);
   printf("Digite o segundo numero \n -> ");
   scanf("%i", &n2);

   if(n1<n2){
   //---------primos--------
      for(i=n1;i<n2+1;i++){     
         for(j=2;j<=i/2;j++){
            if(i%j == 0){
               resultado++;
               break;
            }
         }
         if(resultado==0 && i != 0 && i != 1){
            incluir(lista_primos, i);
         }
         resultado = 0;
      }
   //--------mult 3----------
      for(i=n1;i<n2+1;i++){
         if(i%3==0 && i!=0){
            incluir_dupla(lista_dupla, i);
         }
      }
   }

   else if(n1>n2){
   //---------primos--------
      for(i=n2;i<n1+1;i++){
         for(j=2;j<=i/2;j++){
            if(i%j == 0){
               resultado++;
               break;
            }
         }
         if(resultado==0 && i != 0 && i != 1){
            incluir(lista_primos, i);
         }
         resultado = 0;
      }
   //---------mult 3--------
      for(i=n2;i<n1+1;i++){
         if(i%3==0 && i!=0){
            incluir_dupla(lista_dupla, i);
         }
      }
   }

   printf("\nLista Primos: ");
   mostrar(lista_primos);

   printf("\nLista Mult 3: ");
   mostrar_dupla(lista_dupla);

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

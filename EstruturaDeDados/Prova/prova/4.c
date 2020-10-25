/*
Faça um programa que apresente o seguinte menu:

1 - Inserir no inicio da lista 1
2 - Inserir no inicio da lista 2
3 - inserir no final da lista 1
4 - inserir no final da lista 2
5 - Remover número da lista 1
6 - Remover número da lista 2
7 - Mostrar Lista 1
8 - Mostrar Lista 2

a) Na opção 1 deve ser incluído um número no início de uma lista ligada de nome lista_1.
b) Na opção 2 deve ser incluído um número no início de uma lista ligada de nome lista_2.
c) Na opção 3 deve ser incluído um número no final de uma lista ligada de nome lista_1.
d) Na opção 4 deve ser incluído um número no final de uma lista ligada de nome lista_2.
e) Na opção 5 deve ser lido um número a ser removido da lista ligada lista_1.
f) Na opção 6 deve ser lido um número a ser removido da lista ligada lista_2.
g) Na opção 7 deve ser mostrado o conteúdo da lista ligada lista_1;
h) Na opção 8 deve ser mostrado o conteúdo da lista ligada lista_2;

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
void incluir_na_lista(lista *l, int x);
void incluir_no_final(lista *l, int x);
void remove_na_lista(lista *l, int x);
void mostrar(lista *l);

int main(){   
   int numero=0, opcao, inf=1;

   lista *lista_1;
   lista_1 = aloca_lista();
   lista *lista_2;
   lista_2 = aloca_lista();

   
   while (inf = 1)
   {
      printf("Escolha a opcao:\n\n");
      printf("1 - Inserir no inicio da lista 1\n");
      printf("2 - Inserir no inicio da lista 2\n");
      printf("3 - inserir no final da lista 1\n");
      printf("4 - inserir no final da lista 2\n");
      printf("5 - Remover número da lista 1\n");
      printf("6 - Remover número da lista 2\n");
      printf("7 - Mostrar Lista 1\n");
      printf("8 - Mostrar Lista 2\n-> ");
      scanf("%i", &opcao);
      printf("\n");

      switch (opcao){
         case 1:
         printf("Digite o numero a ser incluido no inicio da lista 1: \n ->");
         scanf("%i", &numero);
         incluir_na_lista(lista_1, numero);
            break;

         case 2:
         printf("Digite o numero a ser incluido no inicio da lista 2: \n ->");
         scanf("%i", &numero);
         incluir_na_lista(lista_2, numero);
            break;

         case 3:
         printf("Digite o numero a ser incluido no final da lista 1: \n ->");
         scanf("%i", &numero);
         incluir_no_final(lista_1, numero);
            break;

         case 4: 
         printf("Digite o numero a ser incluido no final da lista 2: \n ->");
         scanf("%i", &numero);
         incluir_no_final(lista_2, numero);
            break;

         case 5:
         printf("Digite o numero a ser excluido da lista 1: \n ->");
         scanf("%i", &numero);
         remove_na_lista(lista_1, numero);
            break;

         case 6:
         printf("Digite o numero a ser excluido da lista 2: \n ->");
         scanf("%i", &numero);
         remove_na_lista(lista_2, numero);
            break;

         case 7:
         printf("Lista 1:");
         mostrar(lista_1);
            break;  

         case 8:
         printf("Lista 2:");
         mostrar(lista_2);
            break;
      }
   }
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

void incluir_na_lista(lista *l, int x){
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

void incluir_no_final(lista *l, int x){
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

void remove_na_lista(lista *l, int x){
   registro *aux, *anterior; 

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
         if (anterior == NULL)
         {
            l->inicio = aux->prox;
         }
         else
         {
            anterior->prox = aux->prox;
         }

         free(aux);
         l->qtd--;
         printf("\n Removido\n");
         return;
      }
      else
      {
         anterior = aux;
         aux = aux->prox;
      }
   }
   printf("\n Numero nao encontrado\n");\

   return;
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
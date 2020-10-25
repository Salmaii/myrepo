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
   int valor;
   struct registro *prox;
} registro;

registro *aloca_registro();
lista *aloca_lista();
void incluir_na_lista(lista *l, int x);
void incluir_no_final(lista *l, int x);
void mostrar(lista *l);

int main(){   
   int numero, opcao;

   lista *lista_1;
   lista_1 = aloca_lista();

   while(opcao!=0){
      printf("\n\tEscolha uma opcao:\n(1) Para colocar o numero no início\n(2) Para incluir o numero no final\n(x) Para fechar e mostrar a lista\n->");
      scanf("%i", &opcao);
      if(opcao==1){           
         printf("\nDigite o numero: ");
         scanf("%i", &numero);
         incluir_na_lista(lista_1, numero);
      }
      else if (opcao==2){
         printf("\nDigite o numero: ");
         scanf("%i", &numero);
         incluir_no_final(lista_1, numero);
      }
      else
      {
         mostrar(lista_1);
         opcao = 0;
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

void incluir_no_final(lista *l, int x)
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
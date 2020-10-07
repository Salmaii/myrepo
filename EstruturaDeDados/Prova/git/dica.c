/*
faça um programa que receba N números do usuário até o que usuário digite o número -1. Armazene os números  em 2 listas ligadas conforme as regras a seguir:
a) se o número for primo, colocar na lista 1
b) se o número for par, colocar na lista 2
c)se o numero for impar > 100 e < 1000, colocar na lista 2;
Após a finalização das inserções, monte uma terceira lista com os 5 primeiros números da primeira lista e os 5 últimos da segunda lista;
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
   int numero=0, i, resultado;

   lista *lista_1;
   lista_1 = aloca_lista();

   lista *lista_2;
   lista_2 = aloca_lista();

   lista *lista_3;
   lista_3 = aloca_lista();

   while (numero!=-1)
   {
      printf("Lista 1:");
      mostrar(lista_1);
      printf("Lista 2:");
      mostrar(lista_2);
      printf("\nDigite um numero para ser incluido na lista: \n -");
      scanf("%i", &numero);

      for(i=2;i<=numero/2;i++){
         if(numero%i==0){
            resultado = resultado+1;
         }
      }
      
      if(resultado == 0){
         incluir_na_lista(lista_1, numero);
      }
      else if(numero % 2 == 0){
         incluir_na_lista(lista_2, numero);
      }
      else if (numero % 2 != 0 && numero > 100 && numero < 1000){
         incluir_na_lista(lista_2, numero);
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
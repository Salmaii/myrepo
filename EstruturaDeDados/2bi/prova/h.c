/*
H. FELIPPE E A FILA DO FUMÓDROMO
-------------------------------------Gabriel Salmai - 1922130017---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct fila
{
   int qtd;
   struct registro *inicio;
   struct registro *fim;
}fila;

typedef struct registro
{
   int valor;
   struct registro *prox;
}registro;

fila *aloca_fila();
registro *aloca_registro();

void incluir_na_fila(fila *f, int x);
int soma(fila *f);

int main(int argc, char const *argv[])
{
   fila *fila1;
   int i, tam, total=0, tempo;

   printf("Digite a quantidade de pessoas na fila: \n");
   scanf("%d", &tam);
   
   fila1 = aloca_fila();

   for(i=0; i<tam; i++){
      printf("Tempo de utilizacao da %i pessoa: ", i+1);
      scanf("%d", &tempo);
      incluir_na_fila(fila1, tempo);
   }

   total = soma(fila1);
   printf("\n%i\n", total);

   return 0;
}

fila *aloca_fila()
{
   fila *novo;
   novo = (fila *)malloc(sizeof(fila));
   novo->inicio = NULL;
   novo->fim = NULL;
   novo->qtd = 0;

   return novo;
}

registro *aloca_registro()
{
   registro *novo;
   novo = (registro *)malloc(sizeof(registro));
   novo->valor = 0;
   novo->prox = NULL;
   return novo;
}

void incluir_na_fila(fila *f, int x){
   registro *novo, *aux;
   novo = aloca_registro();
   novo->valor = x;

   if(f->qtd == 0){
      f->inicio = novo;
      f->fim = novo;
   }
   else{
      aux=f->fim;
      aux->prox= novo;
      f->fim = novo;
   }

   f->qtd++;
}

int soma(fila *f){
   registro *aux;
   int total=0;

   if(f->inicio == NULL){
      total=0;
   }
   else{
      aux = f->inicio;
      while(aux != NULL)
      {
         total = aux->valor + total;
         aux = aux->prox;
      }
   }

   return total;
}

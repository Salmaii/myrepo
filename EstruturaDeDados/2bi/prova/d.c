/*
D. PRESENTES 
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
void mostrar(fila *f);
void selection_sort (int *vet, int tam);

int main(int argc, char const *argv[])
{
   fila *fila_A, *fila_B;
   int i, j, z, aux, tam;

   fila_A = aloca_fila();
   fila_B = aloca_fila();

   printf("Digite a quantidaden de funcionários: ");
   scanf("%d", &tam);

   int num[tam];

   for(i=0;i<tam;i++){
      printf("Potuacao do %i funcionário: ", i+1);
      scanf("%d", &num[i]);
   }

   selection_sort(num, tam);

   for(i=0;i<tam;i++){
      if(num[i]%2==0){
         incluir_na_fila(fila_A, num[i]);
      }
   }

   for(i=tam-1;i>0;i--){
      if(num[i]%2!=0){
         incluir_na_fila(fila_B, num[i]);
      }
   }

   printf("\nFila A: \n");
   mostrar(fila_A);

   printf("\nFila B: \n");
   mostrar(fila_B);

   return 0;
}

fila *aloca_fila(){
   fila *novo;
   novo = (fila *)malloc(sizeof(fila));
   novo->inicio = NULL;
   novo->fim = NULL;
   novo->qtd = 0;

   return novo;
}

registro *aloca_registro(){
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

void mostrar(fila *f){
   registro *aux;

   if (f->inicio == NULL){
      printf("\n A fila esta vazia!\n");
   }
   else{
      printf("\n");
      aux = f->inicio;
      while (aux != NULL)
      {
         printf(" %d  ", aux->valor);
         aux = aux->prox;
      }
      printf("\n");
   }
}

void selection_sort (int *vet, int tam){
   int i, j, aux1, aux;
   for (i=0; i<(tam-1); i++){
      aux1 = i;
      for(j = i+1; j<tam; j++){
         if (vet[j] < vet[aux1]){
         aux1 = j;
         }
      }
      if(i != aux1){
         aux = vet[i];
         vet[i] = vet[aux1];
         vet[aux1] = aux;
      }
   }
}




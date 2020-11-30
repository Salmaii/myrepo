/*
G. BALADA
-------------------------------------Gabriel Salmai - 1922130017---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct pilha_reg
{
	int qtd;
	struct registro *inicio;
}pilha_reg;

typedef struct registro
{
	int num;
	struct registro *prox;
}registro;

void incluir_na_pilha(pilha_reg *pilha, int num);
void chamar_na_pilha(pilha_reg *pilha);
void selection_sort (int *vet, int tam);

int main(int argc, char const *argv[])
{
   pilha_reg *pilha;
	
	int qtd, *vet, tam, i;

   printf("Digite a quantidade de alunos: \n");
	scanf("%i", &tam);

	vet = (int *)malloc(sizeof(int) * tam);
	pilha = (pilha_reg *)malloc(sizeof(pilha_reg));
	
	pilha->inicio = NULL;
	pilha->qtd = 0;

	for(i=0; i<tam; i++){
      printf("Nota do %i aluno: ", i+1);
		scanf("%i", &vet[i]);
	}

	selection_sort(vet, tam);

	for(i=0; i<tam; i++){
		incluir_na_pilha(pilha, vet[i]);
	}

   printf("\n");
	for(i=0; i<tam; i++){
		chamar_na_pilha(pilha);
	}

   return 0;
}

void incluir_na_pilha(pilha_reg *pilha, int num){
	registro *novo, *aux;

	novo = (registro *)malloc(sizeof(registro));
	novo->num = num;

	if(pilha->inicio == NULL){
		pilha->inicio = novo;
	}
	else{
		aux = pilha->inicio;
		novo->prox = aux;
		pilha->inicio = novo;
	}

	pilha->qtd++;
}

void chamar_na_pilha(pilha_reg *pilha){
	registro *aux;
	
	if(pilha->inicio == NULL){
		return;
	}
	else{
		aux = pilha->inicio;
		pilha->inicio = aux->prox;
		printf("%i\n", aux->num) ;
		free(aux);
	}

	pilha->qtd--;
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


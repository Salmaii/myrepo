/*
F.DNA
-------------------------------------Gabriel Salmai - 1922130017---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pilha_reg
{
	int qtd;
	struct registro *inicio;
}pilha_reg;

typedef struct registro
{
	char num[1];
	struct registro *prox;
}registro;

void incluir_na_pilha(pilha_reg *pilha, char *num);
char chamar_na_pilha(pilha_reg *pilha);
void verificar(pilha_reg *pilha, int tam);

int main(int argc, char const *argv[])
{
   pilha_reg *pilha;

	int i, tam, *vet;
	char base_nit[0];

   printf("Digite o tamanho da sequencia: \n");
	scanf("%d", &tam);
	
	vet = (int *)malloc(sizeof(int) *tam);
	pilha = (pilha_reg*)malloc(sizeof(pilha));

	pilha->inicio = NULL;
	pilha->qtd = 0;

	for (i=0; i<tam; i++){
      printf("Digite a %i letra da sequencia: ", i+1);
		scanf("%s", base_nit);
		incluir_na_pilha(pilha, base_nit);
	}

	verificar(pilha, tam);

	return 0;
}

void incluir_na_pilha(pilha_reg *pilha, char *num){
	registro *novo, *aux;

	novo = (registro *)malloc(sizeof(registro));
	strcpy(novo->num, num);
	if (pilha->inicio == NULL)
	{
		pilha->inicio = novo;
	}
	else
	{
		aux = pilha->inicio;
		novo->prox = aux;
		pilha->inicio = novo;
		pilha->qtd++;
	}
}

char chamar_na_pilha(pilha_reg *pilha){
   registro *aux;
	char caractere[1];
   
   if (aux = pilha->inicio){
      pilha->inicio = aux->prox;
      strcpy(caractere, aux->num);
      pilha->qtd = pilha->qtd-1;
   }
	return *caractere;
}

void verificar(pilha_reg *pilha, int tam){
   int i, cont=0;
	char aux, aux1;

	for (i=0; i<tam/2; i++){
		aux = chamar_na_pilha(pilha);
		aux1 = chamar_na_pilha(pilha);
		
		if ((aux=='T' && aux1=='A')||(aux=='A' && aux1=='T')){
			cont++;
		}
		else if ((aux=='C' && aux1 =='G')||(aux=='G' && aux1=='C')){
			cont++;
		}
	}
	if (cont==tam/2){
		printf("\nSIM\n");
	} 
    else{
		printf("\nNAO\n");
	}
}
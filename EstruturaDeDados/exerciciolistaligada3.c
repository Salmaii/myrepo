/*

Construa um programa que receba N números do usuário e insira esses números de forma ordenada em uma lista ligada
Não é permitido a utilização de vetores;

O programa deverá ler números do usuário até que seja digitado o número -1

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
void mostrar(lista *l);
void sort(lista *l);

int main(){
    lista *lista_1;
    int numero = 0;
    int i;

    lista_1 = aloca_lista();

    printf("\n Digite os numeros para ser includo na lista, quando quiser parar digite (-1):\n");

    while(numero!=-1){
    printf("-> ");
    scanf("%d", &numero);
    incluir_na_lista(lista_1, numero);
    }

    //sort(lista_1);
    
    printf("\n Lista ordenada:");
    mostrar(lista_1);
    
return 0;
}

lista *aloca_lista(){
    lista *nova_lista;

    nova_lista = (lista *)malloc(sizeof(lista));
    nova_lista->qtd = 0;
    nova_lista->inicio = NULL;
    return nova_lista;
}

registro *aloca_registro(){
    registro *novo_registro;
    novo_registro = (registro *)malloc(sizeof(registro));
    novo_registro->valor = 0;
    novo_registro->prox = NULL;
    return novo_registro;
}

void incluir_na_lista(lista *l, int x){
    registro *novo, *aux;
    int temp;
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

        if(l->qtd > 1){
            if(novo>aux){
                aux->prox->valor = novo;
            }
            else{
                temp = l->inicio->valor;
                l->inicio->valor = novo;
                aux->prox->valor = temp;
            }
        }
        
        aux->prox = novo;
    }

    l->qtd++;
}

void mostrar(lista *l){
    registro *aux;
    int i;

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
            printf("\n-> %d", aux->valor);
            aux = aux->prox;
        }
    }
    printf("\n---END---\n");
}

/*
void sort(lista *l){
    registro *aux, *temp;
    int i;

    aux = l->inicio->prox;

    for(i=0;i<l->qtd;i++){
        while(aux->prox!=NULL){
            if(l->inicio->valor>aux->valor){
                temp->valor = l->inicio->valor;
                l->inicio->valor = aux->valor;
                aux->valor = temp->valor;
                aux = aux->prox;
            }
        }
    }
}
*/
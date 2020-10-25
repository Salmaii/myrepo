/* Construa um programa que leia do usuário 10 valores inteiros;
armazene os valores pares em uma lista ligada de nome lista_de_pares e os números ímpares em uma lista
de nome lista_de_ímpares;

Depois de preenchida as 2 listas, diga qual das 2 listas é a maior e mostre seus valores;
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

int main(){
    lista *lista_impar;
    lista *lista_par;
    int numero = 0;
    int i;

    lista_impar = aloca_lista();
    lista_par = aloca_lista();

    printf("\n Digite 10 numeros para ser includo na lista: ");

    for(i=0;i<10;i++){
    scanf("%d", &numero);
    if(numero%2==0){
        incluir_na_lista(lista_par, numero);
    }
    else{
        incluir_na_lista(lista_impar, numero);
    }
    }

    if(lista_par->qtd > lista_impar->qtd){
        printf("\nA maior lista é a lista par\n\n");
        mostrar(lista_par);
    }
    else{        
        printf("\nA maior lista é a lista impar\n\n");
        mostrar(lista_impar);
    }
    
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

void mostrar(lista *l){
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
            printf("\n%d", aux->valor);
            aux = aux->prox;
        }
    }
}

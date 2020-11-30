/*
J.LISTA DE CONVIDADOS
-------------------------------------Gabriel Salmai - 1922130017---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NO 0
#define YES 1

typedef struct Nomes{
        char nome[200];
        struct No* prox;
}Nomes;

int verificaNome(Nomes* lista,char nomeProvisorio[]);
Nomes* inserirNome(Nomes* lista,char nomeProvisorio[]);
void mostrarRespostas(Nomes* lista);
Nomes* inserirRespostas(Nomes* lista,int logico);

int main()
{
    int numeroNomes = 0,i;
    Nomes* listaNomes = NULL;
    Nomes* listaRespostas = NULL;

    printf("Insira quantidade de convidados:");
    scanf(" %d",&numeroNomes);

    char nomeProvisorio[200];

    for (i = 0; i < numeroNomes; i++)
    {
        scanf(" %[^\n]s", nomeProvisorio);
        if(!verificaNome(listaNomes, nomeProvisorio)){
            listaNomes = inserirNome(listaNomes, nomeProvisorio);
            listaRespostas = inserirRespostas(listaRespostas,NO);

        }
        else{
            listaRespostas = inserirRespostas(listaRespostas,YES);
        }
    }
    mostrarRespostas(listaRespostas);

    return 0;
}

void mostrarRespostas(Nomes* lista){
    while(lista){
        printf("%s\n",lista->nome);
        lista = lista->prox;
    }
}

Nomes* inserirRespostas(Nomes* lista,int logico){
    Nomes* novo = malloc(sizeof(Nomes));
    novo->prox = NULL;
    if(logico){
        strcpy(novo->nome, "NO");
    }
    else{
        strcpy(novo->nome, "YES");
    }

    if(lista){
        novo->prox = lista;
    }

    return novo;
}

Nomes* inserirNome(Nomes* lista,char nomeProvisorio[]){
    Nomes* novo = malloc(sizeof(Nomes));
    strcpy(novo->nome, nomeProvisorio);
    novo->prox = NULL;

    if(lista){
        novo->prox = lista;
    }
    return novo;
}

int verificaNome(Nomes* inicioLista,char nomeProvisorio[]){
    int logica= 0;
    Nomes* aux = malloc(sizeof(Nomes));
    aux = inicioLista;
    while(aux){
        if(strcmp(aux->nome, nomeProvisorio) == 0){
            logica = 1;
            }
        aux = aux->prox;
    }
    return logica;
}
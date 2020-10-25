/*
Pergunta 3

Utilizando o mesmo menu da questão 1, implemente utilizando uma estrutura 
de lista ligada ou duplamente ligada.
-------------------------------------Gabriel Salmai - 1922130017---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct fila
{
    int qtd;
    struct registro *pri;
    struct registro *ult;
} fila;

typedef struct registro
{
    int valor;
    struct registro *prox;
} registro;


registro *aloca_registro();
fila *aloca_fila();
void mostrar(fila *f);
void incluir_na_fila(fila *f, int x);
void chamar_na_fila(fila *f);

int main(int argc, char const *argv[]){

    int opcao, valor;

    fila *fila1;
    fila1 = aloca_fila();

    do{
        mostrar(fila1);

        printf("\n(1) Incluir na fila \n(2) Chamar alguem \n(3) Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao){
        case 1:
            printf("\nDigite o valor: ");
            scanf("%d", &valor);
            incluir_na_fila(fila1, valor);
            printf("\n");
            break;
        case 2:
            chamar_na_fila(fila1);
            break;
        case 3:
            break;
        default:
            printf("\nOpcao Invalida\n");
            break;
        }

    }while(opcao != 3);
    
    return 0;
}


fila *aloca_fila()
{
    fila *novo;
    novo = (fila *)malloc(sizeof(fila));
    novo->qtd = 0;
    novo->pri = NULL;
    novo->ult = NULL;
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

void incluir_na_fila(fila *f, int x)
{
    registro *novo;
    novo = aloca_registro();
    novo->valor = x;

    if (f->pri == NULL && f->ult == NULL)
    {
        f->pri = novo;
        f->ult = novo;
    }
    else
    {
        f->ult->prox = novo;
        f->ult = novo;
    }
    f->qtd++;
}

void mostrar(fila *f)
{
    registro *aux;
    if (f->pri == NULL)
    {
        printf("\nFila Vazia");
    }
    else
    {
        aux = f->pri;
        while (aux != NULL)
        {
            printf("<-  %d  ", aux->valor);
            aux = aux->prox;
        }
    }
}

void chamar_na_fila(fila *f)
{
    registro *aux;
    int x;

    if(f->pri != NULL){
        aux = f->pri;
        x = aux->valor;
        f->pri = aux->prox;
        free(aux);
        f->qtd--;
        printf("\n%d Chamado com Sucesso\n\n",x);
    }
    return;
}
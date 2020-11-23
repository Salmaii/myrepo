/*
Pergunta 2

Utilizando o mesmo menu da questão anterior, implemente uma 
fila circular utilizando como estrutura base um vetor.
-------------------------------------Gabriel Salmai - 1922130017---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct fila
{
    int pri, ult, qtd, tam, *dados;
}fila;

void criarfila(fila *f, int x);
void inserir(fila *f, int x);
void mostrar(fila *f);

int chamar(fila *f);
int vazia(fila *f);
int cheia(fila *f);

void main()
{
    int opcao, tam, valor=0;
    fila *fila1;

    printf("\nDigite o tamanho maximo da fila: ");
    scanf("%d", &tam);
    criarfila(fila1, tam);

    do 
    {
        printf("FILA");
        if (vazia(fila1))
        {
            printf("\nVAZIA\n");
        }
        else
        {
            printf("\n ");
            mostrar(fila1);
        }
        printf("\n(1) Incluir na fila \n(2) Chamar alguem \n(3) Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (cheia(fila1))
            {

                printf("\nCHEIA!\n");
            }
            else
            {

                printf("\nDigite um valor:");
                scanf("%d", &valor);
                inserir(fila1, valor);
            }

            break;

        case 2: 
            if (vazia(fila1))
            {

                printf("\nVAZIA\n\n");
            }
            else
            {

                valor = chamar(fila1);
                printf("\n%d chamado com sucesso\n", valor);
            }
            break;
        case 3:
            printf("Saindo!\n");
            break;
        default:
            printf("\nOpcao Invalida!\n");
        }
    } while (opcao != 3);
}

void criarfila(fila *f, int x)
{
    f->tam = x; 
    f->dados = (int *)malloc(sizeof(int) * f->tam);
    f->pri = 0;
    f->ult = -1;
    f->qtd = 0;
}

void inserir(fila *f, int x)
{
    if (f->ult == f->tam - 1)
    {
        f->ult = -1;
    }

    f->ult++;
    f->dados[f->ult] = x;
    f->qtd++;
}

int chamar(fila *f)
{
    int temp;
    temp = f->dados[f->pri++];

    if (f->pri == f->tam)
    {
        f->pri = 0;
    }

    f->qtd--;
    return temp;
}


int vazia(fila *f)
{
    return (f->qtd == 0);
}

int cheia(fila *f)
{
    return (f->qtd == f->tam);
}

void mostrar(fila *f)
{
    int i=0, j;
    for(i, j=f->pri;i<f->qtd;i++)
    {
        printf(" <- %d ", f->dados[i++]);
        
        if (i == f->tam)
        {
            i = 0;
        }
    }
}
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

typedef struct fila
{
    int *dds;
    int primeiro, ultimo, qtd, tamanho;
}fila;

void criarfila(fila *f, int x);
void inserir(fila *f, int x);
int chamar(fila *f);
int vazia(fila *f);
int cheia(fila *f);
void mostrar(fila *f);

void main()
{
    int opcao;
    int tam;
    int valor = 0;
    fila fila1;

    printf("\nTamanho: ");
    scanf("%d", &tam);
    criarfila(&fila1, tam);

    do 
    {
        printf("FILA");
        if (vazia(&fila1))
        {

            printf("\nVAZIA\n");
        }
        else
        {

            printf("\n ");
            mostrar(&fila1);
        }
        printf("\n1 - Incluir na fila");
        printf("\n2 - Chamar alguem");
        printf("\n3 - Sair");
        printf("\nOpcao:");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (cheia(&fila1))
            {

                printf("\nCHEIA!\n");
            }
            else
            {

                printf("\nDigite um valor:");
                scanf("%d", &valor);
                inserir(&fila1, valor);
            }

            break;

        case 2: 
            if (vazia(&fila1))
            {

                printf("\nVAZIA\n\n");
            }
            else
            {

                valor = chamar(&fila1);
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
    f->tamanho = x; 
    f->dds = (int *)malloc(sizeof(int) * f->tamanho);
    f->primeiro = 0;
    f->ultimo = -1;
    f->qtd = 0;
}

void inserir(fila *f, int x)
{
    if (f->ultimo == f->tamanho - 1)
    {
        f->ultimo = -1;
    }

    f->ultimo++;
    f->dds[f->ultimo] = x;
    f->qtd++;
}

int chamar(fila *f)
{
    int temp;
    temp = f->dds[f->primeiro++];

    if (f->primeiro == f->tamanho)
    {
        f->primeiro = 0;
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
    return (f->qtd == f->tamanho);
}

void mostrar(fila *f)
{
    int contador, i;
    for (contador = 0, i = f->primeiro; contador < f->qtd; contador++)
    {
        printf("%d\t", f->dds[i++]);

        if (i == f->tamanho)
        {
            i = 0;
        }
    }
}
=======
/*
Pergunta 2

Utilizando o mesmo menu da questão anterior, implemente uma 
fila circular utilizando como estrutura base um vetor.
-------------------------------------Gabriel Salmai - 1922130017---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){   

   int fila[5], *p, opcao, valor;
   p = &fila[0];

   do{
      mostrar(fila);

      printf("\n(1) Incluir na fila \n(2) Chamar alguem \n(3) Sair");
      printf("\nEscolha uma opcao: ");
      scanf("%d", &opcao);

      switch (opcao){
      case 1:
         printf("\nDigite o valor: ");
         scanf("%d", &valor);
         if(p != 4){
            *p = valor;
            *p++;
         }
         else
         {
            printf("Fila Cheia");
         }
         //incluir_na_fila(fila, valor);
         printf("\n");
         break;
      case 2:

         //chamar_na_fila(fila);
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


>>>>>>> 7b84f1aed5320685122c1485a8149fb3fd39c101

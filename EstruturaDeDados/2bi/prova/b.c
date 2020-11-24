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

void selection_sort (int * vet,int tam);

int main()
{
   int opcao, tam, valor=0, i;
   fila *fila1;

   printf("\nDigite o tamanho da fila: ");
   scanf("%d", &tam);
   criarfila(fila1, tam);

   for(i=0;i<tam;i++){
   printf("Digite a altura do %i soldado: ", i + 1);
   scanf("%i", &valor);
   inserir(fila1, valor);
   }

   selection_sort(fila1, tam);
   
   mostrar(fila1);

    
   return 0;
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

void selection_sort (int * vet, int tam){
long int i, j, aux1, aux;

for (i = 0; i < (tam - 1); i++){
  aux1 = i;
  for (j = i+1; j < tam; j++) {
    if (vet[j] < vet[aux1]) {
  aux1 = j;
    }
  }
  if (i != aux1){
    aux = vet[i];
    vet[i] = vet[aux1];
    vet[aux1] = aux;
  }
}}

/*

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

    */
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

void selection_sort (int * vet, int tam);

int main(int argc, char const *argv[]){

   int opcao, valor, tam, i, j;

   fila *fila1;
   fila1 = aloca_fila();
  
   printf("\nDigite o tamanho da fila: ");
   scanf("%d", &tam);

    int vet[tam];
    int vet2[tam];


    for(i=0;i<tam;i++){
      printf("Digite o tamanho do %i soldado: ", i + 1);
      scanf("%i", &valor);
      vet[i] = valor;
      vet2[i] = valor;
    }

   selection_sort(vet, tam);

    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(i!=j){
                if(vet[i] - vet[j] == 0){
                    printf("%i\t", i + 1);
                }
                else if(vet[i] - vet[j] > 0)
                {
                    printf("%i\t", i + 1);
                }
                
            }
        }   
    }


   // mostrar(fila1);









/*

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
    
*/



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

void selection_sort (int * vet, int tam){
int i, j, aux1, aux;

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
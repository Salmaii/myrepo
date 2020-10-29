/*
Pergunta 1

Faça um programa que disponibilize 3 opções para o usuário
1 - Incluir na Fila
2 - Chamar alguém da fila
3 - Sair.

Implemente uma lógica de fila utilizando obrigatoriamente uma estrutura de vetor.
-------------------------------------Gabriel Salmai - 1922130017---------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){

   int tam, valor, opcao, i=0, j=0, cont, qnt=0;

   printf("\nDigite o tamanho da fila: ");
   scanf("%i", &tam);
   printf("\n");
   int fila[tam], inv[tam];

   do{

      printf("Fila:\t");

      if(qnt>0 && qnt != 1){
         for(cont=0;cont<tam;cont++){
            inv[cont]=fila[tam-cont-1];
         }
      }

      if(qnt != 1){
         for(cont=0;cont<qnt;cont++){
            printf("->  %i  ", inv[cont]);
         }
      }
      else
      {
         for(cont=0;cont<qnt;cont++){
         printf("->  %i  ", fila[cont]);
         }
      }
   
      printf("\n\n(1) Incluir na fila \n(2) Chamar alguem \n(3) Sair");
      printf("\nEscolha uma opcao: ");
      scanf("%d", &opcao);

      switch (opcao){
      case 1:
         if(i == tam){
            printf("\n(x) Fila Cheia\n\n");
         }
         else
         {
            printf("\nDigite o valor: ");
            scanf("%d", &valor);
            printf("\n");
            
            fila[i] = valor;
            i++;
            qnt++;
         }
         break;
      case 2:
      if(qnt>0){
         printf("\n(Ok) Valor chamado: %i \n\n",  fila[j]);
         j++;         
         qnt--;
         i--;
         }
         else
         {
            printf("\n(x) Fila Vazia\n\n");
         }
         break;
      case 3:
         printf("\n");
         break;
      default:
         printf("\nOpcao Invalida\n\n");
         break;
      }

   }while(opcao != 3);

   return 0;
}

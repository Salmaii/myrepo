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



#include <stdio.h>

int func( int n, int y, int i);

int main(int argc, char const *argv[])
{
   int n , aux = 1, i = 0, y, resultado;
   printf("Digite o numero a ser dividido : ");
   scanf("%i", &n);
   printf("Digite o numero que vai dividir: ");
   scanf("%i", &y);
   printf("\nn = %i, y = %i, i = %i \n", n, y, i);

   func(n, y, i);
   printf("\n");
   
   return 0;
}

int func(int n, int y, int i){
   int aux, n1, y1, i1;
   if(n != 1){
      if(n%y==0){
      aux = n/y;
      n = aux;
      n1 = n;
      y1 = y;
      i1 =i + 1;
      printf("n = %i, y = %i, i = %i \n", n1 ,y1, i1);
      }
      else{
         return 0;
      }
      func(n1, y1, i1);
   }
   return 0;
}
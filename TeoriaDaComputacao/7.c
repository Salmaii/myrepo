#include<stdio.h> 

int main(int argc, char const *argv[]){

   int n, i = 0, j = 0;
   scanf("%i", &n);
   
   if(n != 0){
      while (n != 0){
         while (j != n){
            if(i==j){
               printf("\t0");
               i = i + 1;
               break;
            }
            while(i < n){
               if(j<i){
                  printf("\t*");
                  i = i + 1;
               }
               if(j>i){
                  printf("\t+");
                  i = i + 1;
               }
            }
            j = j + 1;
            i = 0;
            printf("\n");
         }
         n = n + 1;
      }
   }

   return 0;
}

#include <stdio.h> 
#include <string.h>

int main(int argc, char const *argv[]){

   char nome[10];
   
   printf("\n-----------------------------------------------------------------------------------------------------");
   printf("\n\t\t\t OBS: Coloque o arquivo na pasta photos e salve como arq\n");
   printf("\t\t\t\t\tApos isso clique ENTER\n");
   getchar();

   FILE* arquivo;
   arquivo = fopen(".\\photos\\arq.txt","r");

   while (!feof(arquivo)){
   printf("%c", fgetc(arquivo));
   }
   
   fclose(arquivo);
   return 0;
}

#include <stdio.h> 
#include <string.h>

int main(int argc, char const *argv[]){

   char nome[10];
   
   printf("\n-----------------------------------------------------------------------------------------------------\n");

   printf("\t\t\t\tUse este site para converter o arquivo\n");
   printf("\t\t\t>>> https://www.text-image.com/convert/ascii.html <<<\n");
   printf("\n\tColoque o arquivo de foto convertido para .txt na pasta photos e salve como arq\n\n");

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

//usar funçoes de fopen para criar o arquivo de texto 
//pedir para pessoa colar o resultado do site dentro do bloco de texto


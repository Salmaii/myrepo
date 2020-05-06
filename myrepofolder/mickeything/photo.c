#include <stdio.h> 
#include <string.h>

int main(int argc, char const *argv[]){

   char nome[10];
   
   printf("\n\n\n\n\n\n\t\t\tColoque o arquivo na pasta photos\n");
   printf("\nDigite o nome do arquivo sem a extansao: \n-");
   scanf("%s", nome);

   FILE* arquivo;
   arquivo = fopen(".\\photos\\strcat.txt", "r");

   while (!feof(arquivo)){
   printf("%c", fgetc(arquivo));
   }
   
   fclose(arquivo);
   return 0;
}

//concatenar o nome do arquivo para o fopen
//colocar o arquivo dentro da pasta photos 
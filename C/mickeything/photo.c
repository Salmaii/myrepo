#include <stdio.h> 
#include <string.h>

int main(int argc, char const *argv[]){

   char name[25];
   char caminho[12] = ".\\photos\\"; 

   printf("\n+-------------------------------------------------------------------------------------------------------+");
   printf("\n|1-\t\t\t\tUse este site para converter o arquivo\t\t\t\t\t|");
   printf("\n|2-\t\t\t>>> https://www.text-image.com/convert/ascii.html <<<\t\t\t\t|");
   printf("\n|3-\t\t    Coloque o arquivo de foto convertido para .txt na pasta photos\t\t\t|");
   printf("\n+-------------------------------------------------------------------------------------------------------+");

   printf("\n\nDigite o nome do arquivo e clique ENTER para printar:\n-");
   scanf("%s", name);

   strcat(caminho, name) && strcat(caminho, ".txt");

   getchar();

   FILE* arquivo;
  // arquivo = fopen(".\\photos\\arq.txt","r");
  arquivo = fopen(caminho,"r");

   while (!feof(arquivo)){
   printf("%c", fgetc(arquivo));
   }
   
   getchar();

   fclose(arquivo);
   
   return 0;
}

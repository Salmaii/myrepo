#include <stdio.h> 
#include <string.h>

int main(int argc, char const *argv[]){

  FILE* arquivo;
  arquivo = fopen("1.txt","r");
  system("cls");

  while (!feof(arquivo)){
  printf("%c", fgetc(arquivo));
  }
  sleep(1);
  system("cls");

    arquivo = fopen("2.txt","r");

  while (!feof(arquivo)){
  printf("%c", fgetc(arquivo));
  }
  sleep(1);
  system("cls")
 ; 
    arquivo = fopen("3.txt","r");

  while (!feof(arquivo)){
  printf("%c", fgetc(arquivo));
  }
  sleep(1);
  system("cls");

    arquivo = fopen("4.txt","r");

  while (!feof(arquivo)){
  printf("%c", fgetc(arquivo));
  }
  sleep(1);
  system("cls");

    arquivo = fopen("5.txt","r");

  while (!feof(arquivo)){
  printf("%c", fgetc(arquivo));
  }
  sleep(1);
  system("cls");

    arquivo = fopen("6.txt","r");

  while (!feof(arquivo)){
  printf("%c", fgetc(arquivo));
  }
  sleep(1);
  system("cls");

  fclose(arquivo);

   return 0;
}

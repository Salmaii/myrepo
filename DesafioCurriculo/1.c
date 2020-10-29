#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void org();

int main(int argc, char const *argv[])
{
    int x;
    //scanf("%i", &x);
    org();

    return 0;
}


/* input 
3
automatizAI
IESB nota cinco no MEC
o nome calumma vem de uma especie de camaleao
*/

/* output 
00942098561
121834902832
434242010220
*/

void org(){

    int i, j, tam, cont, aux;
    int letra = 97; 
    int dic[10][3], frasefinal1[12];
    char frase[45];

    //for(i=0;i<qtd+1;i++){
        gets(frase);

        //dic caluma -> vetor dic
        for(j=0;j<3;j++){
            for(i=0;i<10;i++){
                dic[i][j] = letra;
                letra++;
            }
        }

        tam = strlen(frase);

        //compara e adiciona na frase 1
        for(cont=0;cont<12;cont++){
            for(i=0;i<10;i++){
                for(j=0;j<3;j++){
                    if(frase[cont]==dic[i][j] && frase[cont] != ' '){
                        frasefinal1[aux] = i;
                        aux++;
                    }                
                }
            }
            
        }
   // }

    for(i=1;i<tam + 1;i++){
        printf("  %i    ", frasefinal1[i]);
    }    
    printf("\n");


    return;
}




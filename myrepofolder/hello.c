#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//printa + nas posiçoes 0 do array e print # nas posiçoes != de 0
void printmap(int lin, int col){
    int map[9][9], i, j;

    map[lin][col] = 1;

    for(i=0;i<9;i++){
        printf("\t\t\t");
        for(j=0;j<9;j++){
            if(map[i][j]==0){
                printf("+");
            }
            else{
                printf("#");
            }
        }
        printf("\n");
    }
}

int main (){
    int lin, col;
    int map[9][9];

    printf("Digite a linha:\n -");
    scanf("%i", &lin);

    printf("Digite a coluna:\n -");
    scanf("%i", &col);

    printmap(lin, col, map[][]);

    return 0;
}
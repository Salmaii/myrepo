#include <stdio.h>
#include <stdlib.h>

void zeromap(int map[][5]){
    int i, j;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            map[i][j]= 0;
        }
    }
}

void showmap(int map[][5]){
    int i, j;

   system("cls"); //funçao para windows
   

    printf("\n\t0 \t1 \t2 \t3 \t4 \n\n");

    for(i=0;i<5;i++){
       printf("%i", i);
        for(j=0;j<5;j++){
            if(map[i][j]==0){
                printf("\t~");
            }
            else if (map[i][j]==1){
                printf("\t#");
            }
            else if (map[i][j]==2){
                printf("\tx");
            }
        }
        printf("\n");
    }
   printf("\n");
}

void attmap(int lin, int col, int map[][5]){
   map[lin][col]=2;
}

void attnav(int lin, int col, int map[][5]){
   map[lin][col]=1;
}

void try(int map[][5]){

   int lin, col;
      printf("Digite a linha que deseja atacar:\n -");
      scanf("%i", &lin);

      printf("Digite a coluna que deseja atacar:\n -");
      scanf("%i", &col);

      if(lin == map[]){

            attnav(lin, col, map);
            attmap(lin, col, map);
      }

}

void put(int map[][5]){
   int nav, lin, col;

   for(nav=0;nav<3;nav++){

      printf("Digite a linha que deseja colocar o navio:\n -");
      scanf("%i", &lin);

      printf("Digite a coluna que deseja colocar o navio:\n -");
      scanf("%i", &col);
   }
   
}


int main(int argc, char const *argv[]){
    int map[5][5];
    int life=5;

    zeromap(map);

    do{
      showmap(map);
      put(map);
      try(map);

    }while (life!=0);
    


    
    return 0;
}

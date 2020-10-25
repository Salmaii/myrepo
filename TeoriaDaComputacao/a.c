#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int x;
    int y;
    x = 0;
    y = 0;
    printf("Digite um numero");
    scanf("%d", &num);


    while (x < num) //linha
    {
        while (y < num) //coluna
        {
            if (x < y)      //  
            {
                printf("*");
            }
            else if (x == y)  // 
            {
                printf("0");
            }
            else if (x > y)  // 
            {
                printf("+");
            }
            y++;
        }
        printf("\n");
        x++;
        y = 0;
    }
    x = 0;
}
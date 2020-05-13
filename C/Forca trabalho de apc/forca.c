													
													
////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
//                        Gabriel salmai, 1°semestre                                  //
//                             trabalho de APC                                        //
//                              jogo da forca                                         //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdlib.h>
#include <string.h>  
#include <conio.h>   
#include <windows.h> 
#include <locale.h>  
#include "conio.c"

/******* funçoes  ******/
void screen(void);
void anima(void);
void game(void);
void saida(void);
void estrelas(void);
void music(void);
/******* funçoes  ******/

/** variaveis globais **/

int cont, restart;

/** variaveis globais **/

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
int main(void)
{
	SetConsoleTitle("------------------------------------------------------------------------------Forca------------------------------------------------------------------------------");
    setlocale(LC_ALL, "Portuguese");

    //introdução
    screen();
    system("pause");
    system("cls");

    //star games sreen
    anima();
    system("pause");
    system("cls");
    
    //animação sky
    estrelas();
    Sleep(5);
    system("cls");
    system("color 06");
    
    //game
    do
    {
        game();
    } while (restart == 1);

    //saida
    saida();

    return 0;
}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//

void screen(void)
{
	int g;
	int l=45, c=25;

	system("color 06");
    printf("\n \n \n \n \n \n \n \n \n \n------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n \n \t \t \t \t \t J O G O    D A    F O R C A  \n \n ");
    printf("\n------------------------------------------------------------------------------------------------------------------------\n \n \n \n \n");
	for(g;g<10;g++){
		textcolor(g);
		gotoxy(l,c);
		printf("Click enter to start");
		Sleep(60);
	}
    printf(" \n \n \n \n \n");
    system("color 06");

    return;
}

void anima(void)
{
    system("color 06");
    printf("\n \t \t ___________________________________________________________________________________________________\n");
    printf("\t \t | \t \t \n");
    printf("\t \t | \t \t´´´´´´´´´´´´´´´´´´´´´¶*.**.*.*.*\n");
    printf("\t \t | \t \t´´´´´´´´´´´´´´´´´´´´¶¶*..**.*.\n ");
    printf("\t \t | \t \t´´´´´´´´´´´´´´´´´´´¶¶¶*.*.**.*\n ");
    printf("\t \t | \t \t´´´´´´´´´´´´´´´´´´¶¶¶¶¶*.*.**.*.*\n ");
    printf("\t \t | \t \t´´´´´´´´´´´´´´´´´¶¶¶¶¶¶*.*.*.*.*\n ");
    printf("\t \t | \t \t´´´¶¶¶¶¶´´´´´´´´¶¶¶´´¶¶ *.**.*.*\n ");
    printf("\t \t | \t \t´´´´´¶¶¶¶¶¶¶¶¶¶¶¶¶´´´¶¶*..**.**.*\n ");
    printf("\t \t | \t \t´´´´´´¶¶¶¶´´¶¶¶¶¶´´´´¶¶¶*.**.*.* \n ");
    printf("\t \t | \t \t´´´´´´´´¶¶¶´´´´´´´´´´¶¶¶¶¶¶¶¶¶¶¶*.*.**…\n ");
    printf("\t \t | \t \t´´´´´´´´´¶¶¶¶´´´¶¶¶¶´´´´´´´´¶¶¶¶¶¶¶¶*….\n ");
    printf("\t \t | \t \t´´´´´´´´´´´¶¶¶¶´¶¶¶¶´´´´´¶¶¶¶¶¶*.**.*\n ");
    printf("\t \t | \t \t´´´´´´´´´´´¶¶¶´´´´´¶´¶¶¶¶¶¶*.*.*.**.\n ");
    printf("\t \t | \t \t´´´´´´´´´´¶¶´´´´´¶´´´´¶¶*.*.*.**.\n ");
    printf("\t \t | \t \t´´´´´´´´´¶¶´´¶¶¶¶¶¶´´´¶¶¶*.*.*.*\n ");
    printf("\t \t | \t \t´´´´´´´´¶¶¶¶¶¶¶¶´¶¶¶¶´¶¶¶ .**.*.\n ");
    printf("\t \t | \t \t´´´´´´´¶¶¶¶¶´´´´´´´¶¶¶¶¶¶ *.**.*\n ");
    printf("\t \t | \t \t´´´´´¶¶¶¶´´´´´´´´´´´¶¶¶¶¶ *.**.\n ");
    printf("\t \t | \t \t´´´´´¶´´´´´´´´´´´´´´´´¶¶¶*.*.*.\n ");
    printf("\t \t | \t \t´´´´´´´´´´´´´´´´´´´´´´´¶¶¶*.*.**.\n ");
    printf("\t \t | \t \t´´´´´´´´´´´´´´´´´´´´´´´´¶*.*.**.*\n ");
    printf("\t \t | \t \t© 2019 stargames ss corporation All Rights Reserved \n ");

    //-----------------loading-------------------
    printf(" \n \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Loading");
        for (int j = 0; j < 100; j++)
        {
            printf(".");
            Sleep(1);
        }
        printf("\r");
        for (int j = 0; j < 110; j++)
        {
            printf(" "); // apaga a linha anterior
        }
        printf("\r");
    }
    printf("\n\t \t \t \t--------------------Ready-------------------- \n \n ");

    //-----------------loading-------------------

    return;
}

void game(void)
{
    //-------------------------player 1 digita a palavra ------------------------------

    char palavra[25]; //, letra[25], lacuna[25] = "__________";
    int vida = 5, x, i, tam, pontos = 0;

    printf("\n------------------------------------------------------------------------------------------------------------------------\n \n ");
    printf("\t \t \t \t \t -------------PLAYER 1------------- \n \n ");
    printf(" Insira a palavra: \n \t");
    gets(palavra);
    system("cls");

    //le o tamanho da palavra e armazena na variavel 'tam', e mostra * na variavel lacuna
    tam = strlen(palavra);
    char letra[tam], lacuna[tam] ;
    //-------------------------player 2 game ------------------------------

    printf("\n------------------------------------------------------------------------------------------------------------------------\n \n ");
    printf("\t \t \t \t \t -------------PLAYER 2------------- \n \n ");

    printf("__________ \n");
    printf(" |        | \n");
    printf(" |        O_/ \n");
    printf(" |      _/| \n");
    printf(" |        | \n");
    printf(" |       / \\ \n");
    printf(" | \t \t \t A palavra tem %i digitos \n", tam);
    printf(" | \t \t \t \t ");
    //imprime underlines no lugar da palavra
    for (i = 0; i < tam; i++)
    {
        printf("*");
    }
    //imprime underlines no lugar da palavra
    printf("\n");
    printf(" |___________________________________________________________________________________________________________ \n");
    printf(" \n");

    //-----------jogo start -----------

    for (i = 0; i < strlen(palavra); i++)
        while (vida > 0)
        {
            x = 0;

            printf("\n digite uma letra: ");
            gets(letra);
            for (i = 0; i < strlen(palavra); i++)
            {
                if (letra[0] == palavra[i])
                {
                    lacuna[i] = palavra[i];
                    x++;
                }
            }
            if (x == 0)
            {
                vida = vida - 1;
                if (vida == 0)
                {
                    //-------- se perder o jogo ---------------
                    system("cls");
                    system("color 40");

                    printf("\n------------------------------------------------------------------------------------------------------------------------\n \n ");
                    printf("\t \t \t \t \t -------------PLAYER 2------------- \n \n ");

                    printf(" __________ \n");
                    printf(" |        | \n");
                    printf(" | \n");
                    printf(" |        x_/ \n");
                    printf(" |      _/| \n");
                    printf(" |        | \t    - VOCE PERDEU! -\n");
                    printf(" |       / \\ \t A palavra correta era: \n");
                    printf(" | \t \t ");
                    printf("     --- %s ---", palavra);
                    printf("\n");
                    printf(" |___________________________________________________________________________________________________________ \n");
                    printf(" \n");
                    printf("\t \t \t \t\t\t\tPontos %i \n\n", pontos);
                    break;
                    //-------- se perder o jogo ---------------
                }
                else
                    system("cls");

                printf("\n------------------------------------------------------------------------------------------------------------------------\n \n ");
                printf("\t \t \t \t \t -------------PLAYER 2------------- \n \n ");
                printf(" __________ \n");
                printf(" |        | \n");
                printf(" |        O_/ \n");
                printf(" |      _/| \n");
                printf(" |        | \t \t VOCE ERROU! RESTAM %d VIDA(S) \n", vida);
                printf(" |       / \\ \n");
                printf(" | \n");
                printf(" |\tScore %i \t\t", pontos);
                //imprime underlines no lugar da palavra
                printf("%s", lacuna);
                //imprime underlines no lugar da palavra
                printf("\n");
                printf(" |___________________________________________________________________________________________________________ \n");
                printf(" \n");
            }

            else
            {
                system("cls");

                for (i = 0; i < strlen(palavra); i++)
            {
                if (letra[0] == lacuna[i])
                {
                pontos = pontos + 1;
                }
            }

                printf("\n------------------------------------------------------------------------------------------------------------------------\n \n ");
                printf("\t \t \t \t \t -------------PLAYER 2------------- \n \n ");
                printf(" __________ \n");
                printf(" |        | \n");
                printf(" |        O_/ \n");
                printf(" |      _/| \n");
                printf(" |        | \t \t VOCE ACERTOU UMA LETRA! \n");
                printf(" |       / \\ \n");
                printf(" | \n");
                printf(" |\tScore %i \t\t", pontos);
                //imprime underlines no lugar da palavra
                printf("%s", lacuna);
                //imprime underlines no lugar da palavra
                printf("\n");
                printf(" |___________________________________________________________________________________________________________ \n");
                printf(" \n");
                
                

                if (pontos == tam)
                {
                    system("cls");
                    system("color 20");

                    printf("\n------------------------------------------------------------------------------------------------------------------------\n \n ");
                    printf("\t \t \t \t \t -------------PLAYER 2------------- \n \n ");
                    printf(" __________                 \n");
                    printf(" |        |                  \n");
                    printf(" |        x                   \n");
                    printf(" |                             \n");
                    printf(" |      \\_O_/\t\tVOCE GANHOU!   \n");
                    printf(" |        |                      \n");
                    printf(" |        |  \t\t--- %s --- \n", palavra);
                    printf(" |_______/_\\_________________________________________________________________________________________________ \n");
                    printf(" \n");
                    printf("\t \t \t \t\t\t\tPontos %i \n\n", pontos);

                    vida = 0;
                }
                else
                {
                    continue;
                }
            }
        }
    system("pause");
    system("cls");

    //tela de opçoes para restar ou sair
    system("color 06");
    printf("\n \n \n \n \n \n \n \n------------------------------------------------------------------------------------------------------------------------\n \n ");
    printf("\t \t \t \t \t Escolha uma opção: \n \n");
    printf("\t \t \t \t \t [1]- Jogar novamente (Digite a nova palavra)\n");
    printf("\t \t \t \t \t [2]- Sair do jogo (Digite 2)\n \n ");
    printf("\t\t+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+\n");
    printf("\t \tobs -> (Para recomeçar é nescessário digitar 1, e na proxima tela digitar a palavra)\n");
    printf("\t\t+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+----+\n");
    printf("\n\n\t \t \t \t \t \t ");
    scanf("%i", &restart);
    printf("\n \n \n \n \n \n \n \n");
    system("cls");

    return;
}

void saida(void){

	int m;
	
	estrelas();
	system("color 06");

    printf("\n \n \n \n \n \n \n \n \n \n------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n \n \t \t \t \t \t \t   B y e    B y e  \n");
    printf("\t \t \t \t \t \t Obrigado por jogar \n \n ");
    printf("\n------------------------------------------------------------------------------------------------------------------------\n \n \n \n \n");
    printf(" \t \t \t \t \t\tClick enter to exit ");
    printf("\n\n\t\t\t\t      Se voce gosta de Iron Maiden aperte [1]");
    printf("\n\n\t \t \t \t \t \t \t");
    scanf("%i", &restart);
        if(restart==1){
    	music();
	}
}



void estrelas(void)
{
	system("color 1");
		
	int a,b,c,l=1,rows=39;
	
	for(a=1; a<=rows; a++)
	{
		for(b=10; b>=a; b--)
		{
			printf("\t\t\t\t\t");
			printf(" ");
		}

		for(c=1; c<=l; c++)
		{ 
	    	textcolor(rand()%16);
			printf("\t\t\t\t\t");
			printf("*");
		}            
		l = l+2;    
		printf("\t\t\t\t\t");
		printf("\n");
	}
	system("cls");
	system("color 60");
	
	return ;
}

void music(void){
	
	system("cls");
	
	int divs(float a, float b){
	
int c = a/b;
return c;
}

int x,y;

int n = 1;

while(n <= 2){
	
	x=rand()%50 ,y=rand()%25;
	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;
	
Beep(293,250);
Beep(293,250);
Beep(220,250);
Beep(220,250);
system("color ab");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(293,250);
Beep(293,250);
Beep(330,250);
Beep(330,250);
system("color cd");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;


Beep(349,250);
Beep(349,250);
Beep(330,250);
Beep(330,250);
system("color de");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(293,250);
Beep(293,250);
Beep(330,250);
Beep(293,250);
system("color f1");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(262,250);
Beep(262,250);
Beep(196,250);
Beep(196,250);
system("color 23");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(262,250);
Beep(262,250);
Beep(293,250);
Beep(293,250);
system("color 45");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(330,250);
Beep(330,250);
Beep(293,250);
Beep(293,250);
system("color 67");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(262,250);
Beep(262,250);
Beep(330,250);
Beep(262,250);
system("color 89");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;
	
n++;
}
Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(220 , 1.33),250);
Beep(divs(220 , 1.33),250);
system("color ab");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(330 , 1.33),250);
system("color cd");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(divs(349 , 1.33),250);
Beep(divs(349 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(330 , 1.33),250);
system("color de");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(293 , 1.33),250);
system("color f1");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(divs(262 , 1.33),250);
Beep(divs(262 , 1.33),250);
Beep(divs(196 , 1.33),250);
Beep(divs(196 , 1.33),250);
system("color 23");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(divs(262 , 1.33),250);
Beep(divs(262 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
system("color 45");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(divs(330 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
system("color 67");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(divs(262 , 1.33),250);
Beep(divs(262 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(262 , 1.33),250);
system("color 89");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(220 , 1.33),250);
Beep(divs(220 , 1.33),250);
system("color ab");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(330 , 1.33),250);
system("color cd");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(divs(349 , 1.33),250);
Beep(divs(349 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(330 , 1.33),250);
system("color de");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(divs(293 , 1.33),250);
Beep(divs(293 , 1.33),250);
Beep(divs(330 , 1.33),250);
Beep(divs(293 , 1.33),250);
system("color f1");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(175,250);
Beep(175,250);
Beep(131,250);
Beep(131,250);
system("color 23");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(175,250);
Beep(175,250);
Beep(196,250);
Beep(196,250);
system("color 45");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(220,250);
Beep(220,250);
Beep(196,250);
Beep(196,250);
system("color 67");

	gotoxy(x,y);
	printf("EASTER EGG");
	x=rand()%50 ,y=rand()%25;

Beep(175,250);
Beep(175,250);
Beep(220,500);
Beep(175,500);
system("color 06");

	x=1,y=1;
	gotoxy(x,y);
	
   return;
}


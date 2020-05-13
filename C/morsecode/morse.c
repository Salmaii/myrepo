													
													
////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
//                        Gabriel salmai, 1°semestre                                  //
//                                                                                    //
//                           Morse code generator                                     //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conio.h"
#include "conio.c"
#include <locale.h>

//-----declarar funçoes-----
void g(void);
void p(void);
void s(void);
void t(void);
//-----declarar funçoes-----


int main() {
	
	int voltar=0;
	do{

	
//-----definições-----
  setlocale(LC_ALL,"Portuguese");
  SetConsoleTitle("Morse Code");
//-----definições-----



	int i=0, tam=0;	
	char palavra[100];
	
	textcolor(7);
    printf("\n \n \n \n \n \n \n \n \n \n------------------------------------------------------------------------------------------------------------------------\n");
    textcolor(2);
    printf("\n \n \t \t \t \t \t M O R S E   C O D E   G E N E R A T O R \n \n ");
    textcolor(7);
    printf("\n------------------------------------------------------------------------------------------------------------------------\n \n \n \n \n \n \n \n \n \n \n");	
    system("pause");
    system("cls");
    
    
    printf("\n\n------------------------------------------------------------------------------------------------------------------------\n");
    textcolor(4);
    printf("\n\n\t\t\t\t\t obs: Nao acentue as palavras\n");
    printf("\t\t\t\t\t obs: Para usar espaço use '_'\n\n");
    textcolor(3);
    printf("\t\t\t\t\tTambém é possível usar números\n\n");
    textcolor(2);
    printf("\t\t\t O programa vai dar o beep e depois mostrar a letra correspondente \n\n\n");
    textcolor(7);
    printf("------------------------------------------------------------------------------------------------------------------------\n\n");
    printf("\t\t\t\t\tDigite a frase:\n");
	printf("\t\t\t\t- ");
	
	textcolor(5);
	scanf("%s" ,&palavra );
	
	tam= strlen(palavra);
	
	textcolor(7);
	printf("\n\n\t\t\t\tSua frase:");
	textcolor(7);
	printf("\n\t\t\t-");
	textcolor(1);
	for(i=0; i<tam; i++){
		
		printf(" | ");
		
		if (palavra[i]=='_'){
			Beep (293, 600);
			printf("\t");
			
			s();
}
		else
		if (palavra[i]=='a' || palavra[i]=='A'){
		p();
		g();
		printf(".-");

		s();
}
	
		else
		if (palavra[i]=='b' || palavra[i]=='B'){
		
		g();
		p();
		p();
		p();
		printf("-...");
		
		s();
}

		else
		if (palavra[i]=='c' || palavra[i]=='C'){
		g();
		p();
		g();
		p();	
		printf("-.-.");
		
	    s();

}

		else
		if (palavra[i]=='d' || palavra[i]=='D'){
		g();
		p();
		p();
		printf("-..");
		
		s();
}

		else
		if (palavra[i]=='e' || palavra[i]=='E'){
		p();
		printf(".");
		
		s();
}

		else
		if (palavra[i]=='f' || palavra[i]=='F'){
		p(); 
		p();
		g();
		p();
		printf("..-.");
		
		s();
}

		else
		if (palavra[i]=='g' || palavra[i]=='G'){
		g();
		g();
		p();
		printf("--.");
		
		s();
}

		else
		if (palavra[i]=='h' || palavra[i]=='H'){
		p();
		p();
		p();
		p();
		printf("....");
		
		s();
}

		else
		if (palavra[i]=='i' || palavra[i]=='I'){
		p();
		p();
		printf("..");
		
		s();
}

		else
		if (palavra[i]=='j' || palavra[i]=='J'){
		p();
		g();
		g();
		g();
		printf(".---");
		
		s();
}

		else
		if (palavra[i]=='k' || palavra[i]=='K'){
		g();
		p();
		g();
		printf("-.-");
		
		s();
}

		else
		if (palavra[i]=='l' || palavra[i]=='L'){
		p();
		g();
		p();
		p();
		printf(".-..");
		
		s();
}

		else
		if (palavra[i]=='m' || palavra[i]=='M'){
		g();
		g();
		printf("--");
		
		s();
}

		else
		if (palavra[i]=='n' || palavra[i]=='N'){
		g();
		p();
		printf("-.");
		
		s();
}

		else
		if (palavra[i]=='o' || palavra[i]=='O'){
		g();
		g();
		g();
		printf("---");
		
		s();
}

		else
		if (palavra[i]=='p' || palavra[i]=='P'){
		p();
		g();
		g();
		p();
		printf(".--.");
		
		s();
}

		else
		if (palavra[i]=='q' || palavra[i]=='Q'){
		g();
		g();
		p();
		g();
		printf("--.-");
		
		s();
}

		else
		if (palavra[i]=='r' || palavra[i]=='R'){
		p();
		g();
		p();
		printf(".-.");
		
		s();
}

		else
		if (palavra[i]=='s' || palavra[i]=='S'){
		p();
		p();
		p();
		printf("...");
		
		s();
}

		else
		if (palavra[i]=='t' || palavra[i]=='T'){
		p();
		printf(".");
		
		s();
}

		else
		if (palavra[i]=='u' || palavra[i]=='U'){
		p();
		p();
		g();
		printf("..-");
		
		s();
}

		else
		if (palavra[i]=='v' || palavra[i]=='V'){
		p();
		p();
		p();
		g();
		printf("...-");
		
		s();
}

		else
		if (palavra[i]=='w' || palavra[i]=='W'){
		p();
		g();
		t();
		g();
		printf(".- -");
		
		s();
}

		else
		if (palavra[i]=='x' || palavra[i]=='X'){
		g();
		p();
		p();
		g();
		printf("-..-");
		
		s();
}

		else
		if (palavra[i]=='y' || palavra[i]=='Y'){
		g();
		p();
		g();
		g();
		printf("-.--");		
			
		s();
}

		else
		if (palavra[i]=='z' || palavra[i]=='Z'){
		g();
		g();
		p();
		p();
		printf("--..");
		
		s();
}

		else
		if (palavra[i]=='0'){
		g();
		g();
		g();
		g();
		g();
		printf("-----");
		
		s();
}

		else
		if (palavra[i]=='1'){
		p();
		g();
		g();
		g();
		g();
		printf(".----");
		
		s();
}

		else
		if (palavra[i]=='2'){
		p();
		p();			
		g();
		g();
		g();
		printf("..---");
		
		s();
}

		else
		if (palavra[i]=='3'){
		p();
		p();
		p();			
		g();
		g();
		printf("...--");
		
		s();
}

		else
		if (palavra[i]=='4'){
		p();
		p();
		p();
		p();
		g();
		printf("....-");
		
		s();
}

		else
		if (palavra[i]=='5'){
		p();
		p();
		p();
		p();
		p();
		printf(".....");
		
		s();
}

		else
		if (palavra[i]=='6'){
		g();
		p();
		p();
		p();
		p();
		printf("-....");
		
		s();
}

		else
		if (palavra[i]=='7'){
		g();
		g();
		p();
		p();
		p();
		printf("--...");
		
		s();
}

		else
		if (palavra[i]=='8'){
		g();
		g();
		g();
		p();
		p();
		printf("---..");
		
		s();
}

		else
		if (palavra[i]=='9'){
		g();
		g();
		g();
		g();
		p();
		printf("----.");
		
		s();
}


//--Ciclo for acabou--
}
textcolor(2);
printf("\n\n\n\n\n\t\t\t\t\tPara recomeçar aperte qualquer teclas");


textcolor(7);
printf("\n\n");

system("pause");
system("cls");

}while(voltar==0);

	return 0;
}

// -------- funçoes ---------
void t(void){
	Sleep(300);
}

void s(void ){
	Sleep(600);
}

void g(void){
    Beep(493, 600);
}

void p(void){
	Beep(493, 200);
}
// -------- funçoes ---------


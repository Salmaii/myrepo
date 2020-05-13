#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int p, r;
//inicio programa
    system("color 71");
   	printf("\n \n \n \n \n \n \n \n \n "); 
    printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	printf("\t \t \t \t ----------------- Trabalho 1 APC ---------------- ");
    printf("\n ----------------------------------------------------------------------------------------------------------------------- ");	
    printf("\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n"); 
	system("pause");
	system("cls");

do{

//------------------------------------------------------------------------------------------------------------------

	printf("\n \n ----------------------------------------------------------------------------------------------------------------------- ");
	printf(" \t \t \t \t \t Escolha um número para começar: ");
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");

	
	printf("\n [1]- Mulher > 25 anos ");
	printf("\n [2]- Estados ");
	printf("\n [3]- Printf somente com A ");
	printf("\n [4]- Nome 1,2,3 char ");	
	printf("\n [5]- Média das médias ");
	printf("\n [6]- Antecesor e Suscessor ");
	printf("\n [7]- Tempo, gasto e velociade da viagem ");
	printf("\n [8]- Energia ");
	printf("\n [9]- Desconto de 9%% ");
	printf("\n [10]- ID classe eleitoral ");
	
	printf("\n \n \t \t");
	printf("Número: \n");
	printf("\t\t- ");
	scanf("%i", &p);
	printf("\n \n ");
	printf("\t Digite o valor: \n \n ");
		
	system("cls");
	
//------------------------------------------------------------------------------------------------------------------

// switch -------- cases
    switch ( p ){ 
    
//case 1 -----------------------------------------------------------------------------------------------------------

	case 1 :
	printf("\n \n \t \t - Mulher > 25 anos \n");
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	
//programa	1
char nome[30];
int idade, sexo;

	printf("\n \t Insira o nome, idade e sexo:\n ");
	
	printf("\n \t Primeiro nome:\n \t -");
    scanf("%s", &nome);
    
	printf("\n \t Idade:\n \t -");
    scanf("%i", &idade);
    
    printf("\n \t Sexo \t ");
    printf("\n \t[1]-Feminino ");
	printf("\n \t[2]-Masculino \n  \t Digite: \n \t -");
    scanf("%i", &sexo);
    
    printf("\n \t ");
    printf("%s",nome);
    if((idade<25) && (sexo==1)){
	printf("\n \n \t --Aceita-- \n ");
	}
    else{
    printf("\n \n \t --Não aceita-- \n");
	}
	
//voltar
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	printf("\n Escolha uma das opções abaixo: \n ");
	printf("\n [1]- Voltar para a lista de programas ");
	printf("\n [2]- Sair ");
	printf("\t\t \n \n ");
	printf("\t Escolha: \n \t - ");
    scanf("%d", &r);
    system("cls");
//finish
	break;
	
//case 2 -----------------------------------------------------------------------------------------------------------
	
	case 2 :
	printf("\n \n \t \t - Estados \n");
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
		
//programa	2
char estado[3];

//usar string.h por causa da função strcmp, cuja função é comparar duas strings.

    printf("\n \t Digite a sigla do seu estado em letra MAIÚSCULA: \n");
    
	printf("\n \t Sigla:\n \t -");
    scanf("%s", &estado);
    
    if(!strcmp(estado,"MG"))
    printf("\n \t \t-Mineiro\n");
    else
    if(!strcmp(estado,"RJ"))
    printf("\n \t \t-Carioca\n");
    else
    if(!strcmp(estado,"SP"))
    printf("\n \t \t-Paulista\n");
    else
    printf("\n \t \t-Outros estados\n \n");

//voltar
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	printf("\n Escolha uma das opções abaixo: \n ");
	printf("\n [1]- Voltar para a lista de programas ");
	printf("\n [2]- Sair ");
	printf("\t\t \n \n ");
	printf("\t Escolha: \n \t - ");
    scanf("%d", &r);
    system("cls");
//finish
    break;


//case 3 -----------------------------------------------------------------------------------------------------------
 
    case 3 :
    printf("\n \n \t \t - Printf somente com A \n");
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
    		
//programa	3
char nomea[30];
	
    printf("\n \t Digite o primeiro nome \n");
    printf("\n \t Nome:\n \t -");
    scanf("%s", &nomea);
    printf("\n \t");
    
    if(nomea[0]=='A' || nomea[0]=='a'){
    printf("O nome digitado começa com 'a'");
    printf("%s", nomea);
    }
    else{
    printf("O nome digitado não começa com 'a'");
    } 
	
//voltar
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	printf("\n Escolha uma das opções abaixo: \n ");
	printf("\n [1]- Voltar para a lista de programas ");
	printf("\n [2]- Sair ");
	printf("\t\t \n \n ");
	printf("\t Escolha: \n \t - ");
    scanf("%d", &r);
    system("cls");
//finish
    break;
    
    
//case 4 -----------------------------------------------------------------------------------------------------------
 
    case 4 :
	printf("\n \n \t \t - Nome 1,2,3 char \n");	
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	    		
//programa	4
char nomeb[30];

    printf("\n \t Digite o nome \n");
    printf("\n \t Nome:\n \t -");
    scanf("%s", &nomeb);
    printf("\n \t \t Nome: \t");
    
    printf("%s \n", nomeb);
    
    printf("Primeiro caractere:");
    printf("\t %c \t",nomeb[0]);
    
    printf("\nSegundo caractere:");
    printf("\t %c \t",nomeb[1]);

    printf("\nTerceiro caractere:");
    printf("\t %c \t",nomeb[2]);
	
//voltar
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	printf("\n Escolha uma das opções abaixo: \n ");
	printf("\n [1]- Voltar para a lista de programas ");
	printf("\n [2]- Sair ");
	printf("\t\t \n \n ");
	printf("\t Escolha: \n \t - ");
    scanf("%d", &r);
    system("cls");
//finish
    break;
    
    
//case 5 -----------------------------------------------------------------------------------------------------------

    case 5 :
	printf("\n \n \t \t - Média das médias \n");
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	    		
//programa	5
float mt, ma, mb, ms;
ma =(9+8+7)/3;
mb =(6+5+4)/3;
ms =ma + mb;
mt =ms/2;

    printf("\n \n Média aritmética dos números 8, 9 e 7: \n \t");
    printf("%.2f", ma);
    
    printf("\n \n Média aritmética dos números 4, 5 e 6: \n \t");	
    printf("%.2f", mb);

    printf("\n \n Soma das duas médias: \n \t");
    printf("%.2f", ms);
    
    printf("\n \n Média das duas médias: \n \t");
    printf("%.2f", mt);
    
    printf("\n ");
	
//voltar
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	printf("\n Escolha uma das opções abaixo: \n ");
	printf("\n [1]- Voltar para a lista de programas ");
	printf("\n [2]- Sair ");
	printf("\t\t \n \n ");
	printf("\t Escolha: \n \t - ");
    scanf("%d", &r);
    system("cls");
//finish
    break;
    
    
//case 6 -----------------------------------------------------------------------------------------------------------

    case 6 :
	printf("\n \n \t \t - Antecesor e Suscessor \n");
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	    		
//programa	6
int num, ant, suc;

    printf("\n \n Digite um número: \n \t -");
    scanf("%i", &num);
 
    ant=num-1;
    suc=num+1;

    printf("\n \t Antecessor:  \t ");
    printf("%i", ant);

    printf("\n ");

    printf("\n \t Suscessor:  \t ");
    printf("%i", suc);

//voltar
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	printf("\n Escolha uma das opções abaixo: \n ");
	printf("\n [1]- Voltar para a lista de programas ");
	printf("\n [2]- Sair ");
	printf("\t\t \n \n ");
	printf("\t Escolha: \n \t - ");
    scanf("%d", &r);
    system("cls");
//finish
    break;
    
    
//case 7 -----------------------------------------------------------------------------------------------------------

    case 7 :
	printf("\n \n \t \t - Tempo, gasto e velociade da viagem \n");
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	    		
//programa	7
int tempo, vmedia;
float distancia, consumo;

    printf("\n \n Informe o tempo gasto (em horas): \n \t -");
    scanf("%i", &tempo);
    
    printf("\n \n Informe a velocidade media no percurso (km/h): \n \t -");
    scanf("%i", &vmedia);
    
    distancia= vmedia*tempo;
    
//Consumo na estrada: 14,4 km/l (gasolina).
//1 litro a cada 14,4 km

    consumo= distancia*14,4;
    
    printf("\n \n A distância percorrida foi: \n \t");
    printf("%.2f Km", distancia);
    
    printf("\n \n O consumo foi: \n \t");
    printf("R$ %.2f", consumo);
	
//voltar
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	printf("\n Escolha uma das opções abaixo: \n ");
	printf("\n [1]- Voltar para a lista de programas ");
	printf("\n [2]- Sair ");
	printf("\t\t \n \n ");
	printf("\t Escolha: \n \t - ");
    scanf("%d", &r);
    system("cls");
//finish
    break;
    
    
//case 8 -----------------------------------------------------------------------------------------------------------

    case 8 :
	printf("\n \n \t \t - Energia \n");
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	    		
//programa	8
float pagar, energia, desconto, kw;
kw = 1.4257;
//1kw = 1,4257...

    printf("\n \n \t Digite a quantidade de energia gasta (Kw): \n \t -");
    scanf("%f", &energia );
    
    printf("\n \n \t Cada Kw de energia equivale a: \n \t");
    printf("R$ %.4f", kw);
    
    pagar = energia*kw;
    
    printf("\n \n \t O valor a ser pago é: \n \t");
    printf("R$ %.4f \n \n \n ", pagar);
	
	desconto = pagar*0.9;
	
	printf("\n \n \t O valor a ser pago com desconto é: \n \t");
    printf("R$ %.4f reais \n \n \n ", desconto);
	
//voltar
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	printf("\n Escolha uma das opções abaixo: \n ");
	printf("\n [1]- Voltar para a lista de programas ");
	printf("\n [2]- Sair ");
	printf("\t\t \n \n ");
	printf("\t Escolha: \n \t - ");
    scanf("%d", &r);
    system("cls");
//finish
    break;
    
    
//case 9 -----------------------------------------------------------------------------------------------------------

    case 9 :
	printf("\n \n \t \t - Desconto de 9%% \n");
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	    		
//programa	9
float produto, descontoa;

    printf("\n \n \t Digite o preço do produto: (com vírgula se houver casas decimais)\n \t \t - ");
    scanf("%f", &produto);
    
    descontoa = produto*0.91;
    
    printf("\n \n Preço do produto sem desconto: %.2f", produto);
    printf("\n \n Preço do produto com desconto: %.3f \n \n ", descontoa);
    
    system("pause");
	
//voltar
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	printf("\n Escolha uma das opções abaixo: \n ");
	printf("\n [1]- Voltar para a lista de programas ");
	printf("\n [2]- Sair ");
	printf("\t\t \n \n ");
	printf("\t Escolha: \n \t - ");
    scanf("%d", &r);
    system("cls");
//finish
    break;
    
    
//case 10 -----------------------------------------------------------------------------------------------------------

    case 10 :
	printf("\n \n \t \t - ID classe eleitoral \n");
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	
//programa	10
int idadea;

    printf("\n \n \t Digite sua idade para saber a classe eleitoral: \n \t \t - ");
    scanf("%i", &idadea);
    printf("\n \t Sua classe eleitoral é: ");

    if(idadea<16){
    	printf("\n \t --Não-eleitor-- \n \n ");
	}
	else
	if(idadea>17&&idadea<66){
		printf("\n \t --Eleitor obrigatório-- \n \n ");
	}
	else
	if(idadea>15&&idadea<19&&idadea<64){
		printf("\n \t --Eleitor facultativo-- \n \n ");
	}

//voltar
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	printf("\n Escolha uma das opções abaixo: \n ");
	printf("\n [1]- Voltar para a lista de programas ");
	printf("\n [2]- Sair ");
	printf("\t\t \n \n ");
	printf("\t Escolha: \n \t - ");
    scanf("%d", &r);
    system("cls");
//finish	
    break;
    
    
//finish switch    
  }

//func recomeçar
}while (r==1);

    printf("\n \n \n \n \n \n \n \n \n");
    printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
    printf("\t \t \t \t \t --------------BYE BYE--------------");
	printf("\n ----------------------------------------------------------------------------------------------------------------------- ");
	printf("\n \n \n \n \n \n \n \n \n \n \n \n \n");
	
	system("color 20");
	system("color 7d");
	system("color 16");
	system("color 0b");
	system("color 64");
	system("color 84");
	system("color c0");
	system("color 02");
	system("color fc");
	system("color 00");
	
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Questão 1
	/*float valorm, valorcm, valormm;
	puts ("Informe o valor (em metros):");
	scanf ("%f",&valorm);
	valorcm=valorm*100;
	valormm=valorm*1000;
	printf ("--- Valores Convertidos---\n");
	printf ("Valor em metros: %.2f\n",valorm);
	printf ("Valor em centimetros: %.2f\n",valorcm);
	printf ("Valor em milimetros: %.2f\n",valormm);
	*/
	//Questão 2
	/*float base, final;
	puts ("informe seu salário base");
	scanf("%f",&base);
	final= base+(base*0.05)-(base*0.07);
	printf ("Seu salário final será de: %.2f reais",final);
	*/
	//Questão 3
	/*int produto;
	puts ("informe a quantidade de produto:");
	scanf ("%d",&produto);
	printf ("%s",(produto<10)?"Repor Estoque":"Estoque Ok");
	*/
	//Questão 4
	/*float pressaoA;
	int limite = 50;
	puts ("informe a pessão atual:");
	scanf ("%f",&pressaoA);
	printf("%s",(pressaoA>limite)?"ALERTA: Pressão Critica!":"Sintema Operacional: Pressão Normal");
	*/
	//Questão 5
	/*float peso, resultado;
	int escolha;
	puts ("Informe o peso em KG:");
	scanf ("%f",&peso);
	puts ("--- Escolha uma opção ---");
	puts (" 1- Converter para gramas.");
	puts (" 2- Converter para Toneladas.");
	puts (" 3- Converter para Libras.");
	puts ("(Digite o valor da opção escolhida):");
	scanf ("%d",&escolha);
	switch (escolha){
		case 1: 
			resultado = peso*1000;
			puts ("--Converter para gramas --");
			printf ("Valor em Quilogramas: %.2f \n",peso);
			printf ("Valor em Gramas: %.2f \n",resultado);
			break;
		case 2:
			resultado = peso/1000;
			puts ("--Converter para Toneladas --");
			printf ("Valor em Quilogramas: %.2f \n",peso);
			printf ("Valor em Toneladas: %.3f \n",resultado);
			break;
		case 3:
			resultado = peso*2.205;
			puts ("--Converter para Libras --");
			printf ("Valor em Quilogramas: %.2f \n",peso);
			printf ("Valor em Libras: %.2f \n",resultado);
			break;
		default :
			puts ("Escolha uma das opções válidas");
	}
	*/
	//Questão 6
	/*char turno, resposta;
	puts ("--- Informe o seu turno ---");
	puts ("M- Matutino");
	puts ("V- Vespertino");
	puts ("N- Noturno");
	scanf ("%c",&turno);
	
	resposta= toupper (turno);
	
	switch (resposta){
		case 'M':
			puts ("Bom Dia!");
			break;
		case 'V':
			puts ("Boa Tarde!");
			break;
		case 'N':
			puts ("Boa Noite!");
			break;
		default :
			puts ("Não é um turno válido");
	}
	*/
	//Questão 7
	
	
	return 0;
}

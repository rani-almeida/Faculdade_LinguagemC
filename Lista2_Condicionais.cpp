#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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

  
	return 0;
}

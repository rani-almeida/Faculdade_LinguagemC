#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	//Questão 3
	/*float numero,numero2;
	puts ("Digite um número:");
	scanf ("%f",&numero);
	if (numero>20){
		numero2=numero/2;
		printf ("%.2f",numero2);
	}
	else{
		printf ("%.2f",numero);
	}
	*/
	//Questão 4
	/*float numero1,numero2;
	puts ("Informe dois números:");
	scanf ("%f %f",&numero1,&numero2);
	if (numero1>numero2){
		printf("A ordem crescente é: %.2f,%.2f\n",numero2,numero1);
		printf("A ordem decrescente é: %.2f,%.2f",numero1,numero2);
	}
	else {
		printf("A ordem crescente é: %.2f,%.2f\n",numero1,numero2);
		printf("A ordem decrescente é: %.2f,%.2f",numero2,numero1);
	}
	*/
	//Questão 5
	/*float idade,altura,idioma;
	puts ("Digite sua idade:");
	scanf("%f",&idade);
	puts ("Digite sua altura (em metros):");
	scanf("%f",&altura);
	puts ("Digite quantos idiomas você fala fluentemente:");
	scanf("%f",&idioma);
	if ((idade>=24)&&(altura>=1.7)&&(idioma>=2)){
		printf("\nVocê atende aos requisitos!");
	}
	else{
		printf("Você não atende aos requisitos");
	}
	*/
	//Questão 6
	/*float profundidade;
	int nspt;
	puts ("Informe o NSPT e a profundidade (em metros):");
	scanf ("%d %f",&nspt,&profundidade);
	if((profundidade<5)&&(nspt<10)){
		printf("Solo Mole");
	}
	else if ((profundidade<5)&&(nspt>=10)){
		printf("Solo Firme");
	}
	else if ((profundidade>=5)&&(nspt<20)){
		printf("Solo Compacto");
	}
	else {
		printf ("Solo Muito Compacto");
	}*/
	//Questão 7
	/*float temperatura,humidade;
	puts("Informe a temperatura (em C°) e a humidade:");
	scanf("%f %f",&temperatura,&humidade);
	if ((temperatura>30)&&(humidade<40)){
		printf("Ligar irrigação e ventilação.");
	}
	else if ((temperatura>30)&&(humidade>=40)){
		printf("Ligar apenas ventilação");
	}
	else if ((temperatura<=30)&&(humidade<40)){
		printf("Ligar apenas irrigação");
	}
	else {
		printf ("Sistema em equilíbrio");
	}
	*/
	//Questão 8
	/*int cargo,epi;
	puts ("Informe o seu cargo:(1)Engenheiro ou (2)Operário");
	scanf ("%d",&cargo);
	puts ("Informe o status do EPI:(1)Com EPI ou (0)Sem EPI");
	scanf ("%d",&epi);
	if((cargo==1)&&(epi==1)){
		printf("Acesso total liberado");
	}
	else if((cargo==1)&&(epi==0)){
		printf("Acesso negado: coloque o capacete");
	}
	else if((cargo==2)&&(epi==1)){
		printf("Acesso restrito á Área de operação");
	}
	else if((cargo==2)&&(epi==0)){
		printf("Acesso negado: Uso do EPI obrigatório");
	}
	else{
		printf("opção errada- Escolha uma das opções indicadas");
	}
	*/
	//Questão 9
	/*float renda;
	int idade;
	puts ("Informe sua idade e sua renda mensal:");
	scanf ("%d %f",&idade,&renda);
	if(idade<18){
		printf("Menor de idade não pode solicitar empréstimo");
	}
	else if((idade>=18)&&(renda>=3000)){
		printf("Empréstimo aprovado");
	}
	else if ((idade>=18)&&(renda>=1500)){
		printf("Necessário avalista para aprovação");
	}
	else {
		printf("Empréstimo negado por baixa renda");
	}*/
}

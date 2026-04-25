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
	  float nivel;
    int chuva;
    puts ("Informe o nível de água (em metros)");
    scanf("%f", &nivel);
    if (nivel <15) {
    printf("Nível normal");}
    else if((nivel>=15)&&(nivel<20)){
    printf("Estado de Alerta");
    }else{
    puts("Informe se está chovendo");
    puts("1- Sim");
    puts("2- Não");
    scanf("%d",&chuva);
    switch(chuva){
    case 1:
    puts("EVACUAÇÃO IMEDIATA");
    break;
    case 2:
    puts ("Monitoramento Crítico");
    break;}}

  // Questão 8
    float dureza, peso;
    puts("Informe o índice de dureza");
    scanf("%f",&dureza);
    if (dureza<50){
    puts("Aço de baixa resistência");
    }else if ((dureza>=50)&&(dureza<100)){
    puts("Informe o peso da peça(em kg)");
    scanf("%f",&peso);
    if(peso>10){
    puts("Uso industrial pesado");}
    else {
    puts("Uso em ferramentas");}}
    else {
    puts("Aço especial/Blindagem");}
    // Questão 9
    int pais,codigo;
    puts("-- Informe o Destino --");
    puts("1- EUA");
    puts("2- Outros");
    scanf("%d",&pais);
    if (pais==1){
    puts("Encaminhar para inspeção");}
    else if(pais==2){
    puts("Informe o código do item");
    scanf("%d",&codigo);
    if((codigo==3)||(codigo==7)){
    puts("encaminhar para inspeção (item restrito)");}
    else{
    puts("liberado para embarque");}}
    else{
    puts("Informe uma opção válida");}
	
	return 0;
}

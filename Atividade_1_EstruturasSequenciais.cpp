#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Questão 1
int main()
{
  setlocale(LC_ALL, "Portuguese");
  float comprimento, largura, area, piso;
  printf ("Escreva o comprimento do galpão (em metros):\n");
  scanf ("%f",&comprimento);
  printf ("Escreva a largura do galpão (em metros):\n");
  scanf ("%f",&largura);
  area=comprimento*largura;
  piso=area*1.10;
  printf ("Será necessário comprar %.1f m de piso",piso);
  return 0;
}

//Questão 2
int main()
{
  setlocale (LC_ALL, "Portuguese");
  float peso_total, peso_por_eixo;
  int numero_eixos;
  printf ("Qual o peso total da carga (em Kg)?\n");
  scanf ("%f", &peso_total);
  printf ("Quantos eixos tem o caminhão?\n");
  scanf ("%d",&numero_eixos);
  peso_por_eixo=peso_total/numero_eixos;
  printf ("Serão alocados %.2f kg por eixo", peso_por_eixo);
  return 0;
}

//Questão 3
int main()
{
  setlocale (LC_ALL, "Portuguese");
  float real,maquete, maquete_cm;
  puts ("Qual a medida real (em metros)?");
  scanf ("%f", &real);
  maquete=real*0.04;
  maquete_cm=maquete*100;
  printf ("Você cortará %.2f cm na maquete", maquete_cm);
  return 0;
}

//Questão 4
int main ()
{
  setlocale (LC_ALL, "Portuguese");
  float cimento,agua;
  puts ("Quanto de cimento será usado (em Kg)?");
  scanf ("%f", &cimento);
  agua=(cimento/5)*2;
  printf ("Será necessário %.2f L de água", agua);
  return 0;
}

//Questão 5
int main ()
{
  setlocale (LC_ALL, "Portuguese");
  float tempo,preco,consumo,custo;
  puts ("Quantas horas de trabalho são?");
  scanf ("%f", &tempo);
  puts ("Qual o preço do Litro do combustível?");
  scanf ("%f", &preco);
  consumo=15*tempo;
  custo=consumo*preco;
  printf ("Foram consumidos %.2f L de combustível, tendo com isso um custo de %.2f reais", consumo, custo);
  return 0;
}

//Questão 6
int main ()
{
  setlocale (LC_ALL, "Portuguese");
  float parede,quantidade_latas;
  puts ("Qual a área da parede que será pintada (em m²)?" );
  scanf ("%f", &parede);
  quantidade_latas=parede/110;
  printf ("Serão necessárias %.2f latas de tinta", quantidade_latas);
  return 0;
}

//Questão 7
int main ()
{
  setlocale (LC_ALL, "Portuguese");
  double pe_direito,espelho;
  int quantidade_degraus;
  puts ("Qual a altura total do Pé direito (em cm)?");
  scanf ("%lf", &pe_direito);
  puts ("Quantos degraus terá a escada?");
  scanf ("%d", &quantidade_degraus);
  espelho=pe_direito/quantidade_degraus;
  printf ("O espelho terá %.2f cm", espelho);
  return 0;
}

//Questão 8
int main ()
{
  setlocale (LC_ALL, "Portuguese");
  float contrato,bonus,sobra;
  puts ("Qual o valor do contrato?");
  scanf ("%f", &contrato);
  bonus=contrato*0.05;
  sobra=contrato-bonus;
  printf ("O valor do bónus é %.2f , e o valor que sobrou para a empresa foi de %.2f", bonus,sobra);
  return 0;
}

//Questão 9
int main ()
{
  setlocale (LC_ALL, "Portuguese");
  float construcao,entulho,cacamba;
  puts ("Qual é a área da construção (em m²)?");
  scanf ("%f", &construcao);
  entulho=construcao*0.05;
  cacamba=entulho/5;
  printf ("Serão gerados %.2f m³ de entulhos, e serão necessárias %.1f caçambas", entulho, cacamba);
  return 0;
}

//Questão 10
int main ()
{
  setlocale (LC_ALL, "Portuguese");
  float temperatura_f,temperatura_c;
  puts ("Qual a temperatura em Fahrenheit?");
  scanf ("%f", &temperatura_f);
  temperatura_c=(temperatura_f-32)*5/9;
  printf ("a tempreratura em graus Celsius é de %.2f", temperatura_c);
  return 0;
}

//Questão 11
int main ()
{
  setlocale (LC_ALL, "Portuguese");
  float peca,tempo_m,tempo_h;
  puts ("Qual o peso da Peça (em gramas) a ser feita?");
  scanf ("%f", &peca);
  tempo_m=(peca/100)*45;
  tempo_h=tempo_m/60;
  printf ("O tempo gasto será de: %.2f horas", tempo_h);
  return 0;
}

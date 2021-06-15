/*7- Objetivo: Escreva um programa que leia o nome do funcionário, o sexo (F ou M), o número de 
matrícula do funcionário, o número de horas trabalhadas, o valor que recebe por hora 
e calcule o salário desse funcionário. A seguir, mostre todos os dados na tela, os dados 
de entrada e os dados de saída.
Entradas: Nome, sexo, matrícula, horas trabalhadas, valor por hora de um funcionário.
Saída: Idem + salário do funionário */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
	
	char nome [60];
	char sexo[2];
	float matricula, horas, valorH, salario;
	
	printf("Digite o nome do funcionário: \n");
	scanf("%s", &nome);
	printf("Digite o sexo do funcionário (F ou M): \n");
	scanf("%s", &sexo);
	printf("Digite o número de matrícula do funcionário: \n");
	scanf("%f", &matricula);
	printf("Digite o número de horas trabalhadas pelo funcionário: \n");
	scanf("%f", &horas);
	printf("Digite o valor por hora que o funcionário recebe: \n");
	scanf("%f", &valorH);
	
	salario = horas*valorH;
	
	printf("\nNome: %s\n", nome);
	printf("Sexo: %s\n", sexo);
	printf("Número de matrícula: %.2f\n", matricula);
	printf("Horas trabalhadas: %.2f\n", horas);
	printf("Valor por hora que recebe: %.2f\n", valorH);
	printf("Salário: %.2f\n\n", salario);
	
system("pause");
return 0;
}

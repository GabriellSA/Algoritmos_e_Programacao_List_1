/*7- Objetivo: Escreva um programa que leia o nome do funcion�rio, o sexo (F ou M), o n�mero de 
matr�cula do funcion�rio, o n�mero de horas trabalhadas, o valor que recebe por hora 
e calcule o sal�rio desse funcion�rio. A seguir, mostre todos os dados na tela, os dados 
de entrada e os dados de sa�da.
Entradas: Nome, sexo, matr�cula, horas trabalhadas, valor por hora de um funcion�rio.
Sa�da: Idem + sal�rio do funion�rio */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
	
	char nome [60];
	char sexo[2];
	float matricula, horas, valorH, salario;
	
	printf("Digite o nome do funcion�rio: \n");
	scanf("%s", &nome);
	printf("Digite o sexo do funcion�rio (F ou M): \n");
	scanf("%s", &sexo);
	printf("Digite o n�mero de matr�cula do funcion�rio: \n");
	scanf("%f", &matricula);
	printf("Digite o n�mero de horas trabalhadas pelo funcion�rio: \n");
	scanf("%f", &horas);
	printf("Digite o valor por hora que o funcion�rio recebe: \n");
	scanf("%f", &valorH);
	
	salario = horas*valorH;
	
	printf("\nNome: %s\n", nome);
	printf("Sexo: %s\n", sexo);
	printf("N�mero de matr�cula: %.2f\n", matricula);
	printf("Horas trabalhadas: %.2f\n", horas);
	printf("Valor por hora que recebe: %.2f\n", valorH);
	printf("Sal�rio: %.2f\n\n", salario);
	
system("pause");
return 0;
}

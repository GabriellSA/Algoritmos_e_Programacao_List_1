/*1 - Objetivo: Construa um algoritmo que leia um n�mero inteiro de horas e mostre ao usu�rio o 
correspondente em minutos e segundos destas horas.
Entradas: Horas
Sa�das: Minutos e Segundos */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
	
	int Horas, Minutos, Segundos;
	
	printf("Digite as horas: \n");
	scanf("%d", &Horas);
	
	Minutos = Horas*60;
	Segundos = Minutos*60;
	
	printf("A correspondente em minutos �: %d Minutos \n", Minutos);
	printf("A correspondente em segundos �: %d Segundos \n\n", Segundos);
	
system("pause");
return 0;
}

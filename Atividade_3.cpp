/*3 - Objetivo: Construa um algoritmo que calcule a média aritmética de 3 números quaisquer 
fornecidos pelo usuário. 
Entradas: Número 1, Número 2 e Número 3
Saídas: Média aritmética*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
	
	float valor1, valor2, valor3, media;
	
	printf("Digite o primeiro número: \n");
	scanf("%f", &valor1);
	printf("Digite o segundo número: \n");
	scanf("%f", &valor2);
	printf("Digite o terceiro número: \n");
	scanf("%f", &valor3);
	
	media = (valor1+valor2+valor3)/3;
	
	printf("A média aritmética é: \n%.2f\n\n", media);

system("pause");	
return 0;
}

/*3 - Objetivo: Construa um algoritmo que calcule a m�dia aritm�tica de 3 n�meros quaisquer 
fornecidos pelo usu�rio. 
Entradas: N�mero 1, N�mero 2 e N�mero 3
Sa�das: M�dia aritm�tica*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
	
	float valor1, valor2, valor3, media;
	
	printf("Digite o primeiro n�mero: \n");
	scanf("%f", &valor1);
	printf("Digite o segundo n�mero: \n");
	scanf("%f", &valor2);
	printf("Digite o terceiro n�mero: \n");
	scanf("%f", &valor3);
	
	media = (valor1+valor2+valor3)/3;
	
	printf("A m�dia aritm�tica �: \n%.2f\n\n", media);

system("pause");	
return 0;
}

/*2 - Objetivo: Construa um algoritmo que calcule a �rea de um c�rculo cujo raio � fornecido pelo usu�rio (use �rea= 3.14 x raio2). 
Entradas: Raio do circulo
Sa�das: �rea do circulo*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
	
	float raio, area;
	
	printf("Digite o raio do c�rculo: \n");
	scanf("%f", &raio);
	
	area = 3.14 * pow(raio,2);
	
	printf("A �rea do c�rculo �: \n%.2f\n\n", area);
	
system("pause");
return 0;
}


/*2 - Objetivo: Construa um algoritmo que calcule a área de um círculo cujo raio é fornecido pelo usuário (use área= 3.14 x raio2). 
Entradas: Raio do circulo
Saídas: Área do circulo*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
	
	float raio, area;
	
	printf("Digite o raio do círculo: \n");
	scanf("%f", &raio);
	
	area = 3.14 * pow(raio,2);
	
	printf("A área do círculo é: \n%.2f\n\n", area);
	
system("pause");
return 0;
}


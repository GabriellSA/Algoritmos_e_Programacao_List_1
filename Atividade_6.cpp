/*6- Objetivo: Leia 2 valores A e B, que correspondem a 2 notas de um aluno. A seguir, calcule a 
m�dia do aluno, sabendo que a nota A tem peso 3.5 e a nota B tem peso 7.5 (A soma 
dos pesos portanto � 11. Assuma que cada nota pode ir de 0 at� 10.0.
Entradas: Nota 1 e Nota 2
Sa�das: M�dia */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, media;
	
	printf("Digite a primeira nota: \n");
	scanf("%f", &nota1);
	printf("Digite a segunda nota: \n");
	scanf("%f", &nota2);
	
	media = (nota1*3.5+nota2*7.5)/11;
	
	printf("A m�dia do aluno �: %.2f pontos\n\n", media);
	
system("pause");
return 0;
}

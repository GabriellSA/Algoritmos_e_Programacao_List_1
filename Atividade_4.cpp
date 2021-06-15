/*4- Objetivo: Construa um algoritmo que a partir da leitura de dois números forneça o resto e o 
quociente da divisão do primeiro pelo segundo número.
Entradas: Número 1 e Número 2
Saídas: Resto e Quociente */
 
 #include<stdio.h>
 #include<math.h>
 #include<stdlib.h>
 #include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
 	
	int valor1, valor2, resto, quociente;
 	
 	printf("O resto e o quociente da divisão serão fornecidos entre o primeiro e o segundo número digitados respectivamente.\nDigite o primeiro número: \n");
 	scanf("%d", &valor1);
 	printf("Digite o segundo número: \n");
 	scanf("%d", &valor2);
 	
 	resto = valor1 % valor2;
 	quociente = (valor1 / valor2);
 	
 	printf("O resto da divisão é: \n%d\n", resto);
 	printf("O quociente da divisão é: \n%d\n\n", quociente);

system("pause"); 	
return 0;
 }

/*4- Objetivo: Construa um algoritmo que a partir da leitura de dois n�meros forne�a o resto e o 
quociente da divis�o do primeiro pelo segundo n�mero.
Entradas: N�mero 1 e N�mero 2
Sa�das: Resto e Quociente */
 
 #include<stdio.h>
 #include<math.h>
 #include<stdlib.h>
 #include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");
 	
	int valor1, valor2, resto, quociente;
 	
 	printf("O resto e o quociente da divis�o ser�o fornecidos entre o primeiro e o segundo n�mero digitados respectivamente.\nDigite o primeiro n�mero: \n");
 	scanf("%d", &valor1);
 	printf("Digite o segundo n�mero: \n");
 	scanf("%d", &valor2);
 	
 	resto = valor1 % valor2;
 	quociente = (valor1 / valor2);
 	
 	printf("O resto da divis�o �: \n%d\n", resto);
 	printf("O quociente da divis�o �: \n%d\n\n", quociente);

system("pause"); 	
return 0;
 }

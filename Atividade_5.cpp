/*5- Objetivo: Fazer um algoritmo para auxiliar um construtor a descobrir a quantidade de rolos e a 
quantidade de metros avulsos de fios que ele precisa adquirir. Sabe-se que o 
construtor tem a quantidade total de fios em metros a serem utilizados na instala��o 
el�trica da obra e que cada rolo de fio tem 50 metros.
Entradas: Metragem dos fios
Sa�das: Rolos e Metros avulsos*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
setlocale(LC_ALL, "Portuguese");

	int rolos;
	float metros, metrosAv;
	
	printf("Digite a quantidade necess�ria de fios em metros: \n");
	scanf("%f", &metros);
	
	rolos = metros/50;
	metrosAv = metros - (rolos*50);
	
	printf("S�o necess�rios: %d rolos de fio.\n", rolos);
	printf("S�o necess�rios: %.2f metros avulsos.\n\n ", metrosAv);

system("pause");	
return 0;
}

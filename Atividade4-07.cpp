#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int preco,folha;
	
	printf("Digite a quantidade de folhas: ");
	scanf("%d",&folha);
	
	if(folha<100){
		preco=folha*0.25;
		printf("\nFolhas impressas: %d\nPreço da impressão: R$0,25\nTotal: R$%d",folha,preco);
	}
	if(folha>=100){
		preco=folha*0.20;
		printf("\nFolhas impressas: %d\nPreço da impressão: R$0,20\nTotal: R$%d",folha,preco);
	}
	return 0;
}

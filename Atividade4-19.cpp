#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	float preco1,parcela,preco2;
	
	printf("Insira o preço total da compra: R$");
	scanf("%f",&preco1);
	
	if(preco1>=250){
		preco2=preco1/5;
		printf("Parcela de 5x disponível.\nPreço por parcela: %.2f",preco2);
	}
	else if(preco1<250){
		printf("Parcela indisponível.");
	}
	return 0;
}

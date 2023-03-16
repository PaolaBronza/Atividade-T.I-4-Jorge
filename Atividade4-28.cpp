#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	char produto[20], pagamento[20],resposta[5];
	
	//PRODUTO
	printf("Selecione um produto");
	printf("\n1-Refri R$3,00\n2-Chá R$4,00\n3-Água R$2,00\n4-Suco R$5,00\nDigite o código do produto: ");
	scanf("%c",&produto);
	
	if(strcmp(produto,"1")==0){
		printf("\nProduto selecionado: Refri\nValor:R$3,00 ");
	}
	else if(strcmp(produto,"2")==0){
		printf("\nProduto selecionado: Chá\nValor:R$4,00 ");
	}
	else if(strcmp(produto,"3")==0){
		printf("\nProduto selecionado: Água\nValor:R$2,00 ");
	}
	else if(strcmp(produto,"4")==0){
		printf("\nProduto selecionado: Suco\nValor:R$5,00 ");
	}
	return 0;
}

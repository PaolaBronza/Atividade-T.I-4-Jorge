#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int valor,valor1,pag;
		
	printf("Valor da compra: R$");
	scanf("%d",&valor);
	printf("1-débito\n2-crédito\n3-cheque\n");
	printf("Insira a forma de pagamento:");
	scanf("%d",&pag);
	
	if(pag=1){
		valor1=valor-(valor*0.05);
		printf("Desconto válido: 5%c",37);
		printf("\nValor inicial: %d\nValor total: R$%d",valor,valor1);
	}
	else if(pag=2){
		printf("Desconto inválido");
		printf("\nValor total: R$%d",valor);
	}
	else if(pag=3){
		valor1=valor+(valor*0.1);
		printf("Taxa cheque: 10%c",37);
		printf("\nValor inicial: %d\nValor total: R$%d",valor,valor1);
	}
	return 0;
}

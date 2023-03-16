#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	float PRESTACAO,VALOR,TAXA,TEMPO;
	printf("Digite a taxa: ");
	scanf("%f",&TAXA);
	printf("Digite o tempo: ");
	scanf("%f",&TEMPO);
	printf("Digite o valor: ");
	scanf("%f",&VALOR);
	PRESTACAO=VALOR+(VALOR*(TAXA/100)*TEMPO);
	printf("Prestaçăo: %f",PRESTACAO);
	return 0;
}

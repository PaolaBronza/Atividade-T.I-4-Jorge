#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	float area,raio;
	printf("Insira o valor de raio: ");
	scanf("%f",&raio);
	area=3.14*pow(raio,2);
	printf("Área da circunferência: %f",area);
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>

main(void){
	setlocale(LC_ALL, "portuguese");

	float num;
	srand(time(NULL));
	num = rand() % 100-50;
	
	printf("N�mero gerado:%.2f", num);
	if(num<0){
		printf("\nN�mero negativo. Quadrado de %.2f �:%.2f", num,(pow(num,2)));
	}
	else{
		printf("\n\nN�mero positivo. Raiz de %.2f: %.2f",num, (sqrt(num)));
	}
	
return 0;
}

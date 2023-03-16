#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num,num2,num3;
	
	printf("Insira um número: ");
	scanf("%d",&num);
	
	if(num>0){
		num2=sqrt(num);
		printf("\nRaiz quadrada: %d",num2);
	}
	else if(num<0){
		num3=pow(num,2);
		printf("\nQuadrado: %d",num3);
	}
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num,num2;
	
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	printf("Digite um n�mero: ");
	scanf("%d",&num2);
	
	if(num>num2){
		printf("%d � maior que %d",num,num2);
	}
	else if(num<num2){
		printf("%d � maior que %d",num2,num);
	}
	else if(num=num2){
		printf("os n�meros s�o iguais");
	}
	return 0;
}

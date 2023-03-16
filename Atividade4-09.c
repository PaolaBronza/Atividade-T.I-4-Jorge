#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num,num2;
	
	printf("Digite um número: ");
	scanf("%d",&num);
	printf("Digite um número: ");
	scanf("%d",&num2);
	
	if(num>num2){
		printf("%d é maior que %d",num,num2);
	}
	else if(num<num2){
		printf("%d é maior que %d",num2,num);
	}
	else if(num=num2){
		printf("os números são iguais");
	}
	return 0;
}

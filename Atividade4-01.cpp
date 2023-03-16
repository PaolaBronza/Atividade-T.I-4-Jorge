#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num,num2,num3;
	
	printf("Insira um número: ");
	scanf("%d",&num);
	printf("Insira um número: ");
	scanf("%d",&num2);
	printf("Insira um número: ");
	scanf("%d",&num3);
	
	if(num>num2,num3){
		printf("maior número: %d",num);
	}
	if(num2>num,num3){
	printf("maior número: %d",num2);
	}
	if(num3>num,num2){
		printf("maior número: %d",num3);
	}
}

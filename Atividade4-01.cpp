#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num,num2,num3;
	
	printf("Insira um n�mero: ");
	scanf("%d",&num);
	printf("Insira um n�mero: ");
	scanf("%d",&num2);
	printf("Insira um n�mero: ");
	scanf("%d",&num3);
	
	if(num>num2,num3){
		printf("maior n�mero: %d",num);
	}
	if(num2>num,num3){
	printf("maior n�mero: %d",num2);
	}
	if(num3>num,num2){
		printf("maior n�mero: %d",num3);
	}
}

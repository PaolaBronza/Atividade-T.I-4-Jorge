#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num,num2;

	printf("Digite um n�mero: ");
	scanf("%d",&num);
	printf("N�mero digitado: %d",num);
	
	if(num>20&&num%2==0){
		num2=num/2;
		printf("\n%d/2=%d",num,num2);
	}
	return 0;
}

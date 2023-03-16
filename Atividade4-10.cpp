#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Digite um número: ");
	scanf("%d",&num);
	
	if(num>100&&num<200){
		printf("%d está entre 100 e 200",num);
	}
	else if(num<100){
		printf("%d é menor que 100",num);
	}
	else if(num>200){
			printf("%d é maior que 200",num);
		}
	return 0;
}

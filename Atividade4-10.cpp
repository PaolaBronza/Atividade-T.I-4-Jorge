#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Digite um n�mero: ");
	scanf("%d",&num);
	
	if(num>100&&num<200){
		printf("%d est� entre 100 e 200",num);
	}
	else if(num<100){
		printf("%d � menor que 100",num);
	}
	else if(num>200){
			printf("%d � maior que 200",num);
		}
	return 0;
}

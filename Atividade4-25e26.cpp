#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Insira um n�mero de 1 a 5: ");
	scanf("%d",&num);
	
	if(num>=1&&num<=5){
		printf("N�mero inserido: %d",num);
	}
	else if(num<0&&num>=6){
		printf("N�mero incorreto");
	}
	return 0;
}

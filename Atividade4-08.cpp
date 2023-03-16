#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int num;
	
	printf("Digite um número: ");
	scanf("%d",&num);
	
	if(num>=10){
		printf("O zoro sola");
	}
	else{
		printf("ta");
	}
	return 0;
}
	

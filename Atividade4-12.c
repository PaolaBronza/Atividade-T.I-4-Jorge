#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	int idade;
	
	printf("Insira sua idade: ");
	scanf("%d",&idade);
	
	if(idade<=10){
	printf("Categoria Infantil");
	}
	else if(idade>=11&&idade<=17){
	printf("Categoria Juvenil");
	}
	else if(idade>=18){
	printf("Categoria Sênior");
	}
	return 0;
}

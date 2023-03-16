#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void){
    setlocale(LC_ALL,"portuguese");
 int idade1, idade2;
 char nome1[40], nome2[40];
 
 	printf("Insira o nome: ");
 	scanf("%s", &nome1);
 	printf("Insira a idade: ");
 	scanf("%d", &idade1);
 	
 	printf("\nInsira outro nome: ");
 	scanf("%s", &nome2);
 	printf("Insira outra idade: ");
 	scanf("%d", &idade2);
 	
 	if(idade1 > idade2){
		printf("A pessoa mais velha é %s com %d anos.", nome1, idade1);
 	}
	else if(idade2 > idade1){
		printf("A pessoa mais velha é %s com %d anos.", nome2, idade2);	
	}
	return 0;
}

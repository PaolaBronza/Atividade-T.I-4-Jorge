#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL, "Portuguese");
//VARIÁVEIS
	int num, num1, num2, escolha;
	
//INÍCIO CÓDIGO

//ESCOLHA	
	printf("Insira um número (N°1): ");
	scanf("%d", &num1);
	printf("Insira um número (N°2): ");
	scanf("%d", &num2);
	
	printf("Escolha um módulo:");
	printf("\n1- Soma");
	printf("\n2- Subtração");
	printf("\n3- Divisão");
	printf("\n4- Multiplicação");

	printf("\nEscolha um dos números acima: ");
	scanf("%d", &escolha);
	
//CÁLCULOS	
	switch (escolha) {
		case 1:
			num = num1 + num2;
			printf("\nMódulo escolhido: Soma\n%d+%d=%d", num1, num2, num);			
			break;
		case 2:
			num = num1 - num2;
			printf("\nMódulo escolhido: Subtração\n%d-%d=%d", num1, num2, num);			
			break;
		case 3:
			num = num1/num2;
			printf("\nMódulo escolhido: Divisão\n%d/%d=%d", num1, num2, num);
			break;
		case 4:
			num = num1 * num2;			
			printf("\nMódulo escolhido: Multiplicação\n%dx%d=%d", num1, num2, num);			
			break;
		default:
			abort;
	}
return 0;
}

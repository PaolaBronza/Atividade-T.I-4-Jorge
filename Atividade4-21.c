#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>

main(void){
	setlocale(LC_ALL, "Portuguese");
//VARI�VEIS
	int num, num1, num2, escolha;
	
//IN�CIO C�DIGO

//ESCOLHA	
	printf("Insira um n�mero (N�1): ");
	scanf("%d", &num1);
	printf("Insira um n�mero (N�2): ");
	scanf("%d", &num2);
	
	printf("Escolha um m�dulo:");
	printf("\n1- Soma");
	printf("\n2- Subtra��o");
	printf("\n3- Divis�o");
	printf("\n4- Multiplica��o");

	printf("\nEscolha um dos n�meros acima: ");
	scanf("%d", &escolha);
	
//C�LCULOS	
	switch (escolha) {
		case 1:
			num = num1 + num2;
			printf("\nM�dulo escolhido: Soma\n%d+%d=%d", num1, num2, num);			
			break;
		case 2:
			num = num1 - num2;
			printf("\nM�dulo escolhido: Subtra��o\n%d-%d=%d", num1, num2, num);			
			break;
		case 3:
			num = num1/num2;
			printf("\nM�dulo escolhido: Divis�o\n%d/%d=%d", num1, num2, num);
			break;
		case 4:
			num = num1 * num2;			
			printf("\nM�dulo escolhido: Multiplica��o\n%dx%d=%d", num1, num2, num);			
			break;
		default:
			abort;
	}
return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
	char nome[40];
	int nota1,nota2,nota3,nota4,media,recuperacao;
	
	printf("Insira o nome do aluno: ");
	fgets(nome,40,stdin);
	printf("Insira as notas bimestrais:");
	printf("\nNota 1: ");
	scanf("%d",&nota1);
		printf("Nota 2: ");
		scanf("%d",&nota2);
	printf("Nota 3: ");
	scanf("%d",&nota3);
		printf("Nota 4: ");
		scanf("%d",&nota4);
	printf("Média para aprovação: 70");
	media=(nota1+nota2+nota3+nota4)/4;
	
	if(media<=69){
		printf("\nAluno: %sMédia anual: %d\nReprovado",nome,media);
	recuperacao=70-media;
			printf("\nNecessita-se de %d pontos para aprovação",recuperacao);	
	}
	else if(media>=70){
		printf("\nAluno: %sMédia anual: %d\nAprovado",nome,media);
	}
	return 0;
}

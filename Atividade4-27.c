#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"portuguese");
 	int um, dois, tres, quatro, cinco, seis;
 
    printf("insira um número: ");
    scanf("%d", &um);
    printf("insira outro número: ");
    scanf("%d",&dois);

    tres = um + dois;
    quatro = um - dois;
    cinco = um * dois;
    seis = um / dois;

    printf("soma: %d\nsubtração: %d\nmultiplicação: %d\ndivisão: %d", tres, quatro, cinco, seis);

	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void) {

int a,b;
setlocale(LC_ALL,"portuguese");

printf("Digite o n�mero de pe�as produzidas: ");
scanf("%d", &a);
printf("Digite o n�mero de pe�as defeituosas: ");
scanf("%d", &b);

if(b >= (a / 10)){
        printf("\n\nA maquina precisa de manuten��o");
    }
    else{
    printf("\nA maquina n�o precisa de manuten��o");
    }

    return 0;
}

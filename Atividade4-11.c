#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void) {

int a,b;
setlocale(LC_ALL,"portuguese");

printf("Digite o número de peças produzidas: ");
scanf("%d", &a);
printf("Digite o número de peças defeituosas: ");
scanf("%d", &b);

if(b >= (a / 10)){
        printf("\n\nA maquina precisa de manutenção");
    }
    else{
    printf("\nA maquina não precisa de manutenção");
    }

    return 0;
}

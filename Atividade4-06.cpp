#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void) {

float Tc,Tf;
setlocale(LC_ALL,"portuguese");

printf("Digite uma temperatura em Fahrenheit: ");
scanf("%f", &Tf);

Tc = (Tf - 32) / 9 * 5;

printf("\nA temperatura em graus Celcius é %f", Tc);

return 0;

}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void) {
int a,b,c;
setlocale(LC_ALL,"portuguese");

printf("Digite um n�mero: ");
scanf("%d", &a);
printf("Digite um segundo n�mero: ");
scanf("%d", &b);
printf("Digite um terceiro n�mero: ");
scanf("%d", &c);

if(a == b && b == c){
    printf("\n%d, %d e %d s�o medidas de um tri�ngulo equil�tero\n", a,b,c);
}
else if(a == b || b == c || c == a){
    printf("\n%d, %d e %d s�o medidas de um tri�ngulo is�sceles\n", a,b,c);
}
else if(a > b && b > c || a > c && c > b || b > a && a > c || b > c && c > a || c > b && b > a || c > a && a > b){
    printf("\n%d, %d e %d s�o medidas de um tri�ngulo escaleno\n",�a,b,c);
}
return 0;
}

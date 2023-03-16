#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void) {
int a,b,c;
setlocale(LC_ALL,"portuguese");

printf("Digite um número: ");
scanf("%d", &a);
printf("Digite um segundo número: ");
scanf("%d", &b);
printf("Digite um terceiro número: ");
scanf("%d", &c);

if(a == b && b == c){
    printf("\n%d, %d e %d são medidas de um triângulo equilátero\n", a,b,c);
}
else if(a == b || b == c || c == a){
    printf("\n%d, %d e %d são medidas de um triângulo isósceles\n", a,b,c);
}
else if(a > b && b > c || a > c && c > b || b > a && a > c || b > c && c > a || c > b && b > a || c > a && a > b){
    printf("\n%d, %d e %d são medidas de um triângulo escaleno\n", a,b,c);
}
return 0;
}

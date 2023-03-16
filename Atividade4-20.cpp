#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    int x1,x2,x3,a,b,c,resu,resu2,resu3,x,delta;


    printf("aX²+bx-c=0\n\n");
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Digite o valor de c: ");
    scanf("%d", &c);
    printf("Digite o valor de x: ");
    scanf("%d", &x);

    x1=x;
    x2=x;
    resu=((a*x1)+(b*x2)-c==0);
    resu2 = ((-b-sqrt(pow(b,2))-4*a*c))/(2*a);
    resu3 = resu2*(-1);
    delta = (pow(b,2)-4*a*c);

    if(delta>0){
        printf("\ndelta é %d e %d é maior que 0\n",delta,delta);
        printf("haverá duas raizes iguais e distintas");
        printf("\n\nUm dos valores do calculo bhaskara é: %d\nE outro é: %d\n", resu2, resu3);

    }else if(delta<0){
        printf("\n\ndelta é %d\nE %d é menor que 0\n\n", delta, delta);
        printf("não haverá raizes reais");
        printf("\n\nUm dos valores do calculo bhaskara é: %d\nE outro é: %d\n", resu2, resu3);
    }else if(delta==0){
        printf("\n\ndelta é %d e %d é igual a 0\n\n", delta, delta);
        printf("existem duas raízes iguais e distintas");
        printf("\n\nUm dos valores do calculo bhaskara é: %d\nE outro é: %d\n", resu2, resu3);
    }
    return 0;
}

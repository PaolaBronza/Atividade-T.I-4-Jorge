#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void){
    setlocale(LC_ALL, "portuguese");
    int x1,x2,x3,a,b,c,resu,resu2,resu3,x,delta;


    printf("aX�+bx-c=0\n\n");
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
        printf("\ndelta � %d e %d � maior que 0\n",delta,delta);
        printf("haver� duas raizes iguais e distintas");
        printf("\n\nUm dos valores do calculo bhaskara �: %d\nE outro �: %d\n", resu2, resu3);

    }else if(delta<0){
        printf("\n\ndelta � %d\nE %d � menor que 0\n\n", delta, delta);
        printf("n�o haver� raizes reais");
        printf("\n\nUm dos valores do calculo bhaskara �: %d\nE outro �: %d\n", resu2, resu3);
    }else if(delta==0){
        printf("\n\ndelta � %d e %d � igual a 0\n\n", delta, delta);
        printf("existem duas ra�zes iguais e distintas");
        printf("\n\nUm dos valores do calculo bhaskara �: %d\nE outro �: %d\n", resu2, resu3);
    }
    return 0;
}

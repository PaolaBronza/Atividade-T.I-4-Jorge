#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main(void) {

char nome[88],seggs[88];
int idade;
setlocale(LC_ALL,"portuguese");

printf("Digite seu nome: ");
scanf("%s", &nome);
printf("Digite sua idade: ");
scanf("%d", &idade);
printf("Digite seu g�nero: ");
scanf("%s", &seggs);

if(strcmp(seggs, "Masculino")==0){
    printf("\n\nSeu nome � %s\nSua idade � %d\nE seu g�nero � masculino\n\n", nome,idade);
} 
else if(strcmp(seggs, "masculino")==0){
        printf("\n\nSeu nome � %s\nSua idade � %d\nE seu g�nero � masculino\n\n", nome,idade);
}
else if(strcmp(seggs, "M")==0){
        printf("\n\nSeu nome � %s\nSua idade � %d\nE seu g�nero � masculino\n\n", nome,idade);
}
else if(strcmp(seggs, "m")==0){
        printf("\n\nSeu nome � %s\nSua idade � %d\nE seu n�nero � masculino\n\n", nome,idade);
}
else {
    printf("\n\nSeu nome � %s\nSua idade � %d\nE seu g�nero � feminino\n\n", nome,idade);
}

return 0;

}

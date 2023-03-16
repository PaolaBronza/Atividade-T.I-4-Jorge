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
printf("Digite seu gênero: ");
scanf("%s", &seggs);

if(strcmp(seggs, "Masculino")==0){
    printf("\n\nSeu nome é %s\nSua idade é %d\nE seu gênero é masculino\n\n", nome,idade);
} 
else if(strcmp(seggs, "masculino")==0){
        printf("\n\nSeu nome é %s\nSua idade é %d\nE seu gênero é masculino\n\n", nome,idade);
}
else if(strcmp(seggs, "M")==0){
        printf("\n\nSeu nome é %s\nSua idade é %d\nE seu gênero é masculino\n\n", nome,idade);
}
else if(strcmp(seggs, "m")==0){
        printf("\n\nSeu nome é %s\nSua idade é %d\nE seu nênero é masculino\n\n", nome,idade);
}
else {
    printf("\n\nSeu nome é %s\nSua idade é %d\nE seu gênero é feminino\n\n", nome,idade);
}

return 0;

}

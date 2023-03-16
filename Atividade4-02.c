#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

main(void){
    setlocale(LC_ALL,"portuguese");

    int tabu, loc, loc2,  resu;

    printf("Insira um número: ");
    scanf("%d", &tabu);

    loc2=1;
    while(loc2<=10){
        resu=loc2*tabu;
        printf("\n%.1d x %.1d = %.1d",loc2,tabu, resu);
        Sleep(50);
        loc2=loc2+1;
    }
    return 0;
}

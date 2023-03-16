#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL,"portuguese");
     int um, dois, tres;

    printf("insira um número: ");
    scanf("%d", &um);
    printf("insira outro número: ");
    scanf("%d",&dois);
    printf("insira outro número: ");
    scanf("%d",&tres);

    if(um > dois && um > tres && dois > tres){
    	printf("%d, %d, %d", tres, dois, um);
    }
	else if(dois > um && dois > tres && um > tres){
    	printf("%d, %d, %d", tres, um, dois);
    }
	else if(um > dois && um > tres && tres > dois){
    	printf("%d, %d, %d",dois, tres, um);
    }
	else if(dois > um && dois > tres && tres > um){
        printf("%d, %d, %d", um, tres, dois);
    }
	else if(tres > um && tres > dois && dois > um){
        printf("%d, %d, %d", um, dois, tres);
    }
	else if(tres > um && tres > dois && um > dois){
        printf("%d, %d, %d", dois, um, tres);
    }

	return 0;
}

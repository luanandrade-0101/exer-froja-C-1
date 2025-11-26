#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int num;

    printf("informe um numero para saber se ele é par ou impar: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("PAR ");
    }else{
        printf("IMPAR ");
    }

    system("pause");
    return 0;
}
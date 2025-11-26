#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");

    float sal;

    printf("Qual o seu salario?");
    fflush(stdin);
    scanf("%f", &sal);

    if(sal > 5000){
        printf("Seu salario é maior que RS5.000.00");
    }else{
         printf("Seu salario é menor que RS5.000.00");
    }
    

    system("pause");
    return 0;
}
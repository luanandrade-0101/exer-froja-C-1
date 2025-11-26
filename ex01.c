#include<stdio.h>
#include<stdlib.h>

int main(){
    
    char nome[50];
    int idade;
     printf("digite seu nome: ");
     fgets(nome, 50, stdin);
    

    
     printf("Digite a sua idade: ");
     scanf("%d" , &idade);

     printf("Ola %s voce tem %d anos");

      system("pause");
    return 0;
    

}

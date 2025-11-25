//inclui a biblioteca stdio.h que permite entrada e saida de infos.(printf e sacanf)
#include<stdio.h>

//inclui a biblioteca stdlib que permite funcoes utilitarias (system())
#include<stdlib.h>

//declaram a funcao principal, onde o programa comeca sua execucao
int main(){
   
    float numero1, numero2, respDiv;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f" , &numero2);

    respDiv =  numero1 / numero2;
    printf("A soma dos numeros é; %.2f" ,respDiv);
    
 
    //pausar o sistema ate que o usuario prescione qualuqer tecla
    system("pause");
    // finalizando programa retornando 0, indicando que tudo ocorreu bem
     return 0;
}



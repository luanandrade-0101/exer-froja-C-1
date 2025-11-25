//inclui a biblioteca stdio.h que permite entrada e saida de infos.(printf e sacanf)
//include a biblioteca stdio.h que permite usar entrada e saida de infos.(print e scanf)
#include<stdio.h>

//incluir a biblioteca stdlib.h que permite funcoes utilitarias (system())
#include<stdlib.h>

//declarar a funcao principal, onde o progama começa sua execução
int main(){

    float numero1, numero2, numero3, respMedia;

    printf("Digite primeiro numero: ");
    scanf("%f", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%f", &numero2);
 printf("Digite o terceiro numero: ");
    scanf("%f", &numero3);
 

   respMedia = numero1 + numero2 + numero3 /3;
    printf("A Media dos numeros é: %.2f", respMedia);


 //pausar o sistema até que o usuario pressione qualquer tecla
 system("pause");
 //finalizamos o progama retornando 0, indicando que ocorreu tudo bem
    return 0;
}

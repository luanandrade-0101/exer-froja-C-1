#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");
      
      char genero;
      int idade;

      printf("Qual o genero:  \n");
      scanf("%d", &genero);
      printf("Digite (M) para masculino e (F) para feminino:  \n");
      scanf("%d", &genero);

      if(genero == 'M'){
         if(idade >=16){
            printf("PODE COMPRAR INGRESSOS:  \n");
         }else{
            printf("NAO PODE COMPRAR INGRESSOs:  \n");
         }
      }else{
          if(idade >=16){
            printf("PODE COMPRAR INGRESSOS:  \n");
         }else{
            printf("NAO PODE COMPRAR INGRESSOS:  \n");
         }

      

         system("pause");
     return 0;


}


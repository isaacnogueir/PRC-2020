#include<stdio.h>

int main(void){

 int valor, resultado;
 int i, continuar;
 
printf("___________________________________________________________________________\n");
printf("\n OLA, SEJA BEM VINDO AO PROGRAMA \n");
printf("___________________________________________________________________________\n"); 
 
 do{
    printf("Digite o numero desejado:\n ");
   scanf("%d",&valor);
    resultado = 0; 
//********************************************  
  if(valor == 1){
    printf("VALOR ESCOLHIDO NAO E VALIDO!\n");
        }else{
           for(i=1; i<=valor; i++){
           if(valor % i == 0)
           resultado++;
           }
        if(resultado == 2)
           printf("%d E UM NUMERO PRIMO!\n", valor);
          else
              printf("%d NAO E UM NUMERO PRIMO!\n", valor);
    }
//*************************************************
   printf("\nDigite 1 para inserir mais um numero ou digite 0 para finalizar.\n");
   scanf("%d", &continuar);

}while(continuar==1);

 return 0;
}


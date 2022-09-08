#include <stdio.h>
#include <stdlib.h>

int main(){
	
int numero1, numero2, soma1, soma2, i, cont;

//**********************************************************
printf("__________________________________________________________________________\n");	
printf("SEJA BEM VINDO AO PROGRAMA PARA SABER SE DOIS NUMEROS SAO AMIGOS OU NAO!\n");
printf("__________________________________________________________________________\n");
//**********************************************************
do{  
   printf("\nPara comecar, digite dois numeros:\n");
	scanf("%d %d", &numero1, &numero2);
      if(numero1 < 0 || numero2 < 0){
	    printf("Existe algum numero negativo, redigite os numeros: \n");
        scanf("%d %d", &numero1, &numero2);
        }
 
  soma1=0.0;
  soma2=0.0;
  
      for(i = 1; i <= numero1/2; i++)
      	if(numero1 % i == 0){
		  	soma1 += i;
		   }for(i = 1; i <= numero2/2; i++)
		     if(numero2 % i == 0){
			 soma2 += i;
		       }
//**********************************************************
	if(numero1 == soma2 && numero2 == soma1){
	printf("OS numeros digitados sao amigos.\n");
	}else 
	    printf("Os numeros digitados nao sao amigos.\n");

//*********************************************************
      printf("Para continuar comparando mais numeros, digite 1, e para sair, digite 0. \n");
      scanf("%d", &cont);
      system("cls");
}while(cont==1);
return 0;
}

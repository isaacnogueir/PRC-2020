#include <stdio.h>
#include <string.h>

int main (){

char frase[1000], copia[1000];
int i,r=0;

//************************************************************************************** 
printf("____________________________________________________________________________________\n");
printf("\n OLA, VAMOS INICIAR O PROGRAMA PARA SABERMOS SE A FRASE E UM PALINDROMO OU NAO!\n");
printf("____________________________________________________________________________________\n");

    frase[i]=0;
    printf("\nPara iniciar, digite a frase desejada: ");
    gets(frase);
      
  //**************************************************************************************    
     fflush(stdin);
     for(i=strlen(frase)-1; i >= 0; i--){
     copia[r] = frase[i];
     r++;
    }
	printf("A frase escolhida lida de tras pra frente e: %s \n", copia); 
	printf("____________________________________________________________________________________\n"); 
	  if(strcmp(frase,copia)!=0){
	        printf("\nlogo, nao e PALINDROMO!\n");
           }else{
           	printf("\nLogo, e PALINDROMO!\n");}

system("pause");   
return 0;
}

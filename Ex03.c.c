#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {

int i, continuar;
char frase[1000];

//************************************************************
printf("___________________________________________________________________________\n");
printf("\n OLA, SEJA BEM VINDO AO PROGRAMA\n");
printf("___________________________________________________________________________\n");
//************************************************************    
do{
	
     fflush(stdin);
     printf("\nPara iniciar, digite abaixo uma frase do seu gosto: \n");
      gets(frase);
      strlwr(frase);
          
//************************************************************    
     for(i=0; i <= strlen(frase); i++) {
        if(i==0 || frase[i-1]==' ')
            frase[i]=toupper(frase[i]);
            }
            printf("A frase escolhida finalizada ficou assim: \n%s",frase);
//************************************************************

   printf("\nPara transformar uma nova frase digite 1, se nao, digite 0.\n");
   scanf("%d", &continuar);
   system("cls");
       }while(continuar==1);

 return 0;
}




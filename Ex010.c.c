#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>

int main(){

 char tam,frase[100],chance[100]="-", letra[100], dica[100];
 int erros=5, pontos=0;
 int x,i;
  
  printf("__________________________________________________________________\n");    
  printf("\nSEJA BEM VINDO EM NOSSO JOGO, VAMOS COMECAR?? \n");
  printf("__________________________________________________________________\n");

//****************************************************
 fflush(stdin);
 printf("\nDigite a frase secreta:\n");
 fgets(frase,100,stdin);
 printf("\nDigite uma dica:\n");
 gets(dica); 
  
  if(frase[strlen(frase) - 1] == '\n')
    frase[strlen(frase) - 1] = '\0';
        
//****************************************************
     for(i=0;i<strlen(frase);i++){
		    if(chance[i]==((frase >= "a" && frase <= "z") || (frase >= "A" && frase <= "Z"))){
		     chance[i]='_';
             tam=strlen(frase);
     	      }else{
     		  chance[i]=' ';
              tam=strlen(frase);  
        		 }
              }
//****************************************************
  system("cls");
  printf("___________Vamos comecar?______________\n");
  printf("Espacos tambem sao caracteres a serem descobertos!\n");
  fflush(stdin);
  printf("\nA DICA E: %s",dica);
  for(i=0; i=(erros>0); i++){
  x=0;
  printf("\n %s \n",chance);
  printf("\n digite uma letra:");
  gets(letra);
  
          for(i=0;i<strlen(frase);i++){
            if(letra[0]==frase[i]){
               chance[i]=frase[i];
               pontos++;
               x++;
             }
          }       
 //************************************************
         if(x==0){
         erros-=1;
		 if(erros==0) {
        printf("\nQUE PENA, VC FOI ENFORCADO :/ \n");	   
	    printf(" ______________\n");
	    printf("|    | \n");
		printf("|    0 \n");
		printf("|  ./|\\. \n");
	    printf("|  _/|\\_ \n");
	    printf("|        \n");
		printf("\n A frase da vez era: %s",frase);
        break;
        }else
            system("cls");
           printf("\n VOCE ERROU! RESTAM APENAS %d VIDA(S)",erros); 
		   }else{
		   	     if(pontos==tam) {
                 printf("\n PARABENS, VC GANHOU! \n");
                 printf("\n A frase advinhada foi: %s\n",frase);
                 break;
		         }else{
		         	   system("cls");
                      printf("\n VOCE ACERTOU UMA LETRA, AINDA POSSUI %d OPORTUNIDADES",erros);
                     }
                 }
             }
system("pause");
return 0;
}

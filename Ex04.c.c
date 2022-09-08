#include <stdio.h>
#include <stdlib.h>

int main(){

int matriz1[100][100], matriz2[100][100], soma[100][100];
int i,j, l, c, l2,c2;
    
  printf("__________________________________________________________________\n");    
  printf("\nSEJA BEM VINDO EM NOSSO PROGRAMA, VAMOS COMECAR \n");
  printf("\nNOSSAS MATRIZES PODEM TER NO MAXIMO 100 LINHAS E 100 COLUNAS\n");
  printf("__________________________________________________________________\n");

//****************************************************************************************   
 
  printf("\nDigite o numero de linhas da matriz 1:\n");
  scanf("%d", &l);
  printf("Agora digite o numero de colunas da matriz 1:\n");
  scanf("%d", &c);
  
   printf("\nDIGITE OS VALORES DA MATRIZ 1:\n");
   for(i=0; i<l; i++)
     for(j=0; j<c; j++){
	  printf("Digite o valor da posicao (%d,%d): ",i,j);
	   scanf("%d", &matriz1[i][j]);
            }printf("\nMATRIZ1 DE NUMERO 1:\n\n");
           
		   for(i=0; i<l; i++) {
            for(j=0; j<c; j++)
             printf("%d\t", matriz1[i][j]);
             printf("\n");
            }
   
//****************************************************************************************    
 
    printf("\nDigite o numero de linhas da matriz 2: \n");
     scanf("%d", &l2);
     printf("Agora digite o numero de colunas da matriz 2: \n");
     scanf("%d", &c2);   
      printf("\nAGORA DIGITE OS VALORES DA MATRIZ 2:\n");
           
		    for(i=0; i<l2; i++)
             for(j=0; j<c2; j++){
              printf("Digite o valor da posicao (%d,%d): ",i,j);
	            scanf("%d", &matriz2[i][j]);
               }printf("\nMATRIZ DE NUMERO 2:\n\n");
               
			   for(i=0; i<l2; i++) {
                 for(j=0; j<c2; j++)
                 printf("%d\t", matriz2[i][j]);
                 printf("\n");           
			    }
				
//****************************************************************************************                 
			    
			    if(l!=l2 || c!=c2){  
                printf("\nSOMA IMCOMPATIVEL! \n");
                }else{ 
					for(i=0; i<l; i++){
                    for(j=0; j<c; j++)
	               soma[i][j] = matriz1[i][j] + matriz2[i][j];
                   } printf("\n\n****A SOMA DAS MATRIZES FOI DE: ****\n\n");
					    for(i=0; i<l; i++){
	                     for(j=0; j<c; j++)
                          printf("%d\t", soma[i][j]);
                          printf("\n");
                            } 
						 printf("\n\n SOMA COMPATIVEl! ");
                        }
system("pause");
return 0;
}








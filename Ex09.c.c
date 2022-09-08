#include <stdio.h>

int main (){

int num, i;
double maiornum, menornum, media, valores[100],total=0;

  printf("__________________________________________________________________\n");    
  printf("\nSEJA BEM VINDO EM NOSSO PROGRAMA\n");
  printf("__________________________________________________________________\n");

//****************************************************************************************    
  
  printf("\nDigite o numero de elementos que sera inserido:\n");
  scanf("%d",&num);
   if(num > 100){
     system("cls");
	 printf("QUANTIDADE ACIMA DO PERMITIDO, DIGITE OUTRA QUANTIDADE: \n");
      scanf("%d",&num);
	    }
	   
	    printf("Agora, digite o valor de cada elemento:\n");
        for(i=0; i < num; i++){
        scanf("%lf",&valores[i]);
         if(valores[i]==0){
		   return 0;
		     }
			total = total + valores[i];
			
          }   
	     
	media=0;
	media = total/num;
    
	     printf("\nA MEDIA DOS VALORES ANTES DAS ALTERACOES E DE: %.2lf", media);
         printf("\n__________________________________________________________________\n");    
//****************************************************************************************    
    num -= 2;
     menornum = valores[0];
	 maiornum = valores[0]; 
	  for(i=1; i <= num; i++){
	    if(valores[i]==0){
       	   maiornum=valores[i];
       	   menornum=valores[i];
       	   i++;
          }
	   }for(i=1; i < num; i++){
         if(maiornum < valores[i]){
	      maiornum = valores[i];
	      }else{
		    for(i=1; i < num; i++){
             if(menornum > valores[i]){
               menornum = valores[i];
                     }
                   } 
                 }
               }
	    total -= menornum;
	    total -= maiornum;
		printf("\nO MAIOR VALOR E O: %.2lf \n", maiornum);
        printf("O MENOR VALOR E O: %.2lf \n", menornum);
        
//****************************************************************************************  	 
          media=0;
		  media = total/num;
          printf("A MEDIA ATUALIZADA E DE: %.2lf \n", media);

 system("pause");          
return 0;
}
	

#include <stdio.h>

int main(void) {
int quantidade,produto, cont;
double total;

do{

printf("________________________________________________________\n");
printf("SEJA BEM-VINDO, FACA SEU PEDIDO AGORA\n");
printf("***************TEMOS:******************\n");
printf("________________________________________________________\n");
printf("1   -   MISTO QUENTE   --->  R$ 4,50\n");
printf("2   -   QUEIJO QUENTE  --->  R$ 4,00\n");
printf("3   -   HAMBURGUER     --->  R$ 6,60\n");
printf("4   -   EGGBURGUER     --->  R$ 7,00\n");
printf("5   -   PODRAO         --->  R$ 9,00\n");
printf("0   -   PARA SAIR      ---> DIGITE 0\n");
//********************************************

printf("\nPrimeiro digite o numero escolhido:\n");
 scanf("%d",&produto);
   if(produto > 5){ 
    printf("PRODUTO INEXISTENTE, TENTE DE NOVO:\n");
    scanf("%d",&produto);
      } if(produto > 0){
	    printf("Em seguida, digite a quantidade desejada:\n");
        scanf("%d",&quantidade);
         }
//******************************************** 
    total=0;
	if(produto == 1){
      total += quantidade * 4.50;
    }else if(produto == 2){
        total += quantidade * 4.00;
      }else if(produto == 3){
         total += quantidade * 6.00;
       }else if(produto == 4){
          total += quantidade *7.00;
        }else if(produto == 5){
          total += quantidade * 9.00;
          }else if(produto == 0){
		   return 0;
		  }printf("O seu pedido e de R$ %.2lf, obrigado pela compra.\n", total);
          		  
      //****************************************
       printf("Digite 1 para uma nova compra 0 para sair. ");
        scanf("%d", &cont);
        system("cls");
    }while(cont==1);
  
return 0;
}

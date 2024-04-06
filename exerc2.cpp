#include<stdio.h>

int main()
{
	int n, a, b, c;
	
	printf("Digite quatro valores (n, a, b, c): ");
   scanf("%d %d %d %d", &n, &a, &b, &c);
   
   switch(n) {
   		case(1):{
   			//verificar se a é  o menor valor
   			if(a <= b && a <= c){
   				//se sim, printar a
   				printf("%d",a);
   				//e comparar b e c
   				if(b <= c){
   					printf(" %d %d",b ,c);
				   }
				else{
					printf(" %d %d",c,b);
				}
		   }
		   //verificar se b é o menor valor
		   	if(b <= a && b <= c){
		   		//se sim, printar o b
				printf("%d",b);
				//e comparar a e c
				if(a <= c){
					//se se, printar a e depois c
					printf("%d %d",a ,c);
				   }
				   //caso contrário, outra ordem
				else{
					printf("%d %d",c,a);
				}
		   }
		   //verificar se c e o menor valor
		   	if(c <= b && c <= a){
		   		//se sim, printar o c
				printf("%d",c);
				//e comprar a com b
				if(b <= a){
					//se sim, printar b e depois o a 
					printf("%d %d",b ,a);
				   }
				else{
					//caso contrario, print a e depois b
					printf("%d %d",a,b);
				}
		   }
			break;
		   }
		   case(2): {
		   	if(a >= b && a >= c){
   				printf("%d",a);
   				if(b >=c){
   					printf(" %d %d",b ,c);
				   }
				else{
					printf(" %d %d",c,b);
				}
		   }
		   
		   	if(b >=a && b >=c){
				printf(" %d",b);
				if(a >=c){
					printf(" %d %d",a ,c);
				   }
				else{
					printf(" %d %d",c,a);
				}
		   }
		   
		   	if(c >= b && c >=a){
				printf("%d",c);
				if(a > b){
					printf(" %d %d",a ,b);
				   }
				else{
					printf(" %d %d",b,a);
				}
			break;
		   }
		   case(3):{
		   	//verificar se a é maior q b e menor q c ou verificar se a é amior q c e a é menor q b
		   	if((a>=b && a<=c) || ())
		   	//verificar se a e maior que b e c
		   	//se sim printar primeiramente b,a,c ou se quiser voce pode printar c,a,b
			break;
		   }
   }
}}

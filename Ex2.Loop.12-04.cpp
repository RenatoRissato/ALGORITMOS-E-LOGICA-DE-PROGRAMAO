#include <stdio.h>

int main()
{

float n1, n2, media, mediageral=0;
int cont = 0;
char continua; 

do
{
	printf("\nEntre com a nota 1: ");
	scanf("%f", &n1);
	printf("\nEntre com a nota 2: ");
	scanf("%f", &n2);
	media = (n1+n2)/2;
	mediageral = mediageral + media;
	
	if(media >= 6)
	{	
        printf ("\nAluno %i Aprovado com a media %.2f", cont+1, media);

	}
	else 
	{
		printf ("\nAluno %i Reprovado com a media %.2f", cont+1, media);
		
	}
	cont++;// incrementa 1 un. em cont
	printf("\n Deseja calcular novamente(s/n)?: ");
	getchar();//função de leitura de caracteres
	scanf("%c", &continua);	
}while(continua == 's'); //== significa igualdade 


printf("\nA media geral e: %.2f", mediageral/5);

}

//prova vai cair ate if else if

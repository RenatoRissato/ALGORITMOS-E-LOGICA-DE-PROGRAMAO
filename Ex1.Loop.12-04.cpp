#include <stdio.h>

int main()
{

float n1, n2, media, mediageral=0;
int cont = 0;

while(cont < 5)
{
	printf("\nEntre com a nota 1: ");
	scanf("%f", &n1);
	printf("\nEntre com a nota 2: ");
	scanf("%f", &n2);
	media = (n1+n2)/2;
	mediageral = mediageral + media;
	
	if(media >= 6)
	{	
        printf ("\nAluno %i Aprovado com a media %.2f \n-------- ", cont+1, media);

	}
	else 
	{
		printf ("\nAluno %i Reprovado com a media %.2f \n--------", cont+1, media);
		
	}
	cont++;// incrementa 1 un. em cont
		
}//fecha o while(Enquanto)

printf("\nA media geral e: %.2f", mediageral/5);

}


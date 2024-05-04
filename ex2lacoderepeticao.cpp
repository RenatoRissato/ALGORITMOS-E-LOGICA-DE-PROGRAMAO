#include<stdio.h>

int main()
{
int x;
float peso, altura, imc, imcgeral=0;
for (x=0; x<15; x++)
{

printf ("\nQual o seu peso: ");
scanf("%f", &peso);
printf ("Qual a sua altura: ");
scanf("%f", &altura);
imc = peso/(altura*altura);
printf("Seu imc e de: %f", imc);

if (imc<17)
{
printf("\nMuito abaixo do peso");	
}
else if (imc>16 && imc<18.49)
{
	printf("\nAbaixo do peso");	
}
else if (imc>18.5 && imc<24.99)
{
	printf("\nPeso normal");	
}
else if (imc>25 && imc<29.99)
{
	printf("\nAcima do peso");
}
else if (imc>30 && imc<34.99)
{
	printf("\nObesidade 1");
}
else if (imc>35 && imc<39.99)
{
	printf("\nObesidade 2 (severa)");
}
else 
{
	printf("\nObesidade 3(morbida)");
}
imcgeral = imcgeral + imc;
}
printf ("\nO imc geral: %.2f", imcgeral/15);
}



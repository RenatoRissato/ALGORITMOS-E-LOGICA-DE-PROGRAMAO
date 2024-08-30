// 6) Escreva um programa que leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius.
// A fórmula de conversão é: ºC = (°F - 32)*5/9 sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.

#include <stdio.h>

int main(){

float tempF, tempC;

printf("Qual a temperatura em graus Fahrenheit: ");
scanf("%f", &tempF);

tempC = (tempF - 32)*5/9;

printf("Conversao de Fahrenheit para Celsius: %.2f", tempC);











}

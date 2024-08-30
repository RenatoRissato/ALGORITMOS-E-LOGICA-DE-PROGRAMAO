// 13) Dois carros percorreram diferentes distâncias em diferentes tempos. 
// Sabendo que a velocidade média é a razão entre a distância percorrida e o tempo levado para percorrê-la, 
// faça um programa que leia as distâncias que cada carro percorreu e o tempo que cada um levou,
// e indique o carro que teve maior velocidade média (ou se as  velocidades são iguais).

#include <stdio.h>

int main(){

float distancia1, distancia2, tempolevado1, tempolevado2, velmedia1, velmedia2;

printf("Qual a distancia percorrida do carro 1: ");
scanf("%f", &distancia1);
printf("Qual a distancia percorrida do carro 2: ");
scanf("%f", &distancia2);

printf("Qual tempo levado do carro 1 para percorrer a distancia %.2f: ", distancia1);
scanf("%f", &tempolevado1);
printf("Qual tempo levado do carro 2 para percorrer a distancia %.2f: ", distancia2);
scanf("%f", &tempolevado2);

velmedia1 = distancia1/tempolevado1;
velmedia2 = distancia2/tempolevado2;

if(velmedia1>velmedia2){
	printf("O carro que teve a maior velocidade media foi carro 1 com %.2f", velmedia1);
}else if(velmedia2>velmedia1){
	printf("O carro que teve a maior velocidade media foi carro 2 com %.2f", velmedia2);
}else{
	printf("A velocidade media de ambos os carros são iguais");
}
return 0;
}

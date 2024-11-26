#include <stdio.h>

int main() {

double populacao, area, pib;
float media;

//entrada de dados
printf("digite quantidade de população: \n");
scanf("%lf", &populacao);

printf("digite a area: \n");
scanf("%lf", &area);

printf("digite o pib: \n");
scanf("%lf", &pib);


//calculos
double densidade = populacao /area;
double pib_per_capital = pib / populacao;

//exibir resultados
printf("densidade populacional: %.2f habitantes por km \n", densidade);
printf("PIB per capital %.2f \n", pib_per_capital);




return 0;

}
#include <stdio.h>


int main() {
 char nome[100];
 long int populacao;
 float area;
 double pib;
 int numpontosTuriscos;

 
 printf("nome da cidade: \n");
 fgets(nome, sizeof(nome), stdin);
 
 printf("digite quantidade de populacao: \n");
 scanf("%ld", &populacao);

 printf("digite a area: \n");
 scanf("%f", &area);

 printf("digite o pib: \n");
 scanf("%lf", &pib);


 printf("digite numero de ponto turisco: \n");
 scanf("%d", &numpontosTuriscos);



printf("\n--- dados ---\n");
printf("nome: %s", nome);
printf("populacao: %ld\n", populacao);
printf("area: %f\n",area);
printf("pib: %lf\n", pib);
printf("ponto turisco: %d\n", numpontosTuriscos);




    return 0;
}

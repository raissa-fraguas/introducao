#include <stdio.h>

 int main(){
   char estado [30];
   char cod [3];
   char cidade [20];
   int populacao;
   float area;
   float PIB;
   int pontos;

   printf("Insira o estado da carta: \n");
   scanf("%s", estado);

   printf("Insira o codigo da carta: \n");
   scanf("%s", &cod);

   printf("Insira a cidade da carta: \n");
   scanf("%s", &cidade);

   printf("Insira a populacao da carta: \n");
   scanf("%d", &populacao);

   printf("Insira a area: \n");
   scanf("%f", &area);

   printf("Insira o PIB da carta: \n");
   scanf("%f", &PIB);

   printf("Insira os pontos: \n");
   scanf("%d", &pontos);

     printf ("Estado da carta: %s\n", estado);
     printf ("Codigo da carta: %s\n", cod);
     printf ("Cidade da carta: %s\n", cidade);
     printf ("Populacao da carta: %d\n", populacao);
     printf ("Area da carta: %f\n", area);
     printf ("PIB da carta: %f\n", PIB);
     printf ("Pontos da carta: %d\n", pontos);



   return 0;
   }

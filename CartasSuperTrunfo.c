#include <stdio.h>
    int main(){
        int("novo commit");
        
        int  turistico, populacao;
        float km, pib, densidade, percapita;
        char estado[3], cidade[50], numero [5];
          
        
        printf("SUPER TRUNFO - CIDADES\n\n");

        printf("nome da cidade 1 (sem espaço): ");
        scanf(" %s", cidade);

        printf("sigla estado: ");
        scanf("%s", estado);

        printf("numero da carta: ");
        scanf("%s", numero);

        printf("população: ");
        scanf("%d", &populacao);

        printf("area total: ");
        scanf("%f", &km);

        printf("PIB: ");
        scanf("%f", &pib);

        printf("numero de pontos turisticos: ");
        scanf ("%d", &turistico);

         densidade =  populacao / km;

         percapita =(float) (pib / populacao) *1000000000.0;
        

        printf("\nnome da cidade 1 (sem espaço): %s\n", cidade);
        printf("sigla do estado: %s\n", estado);
        printf("codigo da carta: %s\n", numero);
        printf("população: %d\n", populacao);
        printf("area total %.3f km²\n", km);
        printf("PIB: %f\n", pib);
        printf("numero de pontos turisticos: %d\n", turistico);
        printf("densidade popucional: %.2f\n", densidade);
        printf("PIB PER CAPITA: %.2f\n", percapita);

            printf("nome da cidade 2 (sem espaço): ");
        scanf(" %s", cidade);

        printf("sigla estado: ");
        scanf("%s", estado);

        printf("numero da carta: ");
        scanf("%s", numero);

        printf("população: ");
        scanf("%d", &populacao);

        printf("area total: ");
        scanf("%f", &km);

        printf("PIB: ");
        scanf("%f", &pib);

        printf("numero de pontos turisticos: ");
        scanf ("%d", &turistico);

        densidade = (populacao / km);

        percapita = (float) (pib / populacao) *1000000000.0;

        printf("\nnome da cidade 2 (sem espaço): %s\n", cidade);
        printf("sigla do estado: %s\n", estado);
        printf("codigo da carta: %s\n", numero);
        printf("população: %d\n", populacao);
        printf("area total %.3f km²\n", km);
        printf("PIB: %.2f\n", pib);
        printf("numero de pontos turisticos: %d\n", turistico);
        printf("densidade popucional: %.2f\n", densidade);
        printf("PIB PER CAPITA: %.2f\n", percapita);

        retorn b 0
    }

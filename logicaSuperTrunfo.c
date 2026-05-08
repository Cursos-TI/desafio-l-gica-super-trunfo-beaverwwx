#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, pib1, area2, pib2;
    char codigo1[50], codigo2[50];
    char estado1[50], estado2[50];
    char nome1[50], nome2[50];
    float media_pib1, media_densidade1, media_pib2, media_densidade2;
    int resultado_populacao, resultado_area, resultado_pib, resultado_pontos, resultado_media_pib, resultado_media_densidade, resultado_super;
    int atributo;

    
    
    // carta 1
    printf("Digite o nome do primeiro estado: \n");
    scanf(" %s", &estado1);

    printf("Digite o nome da primeira cidade: \n");
    scanf(" %s", &nome1);
    
    printf("Digite o código do primeiro estado: \n");
    scanf(" %s", &codigo1);

    printf("Digite a população do primeiro estado: \n");
    scanf(" %lu", &populacao1);

    printf("Digite a área do primeiro estado: \n");
    scanf(" %f", &area1);

    printf("Digite o PIB do primeiro estado: \n");
    scanf(" %f", &pib1);

    printf("Digite o numero de pontos turisticos do primeiro estado: \n");
    scanf(" %d", &pontos1);

    printf("\n");

    // carta 2 
      printf("Digite o nome do segundo estado: \n");
    scanf(" %s", &estado2);

    printf("Digite o nome da segunda cidade: \n");
    scanf(" %s", &nome2);
    
    printf("Digite o código do segundo estado: \n");
    scanf(" %s", &codigo2);

    printf("Digite a população do segundo estado: \n");
    scanf(" %lu", &populacao2);

    printf("Digite a área do segundo estado: \n");
    scanf(" %f", &area2);

    printf("Digite o PIB do segundo estado: \n");
    scanf(" %f", &pib2);

    printf("Digite o numero de pontos turisticos do segundo estado: \n");
    scanf(" %d", &pontos2);

    printf("\n");
    
    //Comparação dos atributos
    printf("Escolha um atributo para comparar as cartas: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    printf("3 - PIB \n");
    printf("4 - Pontos Turisticos \n");
    printf("5 - Densidade Populacional \n");
    scanf("%d", &atributo);

    media_densidade1 = (populacao1 / area1);
    media_densidade2 = (populacao2 / area2);
    switch(atributo) {
        case 1: 
            if (populacao1 > populacao2) {
                printf("População: %s venceu\n", nome1);
            } else if (populacao2 > populacao1) {
                printf("População: %s venceu\n", nome2);
            } else {
                printf("População: Empate\n");
            }
        break;
        case 2:
                  if (area1 > area2) {
                printf("Área: %s venceu\n", nome1);
            } else if (area2 > area1) {
                printf("Área: %s venceu\n", nome2);
            } else {
                printf("Área: Empate\n");
            }
        break;
        case 3:
                  if (pib1 > pib2) {
                printf("PIB: %s venceu\n", nome1);
            } else if (pib2 > pib1) {
                printf("PIB: %s venceu\n", nome2);
            } else {
                printf("PIB: Empate\n");
            }
        break;
        case 4:
                  if (pontos1 > pontos2) {
                printf("Pontos Turisticos: %s venceu\n", nome1);
            } else if (pontos2 > pontos1) {
                printf("Pontos Turisticos: %s venceu\n", nome2);
            } else {
                printf("Pontos Turisticos: Empate\n");
            }
        break;
        case 5:
                  if (media_densidade1 < media_densidade2) {
                printf("Densidade Populacional: %s venceu\n", nome1);
            } else if (media_densidade2 < media_densidade1) {
                printf("Densidade Populacional: %s venceu\n", nome2);
            } else {
                printf("Densidade Populacional: Empate\n");
            }
        break;
        default:
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        break;
          
    }
    

}

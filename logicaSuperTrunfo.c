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
    int atributo1, atributo2, resultado1, resultado2;

    
    
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
    printf("Escolha o primeiro atributo para comparar as cartas: \n");
    printf("1 - População \n");
    printf("2 - Área \n");
    scanf("%d", &atributo1);

    switch(atributo1) {
    case 1:
        printf("Você escolheu a população!\n");
        resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;
    case 2:
        printf("Você escolheu a área!\n");
        resultado1 = area1 > area2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }
    
    printf("Escolha o segundo atributo para comparar as cartas: \n");
    printf("ATENÇÃO: Você deve escolher um atributo diferente do primeiro!\n");
    printf("1 - População \n");
    printf("2 - Área \n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2){
        printf("Você escolheu o mesmo atributo.\n");
    } else {
   switch(atributo2) {
        case 1:
        printf("Você escolheu a população!\n");
        resultado2 = populacao1 > populacao2 ? 1 : 0;
        break;
        case 2:
        printf("Você escolheu a área!\n");
        resultado2 = area1 > area2 ? 1 : 0;
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }

    if (resultado1 && resultado2)
    {
        printf("Parabéns, você venceu!\n");
    } else if (resultado1 != resultado2){
        printf("Empatou!\n");
    } else {
        printf("Infelizmente, você perdeu!\n");
    }
}
}

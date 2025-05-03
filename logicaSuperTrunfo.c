#include <stdio.h>

int main(){
    char estado; // Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigo_carta[4]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nome_cidade [20]; // O nome da cidade
    unsigned long int populacao; // O número de habitantes da cidade
    float area; // A área da cidade em quilômetros quadrados
    float pib; //O Produto Interno Bruto da cidade
    int n_pontos_turisticos; // A quantidade de pontos turísticos na cidade
    float densidade_populacional; //divide a população da cidade pela área, quantidade por km²
    float pib_percapita; //Riqueza em média por pessoa na cidade, divide o pib pela população
    float densidade_populacional_invertida; // 1 dividido pela densidade populacional que é o que dá pontuação no jogo
    double super_Poder; //Soma todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional

    char estado2; // Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    char codigo_carta2[4]; // A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    char nome_cidade2 [20]; // O nome da cidade
    unsigned long int populacao2; // O número de habitantes da cidade
    float area2; // A área da cidade em quilômetros quadrados
    float pib2; //O Produto Interno Bruto da cidade
    int n_pontos_turisticos2; // A quantidade de pontos turísticos na cidade
    float densidade_populacional2; //divide a população da cidade pela área, quantidade por km²
    float pib_percapita2; //Riqueza em média por pessoa na cidade, divide o pib pela população
    float densidade_populacional_invertida2; // 1 dividido pela densidade populacional que é o que dá pontuação no jogo
    double super_Poder2; //Soma todos os atributos numéricos (população, área, PIB, número de pontos turísticos, PIB per capita e o inverso da densidade populacional
    /*
        printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

        %d: Imprime um inteiro no formato decimal.
        %i: Equivalente a %d.
        %f: Imprime um número de ponto flutuante no formato padrão.
        %e: Imprime um número de ponto flutuante na notação científica.
        %c: Imprime um único caractere.
        %s: Imprime uma cadeia (string) de caracteres.
    */

         printf("Cadastro da Carta 1:\n");

    printf("Digite a letra do Estado (A a H): ");
    scanf(" %c", &estado);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf(" %s", codigo_carta);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nome_cidade); 

    printf("Digite a População: ");
    scanf("%lu", &populacao);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &n_pontos_turisticos);

        printf("\n\nCadastro da Carta 2:\n");

    printf("Digite a letra do Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Código da Carta (ex: A01): ");
    scanf(" %s", codigo_carta2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %s", nome_cidade2);

    printf("Digite a População: ");
    scanf("%lu", &populacao2);

    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &n_pontos_turisticos2);

  // Exibição das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %lu\n", populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: %f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", n_pontos_turisticos);
    printf("Densidade populacional: %f hab/km²\n", densidade_populacional = populacao/area);
    printf("PIB per Capita: %.2f reais\n", pib_percapita = (float)pib/populacao);
    densidade_populacional_invertida = 1/densidade_populacional;
    printf("Super poder: %f\n", super_Poder = (double)populacao + (double)area + (double)pib + (double)n_pontos_turisticos + (double)pib_percapita + (double)densidade_populacional_invertida);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", n_pontos_turisticos2);
    printf("Densidade populacional: %f hab/km²\n", densidade_populacional2 = populacao2/area2);
    printf("PIB per Capita: %.2f reais\n", pib_percapita2 = (float)pib2/populacao2);
    densidade_populacional_invertida2 = 1/densidade_populacional2;
    printf("Super poder: %f\n\n", super_Poder2 = (double)populacao2 + (double)area2 + (double)pib2 + (double)n_pontos_turisticos2 + (double)pib_percapita2 + (double)densidade_populacional_invertida2);
    
     // Exibição da comparação das Cartas

     printf("\nComparação de Cartas (Atributo: População):\n");
     if (populacao > populacao2)
         printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
     else if (populacao2 > populacao)
         printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
     else
         printf("Resultado: Empate!\n");
 

     printf("\nComparação de Cartas (Atributo: Área):\n");
     if (area > area2)
         printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
     else if (area2 > area)
         printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
     else
         printf("Resultado: Empate!\n");
 

     printf("\nComparação de Cartas (Atributo: PIB):\n");
     if (pib > pib2)
         printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
     else if (pib2 > pib)
         printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
     else
         printf("Resultado: Empate!\n");
 

     printf("\nComparação de Cartas (Atributo: Pontos Turísticos):\n");
     if (n_pontos_turisticos > n_pontos_turisticos2)
         printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
     else if (n_pontos_turisticos2 > n_pontos_turisticos)
         printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
     else
         printf("Resultado: Empate!\n");
 

     printf("\nComparação de Cartas (Atributo: Densidade Populacional):\n");
     if (densidade_populacional < densidade_populacional2)
         printf("Resultado: Carta 1 (%s) venceu (menor densidade)!\n", nome_cidade);
     else if (densidade_populacional2 < densidade_populacional)
         printf("Resultado: Carta 2 (%s) venceu (menor densidade)!\n", nome_cidade2);
     else
         printf("Resultado: Empate!\n");
 
 
     printf("\nComparação de Cartas (Atributo: PIB per Capita):\n");
     if (pib_percapita > pib_percapita2)
         printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
     else if (pib_percapita2 > pib_percapita)
         printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
     else
         printf("Resultado: Empate!\n");
 
         
     printf("\nComparação de Cartas (Atributo: Super Poder):\n");
     if (super_Poder > super_Poder2)
         printf("Resultado: Carta 1 (%s) venceu com Super Poder!\n", nome_cidade);
     else if (super_Poder2 > super_Poder)
         printf("Resultado: Carta 2 (%s) venceu com Super Poder!\n", nome_cidade2);
     else
         printf("Resultado: Empate!\n");
    return 0;
    
    }
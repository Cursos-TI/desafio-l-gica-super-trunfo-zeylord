#include <stdio.h>

int main() {
    // Declaração das variáveis da carta 1
    char estado, codigo_carta[4], nome_cidade[20];
    unsigned long int populacao;
    float area, pib;
    int n_pontos_turisticos;
    float densidade_populacional, pib_percapita, densidade_populacional_invertida;
    double super_Poder;

    // Declaração das variáveis da carta 2
    char estado2, codigo_carta2[4], nome_cidade2[20];
    unsigned long int populacao2;
    float area2, pib2;
    int n_pontos_turisticos2;
    float densidade_populacional2, pib_percapita2, densidade_populacional_invertida2;
    double super_Poder2;

    // Entrada de dados para carta 1
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

    // Entrada de dados para carta 2
    printf("\nCadastro da Carta 2:\n");
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

    // Cálculos
    densidade_populacional = populacao / area;
    pib_percapita = pib / populacao;
    densidade_populacional_invertida = 1 / densidade_populacional;
    super_Poder = (double)populacao + area + pib + n_pontos_turisticos + pib_percapita + densidade_populacional_invertida;

    densidade_populacional2 = populacao2 / area2;
    pib_percapita2 = pib2 / populacao2;
    densidade_populacional_invertida2 = 1 / densidade_populacional2;
    super_Poder2 = (double)populacao2 + area2 + pib2 + n_pontos_turisticos2 + pib_percapita2 + densidade_populacional_invertida2;

    // Menu interativo
    int escolha;
    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção (1-5): ");
    scanf("%d", &escolha);

    printf("\nComparando %s (Carta 1) vs %s (Carta 2):\n", nome_cidade, nome_cidade2);

    switch (escolha) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", nome_cidade, populacao);
            printf("%s: %lu habitantes\n", nome_cidade2, populacao2);
            if (populacao > populacao2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
            else if (populacao2 > populacao)
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nome_cidade, area);
            printf("%s: %.2f km²\n", nome_cidade2, area2);
            if (area > area2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
            else if (area2 > area)
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", nome_cidade, pib);
            printf("%s: %.2f bilhões\n", nome_cidade2, pib2);
            if (pib > pib2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
            else if (pib2 > pib)
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nome_cidade, n_pontos_turisticos);
            printf("%s: %d pontos\n", nome_cidade2, n_pontos_turisticos2);
            if (n_pontos_turisticos > n_pontos_turisticos2)
                printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
            else if (n_pontos_turisticos2 > n_pontos_turisticos)
                printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        case 5:
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km²\n", nome_cidade, densidade_populacional);
            printf("%s: %.2f hab/km²\n", nome_cidade2, densidade_populacional2);
            if (densidade_populacional < densidade_populacional2)
                printf("Resultado: Carta 1 (%s) venceu (menor densidade)!\n", nome_cidade);
            else if (densidade_populacional2 < densidade_populacional)
                printf("Resultado: Carta 2 (%s) venceu (menor densidade)!\n", nome_cidade2);
            else
                printf("Resultado: Empate!\n");
            break;
        default:
            printf("Opção inválida! Por favor, escolha um número entre 1 e 5.\n");
    }

    return 0;
}

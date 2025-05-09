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

    // Seleção de dois atributos
    int atributo1, atributo2;
    float valor1_c1 = 0, valor2_c1 = 0, valor1_c2 = 0, valor2_c2 = 0;
    float soma1 = 0, soma2 = 0;

    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite sua opção (1-5): ");
    scanf("%d", &atributo1);

    printf("\nEscolha o segundo atributo para comparar (diferente do primeiro):\n");
    
    do {
        printf("Escolha o segundo atributo para comparar:\n");
        if (atributo1 != 1) printf("1 - População\n");
        if (atributo1 != 2) printf("2 - Área\n");
        if (atributo1 != 3) printf("3 - PIB\n");
        if (atributo1 != 4) printf("4 - Número de Pontos Turísticos\n");
        if (atributo1 != 5) printf("5 - Densidade Demográfica\n");
        
        printf("Digite sua opção (1-5): ");
        scanf("%d", &atributo2);
        
        if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5) {
            printf("Opção inválida ou repetida. Tente novamente.\n");
        }
    } while (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5);


    printf("\nComparando %s (Carta 1) vs %s (Carta 2):\n\n", nome_cidade, nome_cidade2);

    for (int i = 1; i <= 2; i++) {
        int atr = (i == 1) ? atributo1 : atributo2;
        float v1 = 0, v2 = 0;
        char* nome_attr;

        switch (atr) {
            case 1:
                nome_attr = "População";
                v1 = populacao;
                v2 = populacao2;
                break;
            case 2:
                nome_attr = "Área";
                v1 = area;
                v2 = area2;
                break;
            case 3:
                nome_attr = "PIB";
                v1 = pib;
                v2 = pib2;
                break;
            case 4:
                nome_attr = "Pontos Turísticos";
                v1 = n_pontos_turisticos;
                v2 = n_pontos_turisticos2;
                break;
            case 5:
                nome_attr = "Densidade Demográfica";
                v1 = densidade_populacional;
                v2 = densidade_populacional2;
                break;
            default:
                nome_attr = "Desconhecido";
                printf("Erro no atributo!\n");
                return 1;
        }

        printf("Atributo %d: %s\n", i, nome_attr);
        printf("%s: %.2f\n", nome_cidade, v1);
        printf("%s: %.2f\n\n", nome_cidade2, v2);

        // Comparação e soma
        if (atr == 5) { // menor é melhor
            soma1 += (v1 < v2) ? 1 : 0;
            soma2 += (v2 < v1) ? 1 : 0;
        } else {
            soma1 += (v1 > v2) ? 1 : 0;
            soma2 += (v2 > v1) ? 1 : 0;
        }

        if (i == 1) {
            valor1_c1 = v1;
            valor1_c2 = v2;
        } else {
            valor2_c1 = v1;
            valor2_c2 = v2;
        }
    }

    printf("=== RESULTADO FINAL ===\n");
    printf("%s: soma dos atributos = %.2f\n", nome_cidade, valor1_c1 + valor2_c1);
    printf("%s: soma dos atributos = %.2f\n", nome_cidade2, valor1_c2 + valor2_c2);

    if (soma1 > soma2)
        printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade);
    else if (soma2 > soma1)
        printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
    else
        printf("Resultado: Empate!\n");

    return 0;
}

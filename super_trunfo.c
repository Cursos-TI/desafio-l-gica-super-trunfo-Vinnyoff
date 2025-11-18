#include <stdio.h>

int main()
{

    // Definição das variáveis para armazenar as propriedades das cidades

    char estado1;
    char codigo1[4];
    char nome1[50];
    int população1 = 0;
    float area1;
    float pib1;
    int npt1 = 0;
    float densidade1;
    float pib_per_capita1;
    float poder1;

    char estado2;
    char codigo2[4];
    char nome2[50];
    int população2;
    float area2;
    float pib2;
    int npt2;
    float densidade2;
    float pib_per_capita2;
    float poder2;

    int compPop, compArea, compPib, compNpt, compPibPerCapita, compDensidade, compSuperPoder;

    int totalVitorias1 = compArea + compDensidade + compNpt + compPib + compPibPerCapita + compPop + compSuperPoder;
    int totalVitorias2 = 7 - totalVitorias1;
    
        // Apresentação do programa e entrada de dados
    printf("Bem vindo ao Super Trunfo dos Estados Brasileiros!\n\n");
    printf("Ajude-nos a cadastrar as cartas do jogo\n");
    printf("Vamos começar pela primeira carta:\n\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", nome1);
    printf("Digite a inicial do estado: ");
    scanf(" %c", &estado1);
    printf("Digite a população da cidade: ");
    scanf("%d", &população1);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade (em bilhões R$): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &npt1);
    printf("Digite o codigo da carta: (A letra do estado junto com um número de 01 a 04)");
    scanf("%s", codigo1);

    printf("\nAgora vamos cadastrar a segunda carta:\n\n");
    printf("Digite o nome da cidade: ");
    scanf("%s", nome2);
    printf("Digite a inicial do estado: ");
    scanf(" %c", &estado2);
    printf("Digite a população da cidade: ");
    scanf("%d", &população2);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade (em bilhões R$): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &npt2);
    printf("Digite o codigo da carta: (A letra do estado junto com um número de 01 a 04)");
    scanf("%s", codigo2);

        // Cálculo dos atributos derivados para a primeira cidade
    densidade1 = população1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0) /  população1; // Convertendo PIB de bilhões para reais

        // Cálculo dos atributos derivados para a segunda cidade
    densidade2 = população2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0) / população2;

        // Inversão dos valores para cálculo do poder
    float inv_densidade1 = 1.0 / densidade1;
    float inv_densidade2 = 1.0 / densidade2;

        // Cálculo do poder das cartas (exemplo simples somando os atributos)
    poder1 = (float)população1 + area1 + (pib1 * 1000000000.0) + (float)npt1 + pib_per_capita1 + inv_densidade1;
    poder2 = (float)população2 + area2 + (pib2 * 1000000000.0) + (float)npt2 + pib_per_capita2 + inv_densidade2;


        // Exibição dos dados das cidades cadastradas
    printf("\nCartas cadastradas com sucesso!\n");
    printf("Carta 1:\n Estado: %c\n Codigo: %s\n Nome da cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de pontos turísticos: %d\n Densidade populacional: %.2f habitantes/km²\n PIB per capita: %.2f reais\n",
           estado1, codigo1, nome1, população1, area1, pib1, npt1, densidade1, pib_per_capita1);
    printf("Carta 2:\n Estado: %c\n Codigo: %s\n Nome da cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f bilhões de reais\n Número de pontos turísticos: %d\n Densidade populacional: %.2f habitantes/km²\n PIB per capita: %.2f reais\n",
           estado2, codigo2, nome2, população2, area2, pib2, npt2, densidade2, pib_per_capita2);

        // Comparação das cartas
    printf("\nComparando as cartas...\n");

        // População - maior vence
    if (população1 > população2) {
        compPop = 1;
        printf("A carta 1 vence na categoria População.\n");
    } else {
        compPop = 0;
        printf("A carta 2 vence na categoria População.\n");
    }

        // Área - maior vence
    if (area1 > area2) {
        compArea = 1;
        printf("A carta 1 vence na categoria Área.\n");
    } else {
        compArea = 0;
        printf("A carta 2 vence na categoria Área.\n");
    }

        // PIB - maior vence
    if (pib1 > pib2) {
        compPib = 1;
        printf("A carta 1 vence na categoria PIB.\n");
    } else {
        compPib = 0;
        printf("A carta 2 vence na categoria PIB.\n");
    }

        // Número de Pontos Turísticos - maior vence
    if (npt1 > npt2) {
        compNpt = 1;
        printf("A carta 1 vence na categoria Número de Pontos Turísticos.\n");
    } else {
        compNpt = 0;
        printf("A carta 2 vence na categoria Número de Pontos Turísticos.\n");
    }

        // PIB per Capita - maior vence
    if (pib_per_capita1 > pib_per_capita2) {
        compPibPerCapita = 1;
        printf("A carta 1 vence na categoria PIB per Capita.\n");
    } else {
        compPibPerCapita = 0;
        printf("A carta 2 vence na categoria PIB per Capita.\n");
    }

        // Densidade Populacional - menor vence
    if (densidade1 < densidade2) {
        compDensidade = 1;
        printf("A carta 1 vence na categoria Densidade Populacional.\n");
    } else {
        compDensidade = 0;
        printf("A carta 2 vence na categoria Densidade Populacional.\n");
    }

        // Super Poder - maior vence
    if (poder1 > poder2) {  
        compSuperPoder = 1;
        printf("A carta 1 vence na categoria Super Poder.\n");
    } else {
        compSuperPoder = 0;
        printf("A carta 2 vence na categoria Super Poder.\n");
    }

        // Determinação do vencedor geral
    if (totalVitorias1 > totalVitorias2) {
        printf("\nA carta 1 é a vencedora geral com %d vitórias!\n", totalVitorias1);
    } else if (totalVitorias2 > totalVitorias1) {
        printf("\nA carta 2 é a vencedora geral com %d vitórias!\n", totalVitorias2);
    } else {
        printf("\nAs cartas empataram com %d vitórias cada!\n", totalVitorias1);
    }
    
    return 0;
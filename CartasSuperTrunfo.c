#include <stdio.h>

int main() {
    // variaveis
    char estado1 = '\0', estado2 = '\0';
    char codcar1[3] = "", codcar2[3] = "";
    char nomcid1[50] = "", nomcid2[50] = "";
    int  qtdpop1 = 0, qtdpop2 = 0;
    float area1 = 0, area2 = 0;
    float pibcid1 = 0, pibcid2 = 0;
    int numpontu1 = 0, numpontu2 = 0;
    
    // Cadastro das Cartas:
    printf("==========================================\n");
    printf("Cadastros de Cartas - Super Trunfo\n");
    printf("==========================================\n");

    printf("Primeira Carta:\n");    
    printf("Digite o estado: ");
    scanf(" %c", &estado1);
    printf("Digite o Código da Carta: ");
    scanf("%s", codcar1);

    //usado fgest para considerar cidade com duas palavras
    printf("Digite o nome da cidade: ");
    getchar();
    fgets(nomcid1, sizeof(nomcid1), stdin);
    nomcid1[strcspn(nomcid1, "\n")] = '\0';

    printf("Digite a quantidade da população: ");
    scanf("%d", &qtdpop1);
    printf("Digite a área: ");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pibcid1);
    printf("DIgite a quantidade de pontos turísticos: ");
    scanf("%d", &numpontu1);

    printf("\n");
    printf("Segunda Carta:\n");    
    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    printf("Digite o Código da Carta: ");
    scanf("%s", codcar2);

    printf("Digite o nome da cidade: ");
    getchar();
    fgets(nomcid2, sizeof(nomcid2), stdin);
    nomcid2[strcspn(nomcid2, "\n")] = '\0'; 

    printf("Digite a quantidade da população: ");
    scanf("%d", &qtdpop2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pibcid2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &numpontu2);

    // Exibição dos Dados das Cartas:
    printf("\n");
    printf("==========================================\n");
    printf("Cartas Super Trunfo\n");
    printf("==========================================\n");

    //carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codcar1);
    printf("Nome da Cidade: %s\n", nomcid1);
    printf("População: %d\n", qtdpop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pibcid1);
    printf("Número de Pontos Turísticos: %d\n", numpontu1);
    printf("\n");

    //carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codcar2);
    printf("Nome da Cidade: %s\n", nomcid2);
    printf("População: %d\n", qtdpop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pibcid2);
    printf("Número de Pontos Turísticos: %d\n", numpontu2);
    printf("==========================================\n");

    return 0;
}

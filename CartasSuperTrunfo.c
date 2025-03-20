#include <stdio.h>

int main() {
   
    char cidade[15];
    char codigo[5];
    char estado;
    int populacao, pontos_turiticos;
    float area, pib;

    printf("Cadastro de Cartas do Super Trunfo Países\n");

    //Leitura de dados da Carta 1
    printf("CARTA 1\n");

    printf("Insira o Estado:\n");
    scanf("%c", &estado);

    printf("Digite o código:\n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Digite a população da cidade:\n");
    scanf("%f", &populacao);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area);

    printf("Digite o PIB (Produto Interno Bruto):\n");
    scanf("%f", &pib);

    printf("Qual o número de Pontos Turísticos?\n");
    scanf("%f", &pontos_turiticos);

    //Exibição de dados da Carta 1
    printf("CARTA 1\n");
    printf("Estado: %c\n, estado");
    printf("Código: %c\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB (Produto Interno Bruto): %f bilhões de reais\n", pib);
    printf("Quantidade de Pontos Turísticos: %f\n", pontos_turiticos);

     //Leitura de dados da Carta 2
    printf("CARTA 2\n");

    printf("Insira o Estado:\n");
    scanf("%c", &estado);

    printf("Digite o código da cidade:\n");
    scanf("%c", &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade);

    printf("Digite a população da cidade:\n");
    scanf("%f", &populacao);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area);

    printf("Digite o PIB (Produto Interno Bruto):\n");
    scanf("%f", &pib);

    printf("Qual o número de Pontos Turísticos?\n");
    scanf("%f", &pontos_turiticos);

    //Exibição de dados da Carta 2
    printf("CARTA 2\n");
    printf("Estado: %c\n, estado");
    printf("Código: %c\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB (Produto Interno Bruto): %f bilhões de reais\n", pib);
    printf("Quantidade de Pontos Turísticos: %f\n", pontos_turiticos);


    return 0;


}
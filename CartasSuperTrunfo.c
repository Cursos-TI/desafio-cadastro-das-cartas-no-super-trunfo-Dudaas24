#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char opcao;
    char (nome)[20];
    int populacao, pturiticos;
    float area, pib;

    printf("Cadastro de Cartas do Super Trunfo Países\n");

    printf("Digite o código da cidade:\n");
    scanf("%c", &opcao);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &nome);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao);

    printf("Qual o número de Pontos Turísticos?\n");
    scanf("%d", &pturiticos);

    printf("Qual a área da cidade?\n");
    scanf("%.2f", &area);

    printf("Digite o PIB (Produto Interno Bruto):\n");
    scanf("%.4f", &pib);

    printf("Código da cidade: %c\n", opcao);
    printf("Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Quantidade de Pontos Turísticos: %d\n", pturiticos);
    printf("Área: %.2f\n", area);
    printf("PIB (Produto Interno Bruto): %.4f\n", pib);

    return 0;


}
#include <stdio.h>

int main() {

   //VARIÁVEIS DA CARTA 1 (foi necessário ter variáveis separadas para ser feita a comparação das cartas e determinar a carta vencedora).
    char cidade1[15];
    char codigo1[5];
    char estado1;
    int populacao1, pontos_turiticos1;
    float area1, pib1;
    //Aventureiro: cálculo de densidade e PIB per carpita
    float pib_percapita1, densidade1;
    //Mestre: super poder (soma dos atributos numéricos)
    int resultado1 = populacao1 + area1 + pib1 + pontos_turiticos1 + pib_percapita1;

    //Atribuição de operadores matemáticos
    pib_percapita1 = pib1 / populacao1;
    densidade1 = populacao1 / area1;

    //VARIÁVEIS DA CARTA 2
    char cidade2[15];
    char codigo2[5];
    char estado2;
    int populacao2, pontos_turiticos2;
    float area2, pib2;
    //Aventureiro: cálculo de densidade e PIB per carpita
    float pib_percapita2, densidade2;
    //Mestre: super poder (soma dos atributos numéricos)
    int resultado2 = populacao2 + area2 + pib2 + pontos_turiticos2 + pib_percapita2;

    //Atribuição de operadores matemáticos
    pib_percapita2 = pib2 / populacao2;
    densidade2 = populacao2 / area2;
    
    printf("Cadastro de Cartas do Super Trunfo Países\n");

    //Leitura de dados da Carta 1
    printf("CARTA 1\n");

    printf("Insira o Estado:\n");
    scanf("%c", &estado1);

    printf("Digite o código:\n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("Digite a população da cidade:\n");
    scanf("%f", &populacao1);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto):\n");
    scanf("%f", &pib1);

    printf("Qual o número de Pontos Turísticos?\n");
    scanf("%f", &pontos_turiticos1);

    //Exibição de dados da Carta 1
    printf("CARTA 1\n");
    printf("Estado: %c\n, estado1");
    printf("Código: %c\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %f\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB (Produto Interno Bruto): %f bilhões de reais\n", pib1);
    printf("Quantidade de Pontos Turísticos: %f\n", pontos_turiticos1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB per capita: %f\n", pib_percapita1);


     //Leitura de dados da Carta 2
    printf("CARTA 2\n");

    printf("Insira o Estado:\n");
    scanf("%c", &estado2);

    printf("Digite o código da cidade:\n");
    scanf("%c", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Digite a população da cidade:\n");
    scanf("%f", &populacao2);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto):\n");
    scanf("%f", &pib2);

    printf("Qual o número de Pontos Turísticos?\n");
    scanf("%f", &pontos_turiticos2);

    //Exibição de dados da Carta 2
    printf("CARTA 2\n");
    printf("Estado: %c\n, estado2");
    printf("Código: %c\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %f\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB (Produto Interno Bruto): %f bilhões de reais\n", pib2);
    printf("Quantidade de Pontos Turísticos: %f\n", pontos_turiticos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per capita: %f\n", pib_percapita2);


    //COMPARAÇÕES DAS CARTAS
    printf("Comparação de cartas:\n");

    //POPULAÇAO
    if(populacao1 > populacao2)
    {
        printf("População: carta 1 venceu (1)\n"); 
    }
        else
        {
            printf("População: carta 2 venceu (0)\n");
        }

    //AREA
        if(area1 > area2)
    {
        printf("Área: carta 1 venceu (1)\n"); 
    }
        else
        {
            printf("Área: carta 2 venceu (0)\n");
        }

    //PIB        
        if(pib1 > pib2)
    {
        printf("PIB: carta 1 venceu (1)\n"); 
    }
        else
        {
            printf("PIB: carta 2 venceu (0)\n");
        }

    //PONTOS TURÍSTICOS
        if(pontos_turiticos1 > pontos_turiticos2)
    {
        printf("Pontos Turísticos: carta 1 venceu (1)\n"); 
    }
        else
        {
            printf("Pontos Turísticos: carta 2 venceu (0)\n");
        }

    //DENSIDADE POPULACIONAL
    if(densidade1 < densidade2)
    {
        printf("Densidade Populacional: carta 1 venceu (1)\n"); 
    }
        else
        {
            printf("Densidade Populacional: carta 2 venceu (0)\n");
        }    

    //PIB PER CAPITA
    if(pib_percapita1 > pib_percapita2)
    {
        printf("PIB per capita: carta 1 venceu (1)\n"); 
    }
        else
        {
            printf("PIB per capita: carta 2 venceu (0)\n");
        }
    
    //SUPER PODER
    if(resultado1 > resultado2)
    {
        printf("Super Poder: carta 1 venceu (1)\n"); 
    }
        else
        {
            printf("Super Poder: carta 2 venceu (0)\n");
        }

    return 0;

}
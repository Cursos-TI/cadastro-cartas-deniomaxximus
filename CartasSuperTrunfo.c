#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main(){
    //Declarando variáveis
    char estado[20], capital[20], codigoCarta[3];
    int populacao, pontosTuristicos;
    float area, pib;

    /*
          estado[20]: nome do estado
         capital[20]: nome da capital
      codigoCarta[3]: código de dois dígitos de identificação da carta
           populacao: quantidade de habitantes do estado
    pontosTuristicos: quantidade de pontos turísticos do estado
                area: tamanho territorial, em km², doo estado
                 pib: renda per capita do estado
    */
    
    printf("\n -----------SUPER TRUNFO PAÍSES-----------\n");
    printf("Registrando as cartas dos estados\n");

    //Recebendo os dados da carta 1
    printf("\nCARTA 1\n");
    printf("Digite o código referente ao estado (ume letra de A a H e um número de 1 a 4): ");
    scanf("%s",codigoCarta);

    printf("Digite o nome do estado: ");
    scanf("%s",estado);

    printf("Digite a capital do estado: ");
    scanf("%s",capital);

    printf("Digite a população do estado: ");
    scanf("%d",&populacao);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&pontosTuristicos);

    printf("Digite a área do estado: ");
    scanf("%f",&area);

    printf("Digite o PIB do estado: ");
    scanf("%f",&pib);

    //Imprimindo os dados da carta 1
    printf("\nCódigo da carta 1: %s\n",codigoCarta);
    printf("Estado: %s\n",estado);
    printf("Capital: %s\n",capital);
    printf("População: %d habitantes\n",populacao);
    printf("Pontos turísticos: %d pontos\n",pontosTuristicos);
    printf("Área: %.2f km²\n",area);
    printf("PIB (Produto Interno Bruto: R$ %.2f\n",pib);

    //Recebendo os dados da carta 2
    printf("\nCARTA 2\n");
    printf("Digite o código referente ao estado (ume letra de A a H e um número de 1 a 4): ");
    scanf("%s",codigoCarta);

    printf("Digite o nome do estado: ");
    scanf("%s",estado);

    printf("Digite a capital do estado: ");
    scanf("%s",capital);

    printf("Digite a população do estado: ");
    scanf("%d",&populacao);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&pontosTuristicos);

    printf("Digite a área do estado: ");
    scanf("%f",&area);

    printf("Digite o PIB do estado: ");
    scanf("%f",&pib);

    //Imprimindo os dados da carta 2
    printf("\nCódigo da carta 2: %s\n",codigoCarta);
    printf("Estado: %s\n",estado);
    printf("Capital: %s\n",capital);
    printf("População: %d habitantes\n",populacao);
    printf("Pontos turísticos: %d pontos\n",pontosTuristicos);
    printf("Área: %.2f km²\n",area);
    printf("PIB (Produto Interno Bruto: R$ %.2f\n",pib);

    return 0;
}

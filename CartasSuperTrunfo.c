#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.


int main(){
    //Declarando variáveis
    char estado[20], capital[20], codigoCarta[3];
    int populacao, pontosTuristicos;
    float area, pib, perCapita, densidade;
    long double superPoder;


    /*
          estado[20]: nome do estado
         capital[20]: nome da capital
      codigoCarta[3]: código de dois dígitos de identificação da carta
           populacao: quantidade de habitantes do estado
    pontosTuristicos: quantidade de pontos turísticos do estado
                area: tamanho territorial, em km², doo estado
                 pib: produto interno bruto do estado
           perCapita: pib per capta (por pessoa) do estado
           densidade: densidade demográfica do estado
          superPoder: recebe a soma de todos os atributos mensuráveis dos estados
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

    perCapita = pib/populacao; //Cálculo do PIB per capita da carta 1
    densidade = populacao/area; //Cálculo da densidade demográfica da carta 1
    superPoder = populacao+pontosTuristicos+area+pib+perCapita+(1/densidade); //Cálculo do Super Poder da carta 1

    //Imprimindo os dados da carta 1
    printf("\nCódigo da carta 1: %s\n",codigoCarta);
    printf("Estado: %s\n",estado);
    printf("Capital: %s\n",capital);
    printf("População: %d habitantes\n",populacao);
    printf("Pontos turísticos: %d pontos\n",pontosTuristicos);
    printf("Área: %.2f km²\n",area);
    printf("PIB (Produto Interno Bruto): R$ %.2f\n",pib);
    printf("PIB per capita: R$ %.2f\n",perCapita);
    printf("Densidade demográfica: %.2f hab/km²\n",densidade);
    printf("Super Poder: %.2Lf\n",superPoder);



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

    perCapita = pib/populacao; //Cálculo do PIB per capita da carta 2
    densidade = populacao/area; //Cálculo da densidade demográfica da carta 2
    superPoder = populacao+pontosTuristicos+area+pib+perCapita+(1/densidade); //Cálculo do Suepr Poder da carta 2

    //Imprimindo os dados da carta 2
    printf("\nCódigo da carta 2: %s\n",codigoCarta);
    printf("Estado: %s\n",estado);
    printf("Capital: %s\n",capital);
    printf("População: %d habitantes\n",populacao);
    printf("Pontos turísticos: %d pontos\n",pontosTuristicos);
    printf("Área: %.2f km²\n",area);
    printf("PIB (Produto Interno Bruto): R$ %.2f\n",pib);
    printf("PIB per capita: R$ %.2f\n",perCapita);
    printf("Densidade demográfica: %.2f hab/km²\n",densidade);
    printf("Super Poder: %.2Lf\n",superPoder);

    return 0;
}

#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


#include <stdio.h>

int main() {
    int populacao1, populacao2, pontos1, pontos2, carta1, carta2;
    char estado1[20], estado2[20], cod1[20], cod2[20], cidade1[20], cidade2[20];
    float area1, area2, pib1, pib2;
    //deixei um pouco espaçado para tentar ficar mais facil de ler
    printf("Vamos cadastrar a Carta 1\n"); // apenas texto para começar a cadastrar as cartas
    
    printf("Digite a sigla do estado: "); // pedindo para digitar a sigla do estado
    scanf("%s", estado1); // armazenar o nome do estado da primeira carta
    
    printf("Digite o nome da cidade: "); // pedindo para digitar o nome da cidade   
    scanf("%s", cidade1); // armazenando a cidade da 1 carta
    
    printf("Digite o codigo da carta : "); //pedindo o codigo da carta   
    scanf("%s", cod1); // armazenando o cod da carta 1
    
    printf("Digite a populacao da cidade: "); // pedindo a população da cidade   
    scanf("%d", &populacao1); // armazendo a população da cidade da carta 1
    
    printf("Qual é a tamanho da cidade : "); // pedindo o tamanho da cidade   
    scanf("%f", &area1); // armazenando o tamanho da cidade da carta 1
    
    printf("Digite o PIB da cidade : "); // pedindo o pib da cidade   
    scanf("%f", &pib1); // armazenando o pib da cidade 1
    
    printf("Digite o número de pontos turisticos: "); // pedindo o numeros de pontos turisticos da cidade 
    scanf("%d", &pontos1); // armazenando os pontos turisticos da cidade 1
    
    printf("Vamos cadastrar a Carta 2\n"); // apenas texto para começar a cadastrar as cartas
    
    printf("Digite a sigla do estado: "); // pedindo para digitar a sigla do estado
    scanf("%s", estado2); // armazenar o nome do estado da primeira carta
    
    printf("Digite o nome da cidade: "); // pedindo para digitar o nome da cidade   
    scanf("%s", cidade2); // armazenando a cidade da 1 carta
    
    printf("Digite o codigo da carta : "); //pedindo o codigo da carta   
    scanf("%s", cod2); // armazenando o cod da carta 1
    printf("Digite a populacao da cidade: "); // pedindo a população da cidade   
    scanf("%d", &populacao2); // armazendo a população da cidade da carta 1
    
    printf("Qual é a tamanho da cidade : "); // pedindo o tamanho da cidade   
    scanf("%f", &area2); // armazenando o tamanho da cidade da carta 1
    
    printf("Digite o PIB da cidade : "); // pedindo o pib da cidade   
    scanf("%f", &pib2); // armazenando o pib da cidade 1
    
    printf("Digite o número de pontos turisticos: "); // pedindo o numeros de pontos turisticos da cidade 
    scanf("%d", &pontos2); // armazenando os pontos turisticos da cidade 1


    printf("\n\n===A carta 1 é : ===\n"); // falando que irei exibir todas as informações da carta 1
    printf("O Estado é : %s\n", estado1);
    printf("A Cidade é : %s \n", cidade1);
    printf("O codigo da carta é : %s\n", cod1);
    printf("A populção da cidade é : %d\n", populacao1);
    printf("A area da cidade é : %.2f\n", area1);
    printf("O pib da cidade é: %.2f\n", pib1);
    printf("A quantidade de pontos turisticos são : %d\n\n", pontos1);
    
    printf("===A carta 2 é : ===\n"); // falando que irei exibir todas as informações da carta 2
    printf("O Estado é : %s\n", estado2);
    printf("A Cidade é : %s \n", cidade2);
    printf("O codigo da carta é : %s\n", cod2);
    printf("A populção da cidade é : %d\n", populacao2);
    printf("A area da cidade é : %.2f\n", area2);
    printf("O pib da cidade é: %.2f\n", pib2);
    printf("A quantidade de pontos turisticos são : %d\n", pontos2);

    return 0;
}

#include <stdio.h>


int main() {
   
    int codigo;
    char nome[100]; 
    long long populacao; 
    float area;
    double pib; 
    int pontos_turisticos;
    
   
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome); 

    printf("Digite a população da cidade: ");
    scanf("%lld", &populacao);
    
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade (em milhões de reais): ");
    scanf("%lf", &pib);
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);
    
   
    printf("\n--- Dados da Cidade ---\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %lld\n", populacao);
    printf("Área: %.2f km²\n", area); // Exibe com duas casas decimais
    printf("PIB: %.2lf milhões de reais\n", pib); // Exibe com duas casas decimais
    printf("Pontos Turísticos: %d\n", pontos_turisticos);

    return 0;
}

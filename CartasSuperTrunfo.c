#include <stdio.h>
int main() {
    printf("Super Trunfo \n");
   
        char estado1, estado2;
        char codigo1[5], codigo2[5];
        char cidade1[50], cidade2[50];
        int populacao1, populacao2;
        float area1, area2;
        float pib1, pib2;
        int pontos1, pontos2;
        
     printf("Carta 1:\n");
     printf("Digite uma letra de A a H que represente seu estado:\n");
     scanf(" %c", &estado1);
 
     printf("Código com a primeira letra do estado e número de 01 a 04:\n");
     scanf("%[^\n]", codigo1);
 
     printf("Nome da Cidade:\n");
     scanf("%s", cidade1);
 
     printf("População:\n");
     scanf("%d", &populacao1);
 
     printf("Área em km²:\n");
     scanf("%f", &area1);
 
     printf("PIB:\n");
     scanf("%f", &pib1);
 
     printf("Número de Pontos Turistícos:\n");
     scanf("%d", &pontos1);

  
     printf("\nCarta 2:\n");
     printf("Digite uma letra de A a H que represente seu estado:\n");
     scanf(" %c", &estado2);

     printf("Código com a primeira letra do estado e número de 01 a 04:\n");
     scanf("%s", codigo2);

     printf("Nome da Cidade:\n");
     scanf("%[^\n]", cidade2);

     printf("População:\n");
     scanf("%d", &populacao2);

     printf("Área em km²:\n");
     scanf("%f", &area2);

     printf("PIB:\n");
     scanf("%f", &pib2);

     printf("Número de Pontos Turistícos:\n");
     scanf("%d", &pontos2);
       
     
     printf("\nCarta 1:\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", cidade1);
     printf("População: %d\n", populacao1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: %.2f\n", pib1);
     printf("Número de Pontos Turísticos: %d\n", pontos1);

    
     printf("\nCarta 2:\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", pontos2);


   
    return 0;
}

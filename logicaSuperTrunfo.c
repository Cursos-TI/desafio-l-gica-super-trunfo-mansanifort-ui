#include <stdio.h>

int main() {

printf("Vamos cadastrar as cartas do baralho!\n");

//Declaração de variaveis da carta 1.
char codigo1[20];
char estado1[20];
char cidade1[20];
int populacao1;
float area1;
float pib1;
int pturismo1;
float densidade1;
float pib_per_capita1;

//Declaração de variaveis da carta 2.
char codigo2[20];
char estado2[20];
char cidade2[20];
int populacao2;
float area2;
float pib2;
int pturismo2;
float densidade2;
float pib_per_capita2;

float superpoder1;
float superpoder2;


//Mensagem de boas vindas e início do cadastro da carta 1.
printf("Vamos cadastrar a carta 1!\n");

//Inicio do cadastro da carta 1.

printf("Digite o código da carta 1 Ex: A01:\n");
scanf("%s", &codigo1);

printf("Digite o estado da carta 1 Ex: SP:\n");
scanf(" %s", &estado1);

printf("Digite a cidade da carta 1 Ex: São_Paulo:\n");
scanf(" %s", &cidade1);

printf("Digite a população da carta 1 Ex: 123456789:\n");
scanf(" %d", &populacao1 , "Habitantes.");

printf("Digite a área da carta 1 Ex: 123456789.0:\n");
scanf(" %f", &area1 , " Km².");

printf("Digite o PIB da carta 1 Ex: 123456789.0:\n");
scanf(" %f", &pib1 , " R$.");

printf("Digite o número de pontos de turismo da carta 1 Ex: 123456789:\n");
scanf(" %d", &pturismo1 , " Pontos de turismo.");

//Mensagem de início do cadastro da carta 2.
printf("Vamos cadastrar a carta 2!\n");

//Inicio do cadastro da carta 2.

printf("Digite o código da carta 2 Ex: A01:\n");
scanf("%s", &codigo2);

printf("Digite o estado da carta 2 Ex: SP:\n");
scanf(" %s", &estado2);

printf("Digite a cidade da carta 2 Ex: São_Paulo:\n");
scanf(" %s", &cidade2);

printf("Digite a população da carta 2 Ex: 123456789:\n");
scanf(" %d", &populacao2," Habitantes.");

printf("Digite a área da carta 2 Ex: 123456789.0:\n");
scanf(" %f", &area2 , " Km².");

printf("Digite o PIB da carta 2 Ex: 123456789.0:\n");
scanf(" %f", &pib2 , " R$.");

printf("Digite o número de pontos de turismo da carta 2 Ex: 123456789:\n");
scanf(" %d", &pturismo2 , " Pontos de turismo.");

//Cálculo da densidade e do PIB per capita da carta 1.
densidade1 = populacao1 / area1;
pib_per_capita1 = pib1 / populacao1;
//Cálculo da densidade e do PIB per capita da carta 2.
densidade2 = populacao2 / area2;
pib_per_capita2 = pib2 / populacao2;

//Mensagem de fim do cadastro.
printf("Cadastro das cartas concluído!\n\n\n");

//Exibição dos dados cadastrados da carta 1.
printf("Dados de cadastro da carta 1:\n");
printf("Código: %s\n", codigo1);
printf("Estado: %s\n", estado1);
printf("Cidade: %s\n", cidade1);
printf("População: %d Habitantes\n", populacao1);
printf("Área: %.2f Km²\n", area1);
printf("PIB: %.2f R$\n", pib1);
printf("Densidade: %.2f Habitantes/Km²\n", densidade1);
printf("PIB per capita: %.2f R$\n", pib_per_capita1);
printf("Pontos de turismo: %d\n\n", pturismo1);

//Exibição dos dados cadastrados da carta 2.
printf("Dados de cadastro da carta 2:\n");
printf("Código: %s\n", codigo2);
printf("Estado: %s\n", estado2);
printf("Cidade: %s\n", cidade2);
printf("População: %d Habitantes\n", populacao2);
printf("Área: %.2f Km²\n", area2);
printf("PIB: %.2f R$\n", pib2);
printf("Densidade: %.2f Habitantes/Km²\n", densidade2);
printf("PIB per capita: %.2f R$\n", pib_per_capita2);
printf("Pontos de turismo: %d\n\n", pturismo2);

//Cálculo do superpoder das cartas.
superpoder1 = (densidade1 + pib_per_capita1 + pturismo1) / 3;
superpoder2 = (densidade2 + pib_per_capita2 + pturismo2) / 3;
printf("O superpoder da carta 1 é: %.2f\n", superpoder1);
printf("O superpoder da carta 2 é: %.2f\n", superpoder2);

if (superpoder1 > superpoder2) {
    printf("A carta 1 é mais forte !\nA carta 1 é a vencedora do duelo!\n");
} else if (superpoder2 >superpoder1) {
    printf("A carta 2 é mais forte !\nA carta 2 é a vencedora do duelo!\n");
} else {
    printf("As cartas estão empatadas !\nO duelo terminou em empate!\n\n");
}

printf("Fim do game!\n");

return 0;
}
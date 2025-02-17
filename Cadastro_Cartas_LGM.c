#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Oito estados, de /A/ a /H/, e quatro cidades cada

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

  int confirma;
  int sim = 1;
  int nao = 2;

  char Nome_Pais_1[16];

    char Nome_estado_A01[64];
   char Cidade_A01[32];
  int Populacao_A01;
  float Area_A01;
  float PIB_A01;
  int Pontos_Turisticos_A01;  //Não usar acentos nas variáveis

  float densidade_A01 = Populacao_A01 / Area_A01;
  float pibpc_A01 = PIB_A01 / Populacao_A01;


   char Cidade_A02[32];
  int Populacao_A02;
  float Area_A02;
  float PIB_A02;
  int Pontos_Turisticos_A02;

  float densidade_A02 = Populacao_A02 / Area_A02;
  float pibpc_A02 = PIB_A02 / Populacao_A02;


     char Cidade_A03[32];
  int Populacao_A03;
  float Area_A03;
  float PIB_A03;
  int Pontos_Turisticos_A03;

  float densidade_A03 = Populacao_A03 / Area_A03;
  float pibpc_A03 = PIB_A03 / Populacao_A03;


     char Cidade_A04[32];
  int Populacao_A04;
  float Area_A04;
  float PIB_A04;
  int Pontos_Turisticos_A04;

float densidade_A04 = Populacao_A04 / Area_A04;
float pibpc_A04 = PIB_A04 / Populacao_A04;




printf("Olá, bem vindo(a) ao cadastro de cartas do Super Trunfo Países! Digite, sem acentos, caracteres especiais ou espaços, o nome \nde um(1) país para começar a cadastrar seus estados e cidades: \n"); 

 scanf("%s", &Nome_Pais_1);
 printf("O seu país será: %s \n", Nome_Pais_1);

printf("Agora, comece a cadastrar seu ESTADO! Digite, sem acentos, caracteres especiais ou espaços, o nome para o ESTADO A:\n");

 scanf("%s", &Nome_estado_A01);
 fflush(stdin);
 printf("O ESTADO A será: %s \n", Nome_estado_A01);

printf("Para cadastrar as propriedades da primeira cidade desse ESTADO, que terá por código A01, siga as instruções abaixo: \n");

 printf("\nDigite o NOME da CIDADE 1: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 1 \n");
 fflush(stdin);
 scanf("%s", &Cidade_A01);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_A01);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 fflush(stdin);
 scanf("%f", &Area_A01);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12):\n");
 scanf("%f", &PIB_A01);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_A01);


  printf("\n \n \nParabéns, sua primeira carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: A01\n");
   printf("Cidade 1: %s \n", Cidade_A01);
   printf("População: %i \n", Populacao_A01);
   printf("Área: %.2f \n", Area_A01);
   printf("PIB: %.2f \n", PIB_A01);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_A01);
   printf("Densidade Populacional: %.2f \n", densidade_A01);
   printf("PIB Per Capita: %.2f \n", pibpc_A01);


   ///////////////////////////////////////////////////////////////////////////////////////////

   printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
scanf(" %i", &confirma); 

///////////////////////////////////////////////////////////////////////////////////////////

       if (confirma == sim)    

    {  printf("\n\nSiga as instruções abaixo para cadastrar a segunda cidade do ESTADO A: \n");

 printf("\nDigite o NOME da CIDADE 2 - A02: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 2 \n");
 fflush(stdin);
 scanf("%s", &Cidade_A02);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_A02);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_A02);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_A02);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_A02);


  printf("\n \n \nParabéns, sua segunda carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: A01\n");
   printf("Cidade 1: %s \n", Cidade_A01);
   printf("População: %i \n", Populacao_A01);
   printf("Área: %.2f \n", Area_A01);
   printf("PIB: %.2f \n", PIB_A01);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_A01);
   printf("Densidade Populacional: %.2f \n", densidade_A01);
   printf("PIB Per Capita: %.2f \n", pibpc_A01);

   printf("Código da Carta: A02\n");
   printf("Cidade 2: %s \n", Cidade_A02);
   printf("População: %i \n", Populacao_A02);
   printf("Área: %.2f \n", Area_A02);
   printf("PIB: %.2f \n", PIB_A02);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_A02);

   printf("Densidade Populacional: %.2f \n", densidade_A02);
   printf("PIB Per Capita: %.2f \n", pibpc_A02);

    printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
    scanf(" %i", &confirma);
    
    if (confirma == sim)
    {
/////////////////////////////////////////////////////////////////////////////////////////////////////      
      printf("\n\nSiga as instruções abaixo para cadastrar a terceira cidade do ESTADO A: \n");

 printf("\nDigite o NOME da CIDADE 3 - A03: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 3 \n");
 fflush(stdin);
 scanf("%s", &Cidade_A03);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_A03);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_A03);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_A03);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_A03);


  printf("\n \n \nParabéns, sua terceira carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: A01\n");
   printf("Cidade 1: %s \n", Cidade_A01);
   printf("População: %i \n", Populacao_A01);
   printf("Área: %.2f \n", Area_A01);
   printf("PIB: %.3f \n", PIB_A01);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_A01);
   printf("Densidade Populacional: %.2f \n", densidade_A01);
   printf("PIB Per Capita: %.2f \n", pibpc_A01);

   printf("Código da Carta: A02\n");
   printf("Cidade 2: %s \n", Cidade_A02);
   printf("População: %i \n", Populacao_A02);
   printf("Área: %.2f \n", Area_A02);
   printf("PIB: %.3f \n", PIB_A02);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_A02);
   printf("Densidade Populacional: %.2f \n", densidade_A02);
   printf("PIB Per Capita: %.2f \n", pibpc_A02);

   printf("Código da Carta: A03\n");
   printf("Cidade 2: %s \n", Cidade_A03);
   printf("População: %i \n", Populacao_A03);
   printf("Área: %.2f \n", Area_A03);
   printf("PIB: %.3f \n", PIB_A03);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_A03);

   printf("Densidade Populacional: %.2f \n", densidade_A03);
   printf("PIB Per Capita: %.2f \n", pibpc_A03);

    printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
    scanf(" %i", &confirma);
    
        if (confirma == sim)
    {
///////////////////////////////////////////////////////////////////////////////////////////////      
      printf("\n\nSiga as instruções abaixo para cadastrar a quarta cidade do ESTADO A: \n");

 printf("\nDigite o NOME da CIDADE 4: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 4 \n");
 fflush(stdin);
 scanf("%s", &Cidade_A04);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_A04);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_A04);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_A04);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_A04);


  printf("\n \n \nParabéns, sua segunda carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: A01\n");
   printf("Cidade 1: %s \n", Cidade_A01);
   printf("População: %i \n", Populacao_A01);
   printf("Área: %.2f \n", Area_A01);
   printf("PIB: %.3f \n", PIB_A01);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_A01);
   printf("Densidade Populacional: %.2f \n", densidade_A01);
   printf("PIB Per Capita: %.2f \n\n", pibpc_A01);

   printf("Código da Carta: A02\n");
   printf("Cidade 2: %s \n", Cidade_A02);
   printf("População: %i \n", Populacao_A02);
   printf("Área: %.2f \n", Area_A02);
   printf("PIB: %.3f \n", PIB_A02);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_A02);
   printf("Densidade Populacional: %.2f \n", densidade_A02);
   printf("PIB Per Capita: %.2f \n\n", pibpc_A02);

   printf("Código da Carta: A03\n");
   printf("Cidade 2: %s \n", Cidade_A03);
   printf("População: %i \n", Populacao_A03);
   printf("Área: %.2f \n", Area_A03);
   printf("PIB: %.3f \n", PIB_A03);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_A03);
   printf("Densidade Populacional: %.2f \n", densidade_A03);
   printf("PIB Per Capita: %.2f \n\n", pibpc_A03);

      printf("Código da Carta: A04\n");
   printf("Cidade 2: %s \n", Cidade_A04);
   printf("População: %i \n", Populacao_A04);
   printf("Área: %.2f \n", Area_A04);
   printf("PIB: %.3f \n", PIB_A04);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_A04);

   printf("Densidade Populacional: %.2f \n", densidade_A04);
   printf("PIB Per Capita: %.2f \n\n", pibpc_A04);

   
   goto cabofim;
   }
   }

cabofim:

  return 0;
printf("\n \nFim do progama, obrigada por utilizá-lo! \n :^D \n");

}
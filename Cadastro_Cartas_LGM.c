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

   char Cidade_A02[32];
  int Populacao_A02;
  float Area_A02;
  float PIB_A02;
  int Pontos_Turisticos_A02;

     char Cidade_A03[32];
  int Populacao_A03;
  float Area_A03;
  float PIB_A03;
  int Pontos_Turisticos_A03;

     char Cidade_A04[32];
  int Populacao_A04;
  float Area_A04;
  float PIB_A04;
  int Pontos_Turisticos_A04;

    char Nome_estado_B01[64];
   char Cidade_B01[32];
  int Populacao_B01;
  float Area_B01;
  float PIB_B01;
  int Pontos_Turisticos_B01;  

   char Cidade_B02[32];
  int Populacao_B02;
  float Area_B02;
  float PIB_B02;
  int Pontos_Turisticos_B02;

     char Cidade_B03[32];
  int Populacao_B03;
  float Area_B03;
  float PIB_B03;
  int Pontos_Turisticos_B03;

     char Cidade_B04[32];
  int Populacao_B04;
  float Area_B04;
  float PIB_B04;
  int Pontos_Turisticos_B04;

    char Nome_estado_C01[64];
   char Cidade_C01[32];
  int Populacao_C01;
  float Area_C01;
  float PIB_C01;
  int Pontos_Turisticos_C01;  

   char Cidade_C02[32];
  int Populacao_C02;
  float Area_C02;
  float PIB_C02;
  int Pontos_Turisticos_C02;

     char Cidade_C03[32];
  int Populacao_C03;
  float Area_C03;
  float PIB_C03;
  int Pontos_Turisticos_C03;

     char Cidade_C04[32];
  int Populacao_C04;
  float Area_C04;
  float PIB_C04;
  int Pontos_Turisticos_C04;

    char Nome_estado_D01[64];
   char Cidade_D01[32];
  int Populacao_D01;
  float Area_D01;
  float PIB_D01;
  int Pontos_Turisticos_D01;  

   char Cidade_D02[32];
  int Populacao_D02;
  float Area_D02;
  float PIB_D02;
  int Pontos_Turisticos_D02;

     char Cidade_D03[32];
  int Populacao_D03;
  float Area_D03;
  float PIB_D03;
  int Pontos_Turisticos_D03;

     char Cidade_D04[32];
  int Populacao_D04;
  float Area_D04;
  float PIB_D04;
  int Pontos_Turisticos_D04; //usarei metade

/*    char Nome_estado_E01[64];
   char Cidade_E01[32];
  int Populacao_E01;
  float Area_E01;
  float PIB_E01;
  int Pontos_Turisticos_E01;  

   char Cidade_E02[32];
  int Populacao_E02;
  float Area_E02;
  float PIB_E02;
  int Pontos_Turisticos_E02;

     char Cidade_E03[32];
  int Populacao_E03;
  float Area_E03;
  float PIB_E03;
  int Pontos_Turisticos_E03;

     char Cidade_E04[32];
  int Populacao_E04;
  float Area_E04;
  float PIB_E04;
  int Pontos_Turisticos_E04;

    char Nome_estado_F01[64];
   char Cidade_F01[32];
  int Populacao_F01;
  float Area_F01;
  float PIB_F01;
  int Pontos_Turisticos_F01; 

   char Cidade_F02[32];
  int Populacao_F02;
  float Area_F02;
  float PIB_F02;
  int Pontos_Turisticos_F02;

     char Cidade_F03[32];
  int Populacao_F03;
  float Area_F03;
  float PIB_F03;
  int Pontos_Turisticos_F03;

     char Cidade_F04[32];
  int Populacao_F04;
  float Area_F04;
  float PIB_F04;
  int Pontos_Turisticos_F04;

    char Nome_estado_G01[64];
   char Cidade_G01[32];
  int Populacao_G01;
  float Area_G01;
  float PIB_G01;
  int Pontos_Turisticos_G01;  

   char Cidade_G02[32];
  int Populacao_G02;
  float Area_G02;
  float PIB_G02;
  int Pontos_Turisticos_G02;

     char Cidade_G03[32];
  int Populacao_G03;
  float Area_G03;
  float PIB_G03;
  int Pontos_Turisticos_G03;

     char Cidade_G04[32];
  int Populacao_G04;
  float Area_G04;
  float PIB_G04;
  int Pontos_Turisticos_G04;

    char Nome_estado_H01[64];
   char Cidade_H01[32];
  int Populacao_H01;
  float Area_H01;
  float PIB_H01;
  int Pontos_Turisticos_H01; 

   char Cidade_H02[32];
  int Populacao_H02;
  float Area_H02;
  float PIB_H02;
  int Pontos_Turisticos_H02;

     char Cidade_H03[32];
  int Populacao_H03;
  float Area_H03;
  float PIB_H03;
  int Pontos_Turisticos_H03;

     char Cidade_H04[32];
  int Populacao_H04;
  float Area_H04;
  float PIB_H04;
  int Pontos_Turisticos_H04; */

printf("Olá, bem vindo(a) ao cadastro de cartas do Super Trunfo Países! Digite, sem acentos, caracteres especiais ou espaços, o nome \nde um(1) país para começar a cadastrar seus estados e cidades: \n"); 

 scanf("%s", &Nome_Pais_1);
 printf("O seu país será: %s \n", Nome_Pais_1);

printf("Agora, comece a cadastrar seu primeiro ESTADO! Digite, sem acentos, caracteres especiais ou espaços, o nome para o ESTADO A:\n");

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
 scanf("%f", &Area_A01);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
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

///////////////////////////////////////////////////////////////////////////////////////////

   printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
scanf(" %i", &confirma); 

///////////////////////////////////////////////////////////////////////////////////////////

       if (confirma == sim)    

    {  printf("\n\nSiga as instruções abaixo para cadastrar a segunda cidade do ESTADO A: \n");

 printf("\nDigite o NOME da CIDADE 2: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 2 \n");
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

   printf("Código da Carta: A02\n");
   printf("Cidade 2: %s \n", Cidade_A02);
   printf("População: %i \n", Populacao_A02);
   printf("Área: %.2f \n", Area_A02);
   printf("PIB: %.2f \n", PIB_A02);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_A02);

    printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
    scanf(" %i", &confirma);
    
    if (confirma == sim)
    {
/////////////////////////////////////////////////////////////////////////////////////////////////////      
      printf("\n\nSiga as instruções abaixo para cadastrar a terceira cidade do ESTADO A: \n");

 printf("\nDigite o NOME da CIDADE 3: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 3 \n");
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

   printf("Código da Carta: A02\n");
   printf("Cidade 2: %s \n", Cidade_A02);
   printf("População: %i \n", Populacao_A02);
   printf("Área: %.2f \n", Area_A02);
   printf("PIB: %.3f \n", PIB_A02);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_A02);

   printf("Código da Carta: A03\n");
   printf("Cidade 2: %s \n", Cidade_A03);
   printf("População: %i \n", Populacao_A03);
   printf("Área: %.2f \n", Area_A03);
   printf("PIB: %.3f \n", PIB_A03);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_A03);

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
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_A01);

   printf("Código da Carta: A02\n");
   printf("Cidade 2: %s \n", Cidade_A02);
   printf("População: %i \n", Populacao_A02);
   printf("Área: %.2f \n", Area_A02);
   printf("PIB: %.3f \n", PIB_A02);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_A02);

   printf("Código da Carta: A03\n");
   printf("Cidade 2: %s \n", Cidade_A03);
   printf("População: %i \n", Populacao_A03);
   printf("Área: %.2f \n", Area_A03);
   printf("PIB: %.3f \n", PIB_A03);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_A03);

      printf("Código da Carta: A04\n");
   printf("Cidade 2: %s \n", Cidade_A04);
   printf("População: %i \n", Populacao_A04);
   printf("Área: %.2f \n", Area_A04);
   printf("PIB: %.3f \n", PIB_A04);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_A04);

    printf("\nParabén! Você cadastrou as quatro cartas de seu PRIMEIRO ESTADO!\n Deseja cadastrar outro Estado?  ");
    fflush(stdin);
    scanf(" %i", &confirma);

    if (confirma == sim) goto estadodois;

    }

}
   }
    else (confirma == nao);
    goto cabofim;

estadodois:

printf("Muito bem! vamos cadastrar seu SEGUNDO ESTADO! Digite, sem acentos, caracteres especiais ou espaços, o nome para o ESTADO B:\n");

 scanf("%s", &Nome_estado_B01);
 fflush(stdin);
 printf("O ESTADO B será: %s \n", Nome_estado_B01);

printf("Para cadastrar as propriedades da primeira cidade desse ESTADO, que terá por código B01, siga as instruções abaixo: \n");

 printf("\nDigite o NOME da CIDADE 1: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 1 \n");
 fflush(stdin);
 scanf("%s", &Cidade_B01);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_B01);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_B01);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_B01);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_B01);


  printf("\n \n \nParabéns, sua primeira carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: B01\n");
   printf("Cidade 1: %s \n", Cidade_B01);
   printf("População: %i \n", Populacao_B01);
   printf("Área: %.2f \n", Area_B01);
   printf("PIB: %.2f \n", PIB_B01);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_B01);

///////////////////////////////////////////////////////////////////////////////////////////

   printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin); // Isso é para que o ENTER não atrapalhe a leitura
scanf(" %i", &confirma); 

///////////////////////////////////////////////////////////////////////////////////////////

       if (confirma == sim)   //O IF não funcionava porque estava comparando um inteiro com um char

    {  printf("\n\nSiga as instruções abaixo para cadastrar a segunda cidade do ESTADO B: \n");

 printf("\nDigite o NOME da CIDADE 2: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 2 \n");
 fflush(stdin);
 scanf("%s", &Cidade_B02);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_B02);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_B02);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_B02);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_B02);


  printf("\n \n \nParabéns, sua segunda carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: B01\n");
   printf("Cidade 1: %s \n", Cidade_B01);
   printf("População: %i \n", Populacao_B01);
   printf("Área: %.2f \n", Area_B01);
   printf("PIB: %.2f \n", PIB_B01);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_B01);

   printf("Código da Carta: B02\n");
   printf("Cidade 2: %s \n", Cidade_B02);
   printf("População: %i \n", Populacao_B02);
   printf("Área: %.2f \n", Area_B02);
   printf("PIB: %.2f \n", PIB_B02);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_B02);

    printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
    scanf(" %i", &confirma);
    
    if (confirma == sim)
    {
      printf("\n\nSiga as instruções abaixo para cadastrar a terceira cidade do ESTADO B: \n");

 printf("\nDigite o NOME da CIDADE 3: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 3 \n");
 fflush(stdin);
 scanf("%s", &Cidade_B03);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_B03);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_B03);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_B03);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_B03);


  printf("\n \n \nParabéns, sua terceira carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: B01\n");
   printf("Cidade 1: %s \n", Cidade_B01);
   printf("População: %i \n", Populacao_B01);
   printf("Área: %.2f \n", Area_B01);
   printf("PIB: %.2f \n", PIB_B01);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_B01);

   printf("Código da Carta: B02\n");
   printf("Cidade 2: %s \n", Cidade_B02);
   printf("População: %i \n", Populacao_B02);
   printf("Área: %.2f \n", Area_B02);
   printf("PIB: %.2f \n", PIB_B02);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_B02);

   printf("Código da Carta: B03\n");
   printf("Cidade 2: %s \n", Cidade_B03);
   printf("População: %i \n", Populacao_B03);
   printf("Área: %.2f \n", Area_B03);
   printf("PIB: %.2f \n", PIB_B03);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_B03);

    printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
    scanf(" %i", &confirma);
    
        if (confirma == sim)
    {
      printf("\n\nSiga as instruções abaixo para cadastrar a quarta cidade do ESTADO B: \n");

 printf("\nDigite o NOME da CIDADE 4: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 4 \n");
 fflush(stdin);
 scanf("%s", &Cidade_B04);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_B04);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_B04);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_B04);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_B04);


  printf("\n \n \nParabéns, sua quarta carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: B01\n");
   printf("Cidade 1: %s \n", Cidade_B01);
   printf("População: %i \n", Populacao_B01);
   printf("Área: %.2f \n", Area_B01);
   printf("PIB: %.2f \n", PIB_B01);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_B01);

   printf("Código da Carta: B02\n");
   printf("Cidade 2: %s \n", Cidade_B02);
   printf("População: %i \n", Populacao_B02);
   printf("Área: %.2f \n", Area_B02);
   printf("PIB: %.2f \n", PIB_B02);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_B02);

   printf("Código da Carta: B03\n");
   printf("Cidade 2: %s \n", Cidade_B03);
   printf("População: %i \n", Populacao_B03);
   printf("Área: %.2f \n", Area_B03);
   printf("PIB: %.2f \n", PIB_B03);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_B03);

      printf("Código da Carta: B04\n");
   printf("Cidade 2: %s \n", Cidade_B04);
   printf("População: %i \n", Populacao_B04);
   printf("Área: %.2f \n", Area_B04);
   printf("PIB: %.2f \n", PIB_B04);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_B04);

    printf("\nParabén! Você cadastrou as quatro cartas de seu SEGUNDO ESTADO!\n Deseja cadastrar outro Estado?  ");
    fflush(stdin);
    scanf(" %i", &confirma);

    if (confirma == sim) goto estadotreis;
    }
   }
   }
   else (confirma == nao);
   goto cabofim;

estadotreis: printf("Muito bem! vamos cadastrar seu TERCEIRO ESTADO! Digite, sem acentos, caracteres especiais ou espaços, o nome para o ESTADO C:\n");

 scanf("%s", &Nome_estado_C01);
 fflush(stdin);
 printf("O ESTADO C será: %s \n", Nome_estado_C01);

printf("Para cadastrar as propriedades da primeira cidade desse ESTADO, que terá por código C01, siga as instruções abaixo: \n");

 printf("\nDigite o NOME da CIDADE 1: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 1 \n");
 fflush(stdin);
 scanf("%s", &Cidade_C01);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_C01);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_C01);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_C01);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_C01);


  printf("\n \n \nParabéns, sua primeira carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: C01\n");
   printf("Cidade 1: %s \n", Cidade_C01);
   printf("População: %i \n", Populacao_C01);
   printf("Área: %.2f \n", Area_C01);
   printf("PIB: %.2f \n", PIB_C01);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_C01);

///////////////////////////////////////////////////////////////////////////////////////////

   printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
scanf(" %i", &confirma); 

///////////////////////////////////////////////////////////////////////////////////////////

       if (confirma == sim)    

    {  printf("\n\nSiga as instruções abaixo para cadastrar a segunda cidade do ESTADO C: \n");

 printf("\nDigite o NOME da CIDADE 2: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 2 \n");
 fflush(stdin);
 scanf("%s", &Cidade_C02);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_C02);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_C02);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_C02);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_A02);


  printf("\n \n \nParabéns, sua segunda carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: C01\n");
   printf("Cidade 1: %s \n", Cidade_C01);
   printf("População: %i \n", Populacao_C01);
   printf("Área: %.2f \n", Area_C01);
   printf("PIB: %.2f \n", PIB_C01);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_C01);

   printf("Código da Carta: A02\n");
   printf("Cidade 2: %s \n", Cidade_C02);
   printf("População: %i \n", Populacao_C02);
   printf("Área: %.2f \n", Area_C02);
   printf("PIB: %.2f \n", PIB_C02);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_C02);

    printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
    scanf(" %i", &confirma);
    
    if (confirma == sim)
    {
/////////////////////////////////////////////////////////////////////////////////////////////////////      
      printf("\n\nSiga as instruções abaixo para cadastrar a terceira cidade do ESTADO C: \n");

 printf("\nDigite o NOME da CIDADE 3: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 3 \n");
 fflush(stdin);
 scanf("%s", &Cidade_C03);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_C03);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_C03);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_C03);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_C03);


  printf("\n \n \nParabéns, sua terceira carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: C01\n");
   printf("Cidade 1: %s \n", Cidade_C01);
   printf("População: %i \n", Populacao_C01);
   printf("Área: %.2f \n", Area_C01);
   printf("PIB: %.2f \n", PIB_C01);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_C01);

   printf("Código da Carta: C02\n");
   printf("Cidade 2: %s \n", Cidade_C02);
   printf("População: %i \n", Populacao_C02);
   printf("Área: %.2f \n", Area_C02);
   printf("PIB: %.2f \n", PIB_C02);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_C02);

   printf("Código da Carta: C03\n");
   printf("Cidade 2: %s \n", Cidade_C03);
   printf("População: %i \n", Populacao_C03);
   printf("Área: %.2f \n", Area_C03);
   printf("PIB: %.2f \n", PIB_C03);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_C03);

    printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
    scanf(" %i", &confirma);
    
        if (confirma == sim)
    {
///////////////////////////////////////////////////////////////////////////////////////////////      
      printf("\n\nSiga as instruções abaixo para cadastrar a quarta cidade do ESTADO A: \n");

 printf("\nDigite o NOME da CIDADE 4: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 4 \n");
 fflush(stdin);
 scanf("%s", &Cidade_C04);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_C04);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_C04);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_C04);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_C04);


  printf("\n \n \nParabéns, sua segunda carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: C01\n");
   printf("Cidade 1: %s \n", Cidade_C01);
   printf("População: %i \n", Populacao_C01);
   printf("Área: %.2f \n", Area_C01);
   printf("PIB: %.2f \n", PIB_C01);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_C01);

   printf("Código da Carta: C02\n");
   printf("Cidade 2: %s \n", Cidade_C02);
   printf("População: %i \n", Populacao_C02);
   printf("Área: %.2f \n", Area_C02);
   printf("PIB: %.2f \n", PIB_C02);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_C02);

   printf("Código da Carta: C03\n");
   printf("Cidade 2: %s \n", Cidade_C03);
   printf("População: %i \n", Populacao_C03);
   printf("Área: %.2f \n", Area_C03);
   printf("PIB: %.2f \n", PIB_C03);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_C03);

      printf("Código da Carta: C04\n");
   printf("Cidade 2: %s \n", Cidade_C04);
   printf("População: %i \n", Populacao_C04);
   printf("Área: %.2f \n", Area_C04);
   printf("PIB: %.2f \n", PIB_C04);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_C04);

    printf("\nParabén! Você cadastrou as quatro cartas de seu TERCEIRO ESTADO!\n Deseja cadastrar outro Estado?  ");
    fflush(stdin);
    scanf(" %i", &confirma);

    if (confirma == sim) goto estadoquatro;

    }

}
   }
    else (confirma == nao);
    goto cabofim;

estadoquatro:

printf("Muito bem! vamos cadastrar seu QUARTO ESTADO! Digite, sem acentos, caracteres especiais ou espaços, o nome para o ESTADO D:\n");

 scanf("%s", &Nome_estado_D01);
 fflush(stdin);
 printf("O ESTADO D será: %s \n", Nome_estado_D01);

printf("Para cadastrar as propriedades da primeira cidade desse ESTADO, que terá por código D01, siga as instruções abaixo: \n");

 printf("\nDigite o NOME da CIDADE 1: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 1 \n");
 fflush(stdin);
 scanf("%s", &Cidade_D01);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_D01);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_D01);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_D01);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_D01);


  printf("\n \n \nParabéns, sua primeira carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: D01\n");
   printf("Cidade 1: %s \n", Cidade_D01);
   printf("População: %i \n", Populacao_D01);
   printf("Área: %.2f \n", Area_D01);
   printf("PIB: %.2f \n", PIB_D01);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_D01);

///////////////////////////////////////////////////////////////////////////////////////////

   printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin); // Isso é para que o ENTER não atrapalhe a leitura
scanf(" %i", &confirma); 

///////////////////////////////////////////////////////////////////////////////////////////

       if (confirma == sim)   //O IF não funcionava porque estava comparando um inteiro com um char

    {  printf("\n\nSiga as instruções abaixo para cadastrar a segunda cidade do ESTADO D: \n");

 printf("\nDigite o NOME da CIDADE 2: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 2 \n");
 fflush(stdin);
 scanf("%s", &Cidade_D02);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_D02);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_D02);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_D02);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_D02);


  printf("\n \n \nParabéns, sua segunda carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: D01\n");
   printf("Cidade 1: %s \n", Cidade_D01);
   printf("População: %i \n", Populacao_D01);
   printf("Área: %.2f \n", Area_D01);
   printf("PIB: %.2f \n", PIB_D01);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_D01);

   printf("Código da Carta: D02\n");
   printf("Cidade 2: %s \n", Cidade_D02);
   printf("População: %i \n", Populacao_D02);
   printf("Área: %.2f \n", Area_D02);
   printf("PIB: %.2f \n", PIB_D02);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_D02);

    printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
    scanf(" %i", &confirma);
    
    if (confirma == sim)
    {
      printf("\n\nSiga as instruções abaixo para cadastrar a terceira cidade do ESTADO D: \n");

 printf("\nDigite o NOME da CIDADE 3: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 3 \n");
 fflush(stdin);
 scanf("%s", &Cidade_D03);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_D03);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_D03);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_D03);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_D03);


  printf("\n \n \nParabéns, sua terceira carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: D01\n");
   printf("Cidade 1: %s \n", Cidade_D01);
   printf("População: %i \n", Populacao_D01);
   printf("Área: %.2f \n", Area_D01);
   printf("PIB: %.2f \n", PIB_D01);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_D01);

   printf("Código da Carta: D02\n");
   printf("Cidade 2: %s \n", Cidade_D02);
   printf("População: %i \n", Populacao_D02);
   printf("Área: %.2f \n", Area_D02);
   printf("PIB: %.2f \n", PIB_D02);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_D02);

   printf("Código da Carta: D03\n");
   printf("Cidade 2: %s \n", Cidade_D03);
   printf("População: %i \n", Populacao_D03);
   printf("Área: %.2f \n", Area_D03);
   printf("PIB: %.2f \n", PIB_D03);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_D03);

    printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
    scanf(" %i", &confirma);
    
        if (confirma == sim)
    {
      printf("\n\nSiga as instruções abaixo para cadastrar a quarta cidade do ESTADO D: \n");

 printf("\nDigite o NOME da CIDADE 4: \n Digite, sem acentos, caracteres especiais ou espaços, o nome para cidade 4 \n");
 fflush(stdin);
 scanf("%s", &Cidade_D04);
 
 printf("\nDigite o número de POPULAÇÃO dessa cidade:\n");
 scanf("%i", &Populacao_D04);

 printf("\nInforme a ÁREA desta cidade:\n (utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.12): \n");
 scanf("%f", &Area_D04);

 printf("\nDiga-nos o PIB - Produto Interno Bruto - da cidade \n(utilize o ponto /./ no lugar da vírgula /,/ Ex.: 10321.120):\n");
 scanf("%f", &PIB_D04);

 printf("\nInforme o número de PONTOS TURÍSTICOS:\n");
 scanf("%i", &Pontos_Turisticos_D04);


  printf("\n \n \nParabéns, sua quarta carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: D01\n");
   printf("Cidade 1: %s \n", Cidade_D01);
   printf("População: %i \n", Populacao_D01);
   printf("Área: %.2f \n", Area_D01);
   printf("PIB: %.2f \n", PIB_D01);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_D01);

   printf("Código da Carta: D02\n");
   printf("Cidade 2: %s \n", Cidade_D02);
   printf("População: %i \n", Populacao_D02);
   printf("Área: %.2f \n", Area_D02);
   printf("PIB: %.2f \n", PIB_D02);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_D02);

   printf("Código da Carta: D03\n");
   printf("Cidade 2: %s \n", Cidade_D03);
   printf("População: %i \n", Populacao_D03);
   printf("Área: %.2f \n", Area_D03);
   printf("PIB: %.2f \n", PIB_D03);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_D03);

      printf("Código da Carta: D04\n");
   printf("Cidade 2: %s \n", Cidade_D04);
   printf("População: %i \n", Populacao_D04);
   printf("Área: %.2f \n", Area_D04);
   printf("PIB: %.2f \n", PIB_D04);
   printf("Número de Pontos Turísticos: %i \n\n", Pontos_Turisticos_D04);

    printf("\nParabén! Você cadastrou as quatro cartas de seu QUARTO ESTADO!\n  ");
    }
    printf("Esse é o fim, obrigada por ter usado o programa, espero que tenha se divertido \naprendendo sobre as particularidades das cidades cadastradas");
   }
   else (confirma == nao);
   goto cabofim;
   }

cabofim:

  return 0;
printf("\n \nFim do progama, obrigada por utilizá-lo! \n :^D \n");

}
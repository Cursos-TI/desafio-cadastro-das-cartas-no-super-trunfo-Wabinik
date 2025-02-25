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


//Início do cadastro de cartas

printf("Olá, bem vindo(a) ao cadastro de cartas do Super Trunfo Países! Digite, sem acentos, caracteres especiais ou espaços, o nome \nde um(1) país para começar a cadastrar seus estados e cidades: \n"); 

 scanf("%s", &Nome_Pais_1);
 printf("O seu país será: %s \n", Nome_Pais_1);

printf("Agora, comece a cadastrar seu ESTADO! Digite, sem acentos, caracteres especiais ou espaços, o nome para o ESTADO A:\n");

 scanf("%s", &Nome_estado_A01);
 fflush(stdin);
 printf("O ESTADO A será: %s \n", Nome_estado_A01);

//A ideia era fazer mais estados, porém, devido ao curto tempo, ficou apenas um estado com quatro opções de cartas

//Primeira cidade

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

 float densidade_A01 = Populacao_A01 / Area_A01;
 float pibpc_A01 = PIB_A01 / Populacao_A01;


  printf("\n \n \nParabéns, sua primeira carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: A01\n");
   printf("Cidade 1: %s \n", Cidade_A01);
   printf("População: %i \n", Populacao_A01);
   printf("Área: %.2f \n", Area_A01);
   printf("PIB: %.2f \n", PIB_A01);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_A01);
   printf("Densidade Populacional: %.2f \n", densidade_A01);
   printf("PIB Per Capita: %.2f \n", pibpc_A01);


// Confirmação, se cadastrará mais cartas ou não

   printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
scanf(" %i", &confirma); 

/////////////////////////////////////////////////////////////////////////////////////////// Uso do if e else

       if (confirma == sim)    

    {  printf("\n\nSiga as instruções abaixo para cadastrar a segunda cidade do ESTADO A: \n");

//Segunda cidade

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

 
 float densidade_A02 = Populacao_A02 / Area_A02;
 float pibpc_A02 = PIB_A02 / Populacao_A02;


  printf("\n \n \nParabéns, sua segunda carta foi cadastrada com SUCESSO! \n \n");

   printf("Código da Carta: A01\n");
   printf("Cidade 1: %s \n", Cidade_A01);
   printf("População: %i \n", Populacao_A01);
   printf("Área: %.2f \n", Area_A01);
   printf("PIB: %.2f \n", PIB_A01);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_A01);
   printf("Densidade Populacional: %.2f \n", densidade_A01);
   printf("PIB Per Capita: %.2f \n\n", pibpc_A01);

   printf("Código da Carta: A02\n");
   printf("Cidade 2: %s \n", Cidade_A02);
   printf("População: %i \n", Populacao_A02);
   printf("Área: %.2f \n", Area_A02);
   printf("PIB: %.2f \n", PIB_A02);
   printf("Número de Pontos Turísticos: %i \n", Pontos_Turisticos_A02);
   printf("Densidade Populacional: %.2f \n", densidade_A02);
   printf("PIB Per Capita: %.2f \n", pibpc_A02);

   printf("\nAgora que já tem duas cartas, gostaria de fazer a comparação entre elas para saber qual é mais forte?\n  ");
   fflush(stdin);
   scanf(" %i", &confirma);
   
   if (confirma == sim)
    goto hcompara;
   else (confirma == nao);

    printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
    scanf(" %i", &confirma);
    
    if (confirma == sim)
    {
/////////////////////////////////////////////////////////////////////////////////////////////////////      
      printf("\n\nSiga as instruções abaixo para cadastrar a terceira cidade do ESTADO A: \n");

//Terceira cidade

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

 float densidade_A03 = Populacao_A03 / Area_A03;
 float pibpc_A03 = PIB_A03 / Populacao_A03;


  printf("\n \n \nParabéns, sua terceira carta foi cadastrada com SUCESSO! \n \n");

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
   printf("PIB Per Capita: %.2f \n", pibpc_A03);

    printf("\nDeseja cadastrar mais cartas? digite '1' para sim e '2' para não:\n  ");
    fflush(stdin);
    scanf(" %i", &confirma);
    
        if (confirma == sim)
    {
///////////////////////////////////////////////////////////////////////////////////////////////      
      printf("\n\nSiga as instruções abaixo para cadastrar a quarta cidade do ESTADO A: \n");

//Quarta cidade

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

float densidade_A04 = Populacao_A04 / Area_A04;
float pibpc_A04 = PIB_A04 / Populacao_A04;


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


   //Área de comparação entre cartas
hcompara:
//Variáveis
int carta;
int a01 = 1;
int a02 = 2;
int a03 = 3;
int a04 = 4;
int compara;

//criar variável "Poder carta" com o cast
float pod_a01 = (float) Populacao_A01 + Pontos_Turisticos_A01 + densidade_A01 + pibpc_A01;
float pod_a02 = (float) Populacao_A02 + Pontos_Turisticos_A02 + densidade_A02 + pibpc_A02;
float pod_a03 = (float) Populacao_A03 + Pontos_Turisticos_A03 + densidade_A03 + pibpc_A03;
float pod_a04 = (float) Populacao_A04 + Pontos_Turisticos_A04 + densidade_A04 + pibpc_A04;

//Estabelecer cartas para comparar
printf("Vamos comparar as cartas cadastradas! Selecione a primeira carta a ser comparada:\n\n");
printf("1 - A01\n");
printf("2 - A02\n");
printf("3 - A03\n");
printf("4 - A04\n\n\n"); //Perguntar quais cartas deseja comparar

fflush(stdin);
scanf("%i", &carta);


printf("Ótimo! Com qual carta desejas comparar?\n\n");
printf("1 - A01\n");
printf("2 - A02\n");
printf("3 - A03\n");
printf("4 - A04\n\n\n");

fflush(stdin);
scanf("%i\n\n", &compara);


//Comparações com a carta A01
if (carta == 1, compara == 1)
{
   printf("Você selecionou a mesma carta! tente novamente\n\n");
   goto hcompara;
}
if (carta == 1, compara == 2)
{
   if (pod_a01 >= pod_a02)
   {
      printf("A carta A01 tem o valor de %.2f, e a carta A02 %.2f. Portanto, a carta \nmais forte é A01 ", pod_a01, pod_a02);
   }
   if (pod_a01 <= pod_a02)
   {
      printf("A carta A01 tem o valor de %.2f, e a carta A02 %.2f. Portanto, a carta \nmais forte é A02 ", pod_a01, pod_a02);
   }
}

if (carta == 1, compara == 3)
{
   if (pod_a01 >= pod_a03)
   {
      printf("A carta A01 tem o valor de %.f, e a carta A03 %.2f. Portanto, a carta \nmais forte é A01! ", pod_a01, pod_a03);
   }
   if (pod_a01 <= pod_a03)
   {
      printf("A carta A01 tem o valor de %.2f, e a carta A03 %.2f. Portanto, a carta \nmais forte é A03!", pod_a01, pod_a03);
   }
}

if (carta == 1, compara == 4)
{
   if (pod_a01 >= pod_a04)
   {
      printf("A carta A01 tem o valor de %.2f, e a carta A04 %.2f. Portanto, a carta \nmais forte é A01! ", pod_a01, pod_a04);
   }
   if (pod_a01 <= pod_a04)
   {
      printf("A carta A01 tem o valor de %.2f, e a carta A04 %.2f. Portanto, a carta \nmais forte é A04! ", pod_a01, pod_a04);
   }
}

//Comparações com a carta A02
if (carta == 2, compara == 2)
{
   printf("Você selecionou a mesma carta! tente novamente\n\n");
   goto hcompara;
}

if (carta == 2, compara == 1)
{
   if (pod_a02 >= pod_a01)
   {
      printf("A carta A02 tem o valor de %.2f, e a carta A01 %.2f. Portanto, a carta \nmais forte é A02 ", pod_a02, pod_a01);
   }
   if (pod_a02 <= pod_a01)
   {
      printf("A carta A02 tem o valor de %.2f, e a carta A01 %.2f. Portanto, a carta \nmais forte é A01 ", pod_a02, pod_a01);
   }
}

if (carta == 2, compara == 3)
{
   if (pod_a02 >= pod_a03)
   {
      printf("A carta A02 tem o valor de %.2f, e a carta A03 %.2f. Portanto, a carta \nmais forte é A02! ", pod_a02, pod_a03);
   }
   if (pod_a02 <= pod_a03)
   {
      printf("A carta A02 tem o valor de %.2f, e a carta A03 %.2f. Portanto, a carta \nmais forte é A03!", pod_a02, pod_a03);
   }
}

if (carta == 2, compara == 4)
{
   if (pod_a02 >= pod_a04)
   {
      printf("A carta A02 tem o valor de %.2f, e a carta A04 %.2f. Portanto, a carta \nmais forte é A02! ", pod_a02, pod_a04);
   }
   if (pod_a02 <= pod_a04)
   {
      printf("A carta A02 tem o valor de %.2f, e a carta A04 %.2f. Portanto, a carta \nmais forte é A04! ", pod_a02, pod_a04);
   }
}

//Comparações com a carta A03
if (carta == 3, compara == 3)
{
   printf("Você selecionou a mesma carta! tente novamente");
   goto hcompara;
}

if (carta == 3, compara == 1)
{
   if (pod_a03 >= pod_a01)
   {
      printf("A carta A03 tem o valor de %.2f, e a carta A01 %.2f. Portanto, a carta \nmais forte é A03 ", pod_a03, pod_a01);
   }
   if (pod_a03 <= pod_a02)
   {
      printf("A carta A03 tem o valor de %.2f, e a carta A01 %.2f. Portanto, a carta \nmais forte é A01 ", pod_a03, pod_a01);
   }
}

if (carta == 3, compara == 2)
{
   if (pod_a03 >= pod_a02)
   {
      printf("A carta A03 tem o valor de %.2f, e a carta A02 %.2f. Portanto, a carta \nmais forte é A03! ", pod_a03, pod_a02);
   }
   if (pod_a03 <= pod_a02)
   {
      printf("A carta A03 tem o valor de %.2f, e a carta A02 %.2f. Portanto, a carta \nmais forte é A02!", pod_a03, pod_a02);
   }
}

if (carta == 3, compara == 4)
{
   if (pod_a03 >= pod_a04)
   {
      printf("A carta A03 tem o valor de %.2f, e a carta A04 %.2f. Portanto, a carta \nmais forte é A03! ", pod_a03, pod_a04);
   }
   if (pod_a03 <= pod_a04)
   {
      printf("A carta A03 tem o valor de %.2f, e a carta A04 %.2f. Portanto, a carta \nmais forte é A04! ", pod_a03, pod_a04);
   }
}

//Comparações com a carta A04
if (carta == 4, compara == 4)
{
   printf("Você selecionou a mesma carta! tente novamente");
   goto hcompara;
}

if (carta == 4, compara == 1)
{
   if (pod_a04 >= pod_a01)
   {
      printf("A carta A04 tem o valor de %.2f, e a carta A01 %.2f. Portanto, a carta \nmais forte é A04 ", pod_a04, pod_a01);
   }
   if (pod_a04 <= pod_a01)
   {
      printf("A carta A04 tem o valor de %.2f, e a carta A01 %.2f. Portanto, a carta \nmais forte é A01 ", pod_a04, pod_a01);
   }
}

if (carta == 4, compara == 2)
{
   if (pod_a04 >= pod_a02)
   {
      printf("A carta A04 tem o valor de %.2f, e a carta A02 %.2f. Portanto, a carta \nmais forte é A04! ", pod_a04, pod_a03);
   }
   if (pod_a04 <= pod_a02)
   {
      printf("A carta A04 tem o valor de %.2f, e a carta A02 %.2f. Portanto, a carta \nmais forte é A02!", pod_a04, pod_a03);
   }
}

if (carta == 4, compara == 3)
{
   if (pod_a04 >= pod_a03)
   {
      printf("A carta A04 tem o valor de %.2f, e a carta A03 %.2f. Portanto, a carta \nmais forte é A04! ", pod_a04, pod_a03);
   }
   if (pod_a04 <= pod_a03)
   {
      printf("A carta A04 tem o valor de %.2f, e a carta A03 %.2f. Portanto, a carta \nmais forte é A03! ", pod_a04, pod_a03);
   }
}

   
   goto cabofim;
   }
   }



cabofim:

  return 0;
printf("\n \nFim do progama, obrigada por utilizá-lo! \n :^D \n");

}
}
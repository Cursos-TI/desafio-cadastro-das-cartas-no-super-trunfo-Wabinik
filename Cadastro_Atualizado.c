//Versão atualizada do cadastro de cartas.
//Objetivo: Escrever Um código mais limpo e bem estruturado, utilizando os conceitos estudados.

//Parte 1: Nível novato - Base do código com estruturas IF e ELSE.

//Variáveis de 4 cartas

#include <stdio.h> //Tenho dificuldades para lembrar como começar o código

int main() {

 //Cartas de Estados e cidades opcionais - variáveis
 //Primeiro, países
 char paisA, paisB [16];

 //Estados
 char estadoa01, estadoa02, estadob01, estadob02 [36]; //Também parece difícil lembrar como declarar essa variável

 //Cidades - cidade = pais + estado
 char cidadea01, cidadea02, cidadeb01, cidadeb02 [36];

 //Características inteiras das cidades
 int populacaoa01, populacaoa02, populacaob01, populacaob02;
 int ponturia01, ponturia02, ponturib01, ponturib02;

 //Características com vírgula das cidades
 float piba01, piba02, pibb01, pibb02;
 int areaa01, areaa02, areab01, areab02;


//Para decisões 
int sim = 1, nao = 2, resposta;
int opc1 = 1, opc2 = 2, opc3 = 3, opc4 = 4, resposta1, resposta2;

//Pontuação das cartas
int pontocarta1, pontocarta2, pontocarta3, pontocarta4;




 //Trecho de saudações
 printf("\n*+´ Olá! Este é o seu programa de Super-Trunfo com o tema Países! `+* \n\n");
 
 //Início do cadastro de cartas
 printf("Para começar, informe o que se pede para cadastrar sua primeira carta.:\n");




 //Informações da primeira carta: Primaira cidade do primeiro estado do primeiro país
 printf("\nDigite o PAÍS de sua primeira carta:\n");
 fflush(stdin);
 scanf("%s", &paisA);

 printf("\nDigite o ESTADO da sua primeira carta:\n");
 fflush(stdin);
 scanf("%s", &estadoa01);

 printf("\nDigite a CIDADE da sua primeira carta:\n");
 fflush(stdin);
 scanf("%s", &cidadea01);

 printf("\nDigite a AREA em KM (obs.: Usar /./ no lugar de /,/):");
 fflush(stdin);
 scanf("%s", &areaa01);

 printf("\nDigite a POPULAÇÃO:\n");
 fflush(stdin);
 scanf("%s", &populacaoa01);

 printf("\nDigite o número de PONTOS TURÍSTICOS:\n");
 fflush(stdin);
 scanf("%s", &ponturia01);

 printf("\nDigite o PIB - Produto Interno Bruto - (obs.: Usar /./ no lugar de /,/):\n");
 fflush(stdin);
 scanf("%s", &piba01); 


//Cálculo do pib per capta e densidade demográfica
float pibpera01 = piba01 / populacaoa01;
float densidadea01 = populacaoa01 / areaa01;


 //Retorno das informações da primeira carta  */* Será que tem como retornar um bloco de informações específico? */*
 printf("%c - %c\n", paisA, estadoa01);
 printf("%c\n", cidadea01);
 printf("População.: %i\n", populacaoa01);
 printf("Área.: %.2f\n", areaa01);
 printf("Pontos Turísticos.: %i\n", ponturia01);
 printf("PIB.: %.2f\n", piba01);
 printf("Densidade demográfica.: %.2f\n", densidadea01);
 printf("PIB per capita.: %.2f \n\n\n", pibpera01);

 //Inf. outros cadastros
 printf("Parabéns, você cadastrou sua primeira carta! Que tal cadastrar mais uma para compará-las?\n");
 printf("Este programa tem capacidade para o cadastro de DOIS PAÍSES, cada\num com DOIS ESTADOS, e cada estado com UMA CIDADE.\n\n");

 printf("Primeiro cadastre o SEGUNDO ESTADO, depois prossiga cadastrando o SEGUNDO PAÍS e seus dois ESTADOS.\n");
 printf("A partir do segundo cadastro, decidirás se continuarás o cadastro ou irás comparar as cartas. \n");



//Segundo estado do primeiro país
printf("Cadastro do segundo estado de %s", paisA);
printf("\nDigite o ESTADO da sua carta:\n");
fflush(stdin);
scanf("%s", &estadoa02);

printf("\nDigite a CIDADE da sua carta:\n");
fflush(stdin);
scanf("%s", &cidadea02);

printf("\nDigite a AREA em KM (obs.: Usar /./ no lugar de /,/):");
fflush(stdin);
scanf("%s", &areaa02);

printf("\nDigite a POPULAÇÃO:\n");
fflush(stdin);
scanf("%s", &populacaoa02);

printf("\nDigite o número de PONTOS TURÍSTICOS:\n");
fflush(stdin);
scanf("%s", &ponturia02);

printf("\nDigite o PIB - Produto Interno Bruto - (obs.: Usar /./ no lugar de /,/):\n");
fflush(stdin);
scanf("%s", &piba02); 


//Cálculo do pib per capta e densidade demográfica
float pibpera02 = piba02 / populacaoa02;
float densidadea02 = populacaoa02 / areaa02;


//Retorno das informações da primeira carta
printf("%c - %c\n", paisA, estadoa02);
printf("%c\n", cidadea02);
printf("População.: %i\n", populacaoa02);
printf("Área.: %.2f\n", areaa02);
printf("Pontos Turísticos.: %i\n", ponturia02);
printf("PIB.: %.2f\n", piba02);
printf("Densidade demográfica.: %.2f\n", densidadea02);
printf("PIB per capita.: %.2f \n\n\n", pibpera02);

//Pergunta para cadastro ou comparação
printf("Agora já tens cartas para comparar! O que desejas fazer?\n\n");
printf("1 - COMPARAR MINHAS CARTAS\n");
printf("2 - CONTINUAR O CADASTRO\n");
fflush(stdin);
scanf("%i", &resposta);


if (resposta == sim)
{
    goto comparacao;
}
else




//Primeiro estado do segundo país
printf("Cadastro do primeiro estado do segundo país");
printf("\nDigite o PAÍS de sua carta:\n");
 fflush(stdin);
 scanf("%s", &paisB);

 printf("\nDigite o ESTADO da sua carta:\n");
 fflush(stdin);
 scanf("%s", &estadob01);

 printf("\nDigite a CIDADE da sua carta:\n");
 fflush(stdin);
 scanf("%s", &cidadeb01);

 printf("\nDigite a AREA em KM (obs.: Usar /./ no lugar de /,/):");
 fflush(stdin);
 scanf("%s", &areab01);

 printf("\nDigite a POPULAÇÃO:\n");
 fflush(stdin);
 scanf("%s", &populacaob01);

 printf("\nDigite o número de PONTOS TURÍSTICOS:\n");
 fflush(stdin);
 scanf("%s", &ponturib01);

 printf("\nDigite o PIB - Produto Interno Bruto - (obs.: Usar /./ no lugar de /,/):\n");
 fflush(stdin);
 scanf("%s", &pibb01); 


//Cálculo do pib per capta e densidade demográfica
float pibperb01 = pibb01 / populacaob01;
float densidadeb01 = populacaob01 / areab01;


 //Retorno das informações da carta 
 printf("%c - %c\n", paisB, estadob01);
 printf("%c\n", cidadeb01);
 printf("População.: %i\n", populacaob01);
 printf("Área.: %.2f\n", areab01);
 printf("Pontos Turísticos.: %i\n", ponturib01);
 printf("PIB.: %.2f\n", pibb01);
 printf("Densidade demográfica.: %.2f\n", densidadeb01);
 printf("PIB per capita.: %.2f \n\n\n", pibperb01);
  



 //Segundo estado do Segundo país
 printf("Cadastro do segundo estado de %s", paisB);
 printf("\nDigite o ESTADO da sua carta:\n");
 fflush(stdin);
 scanf("%s", &estadob02);

 printf("\nDigite a CIDADE da sua carta:\n");
 fflush(stdin);
 scanf("%s", &cidadeb02);

 printf("\nDigite a AREA em KM (obs.: Usar /./ no lugar de /,/):");
 fflush(stdin);
 scanf("%s", &areab02);

 printf("\nDigite a POPULAÇÃO:\n");
 fflush(stdin);
 scanf("%s", &populacaob02);

 printf("\nDigite o número de PONTOS TURÍSTICOS:\n");
 fflush(stdin);
 scanf("%s", &ponturib02);

 printf("\nDigite o PIB - Produto Interno Bruto - (obs.: Usar /./ no lugar de /,/):\n");
 fflush(stdin);
 scanf("%s", &pibb02); 


//Cálculo do pib per capta e densidade demográfica
float pibperb02 = pibb02 / populacaob02;
float densidadeb02 = populacaob02 / areab02;


 //Retorno das informações da primeira carta 
 printf("%c - %c\n", paisB, estadob02);
 printf("%c\n", cidadeb02);
 printf("População.: %i\n", populacaob02);
 printf("Área.: %.2f\n", areab02);
 printf("Pontos Turísticos.: %i\n", ponturib02);
 printf("PIB.: %.2f\n", pibb02);
 printf("Densidade demográfica.: %.2f\n", densidadeb02);
 printf("PIB per capita.: %.2f \n\n\n", pibperb02);




 comparacao:
//Parte de comparações: Seleção de cartas a serem comparadas.
 printf("Saudações! Este é o seu programa de comparações. Selecione a primeira carta a ser comparada:\n\n");
 printf("1 -- %s - %s", paisA, estadoa01);
 printf("2 -- %s - %s", paisA, estadoa02);
 printf("3 -- %s - %s", paisB, estadob01);
 printf("4 -- %s - %s", paisB, estadob02);
 fflush(stdin);
 scanf("%i", resposta1);

casocartaigual:
 printf("Agora, selecione a segunda carta a ser comparada:\n\n");
 printf("1 -- %s - %s", paisA, estadoa01);
 printf("2 -- %s - %s", paisA, estadoa02);
 printf("3 -- %s - %s", paisB, estadob01);
 printf("4 -- %s - %s", paisB, estadob02);
 fflush(stdin);
 scanf("%i", resposta2);

 if (resposta1 == 1)
 {
    if (resposta2 == 1)
{
 printf("Eita! Você selecionou a mesma carta! Tente novamente, escolha cartas DIFERENTES.");
 goto casocartaigual;
}

    if (resposta2 == 2) 
{
    compara1e2:
    //Comparação de população
if (populacaoa01 > populacaoa02) pontocarta1 += 1;
if (populacaoa01 < populacaoa02) pontocarta2 += 1;
if (populacaoa01 == populacaoa02) pontocarta1 ++  && pontocarta2 ++ ;

   //Comparação de área pontos turísticos e pib
if (areaa01 > areaa02) pontocarta1 += 1;
if (areaa01 < areaa02) pontocarta2 += 1;
if (areaa01 == areaa02) pontocarta1 ++ && pontocarta2 ++;

   //Comparação de pontos turísticos
if (ponturia01 > ponturia02) pontocarta1 += 1;
if (ponturia01 < ponturia02) pontocarta2 += 1;
if (ponturia01 == ponturia02) pontocarta1 ++ && pontocarta2 ++;

   //Comparação de pib
if (piba01 > piba02) pontocarta1 += 1;
if (piba01 < piba02) pontocarta2 += 1;
if (piba01 == piba02) pontocarta1 ++ && pontocarta2 ++;

    //Comparação de densidade demográfica
if (densidadea01 > densidadea02) pontocarta1 -= 1;
if (densidadea01 < densidadea02) pontocarta2 -= 1;
if (densidadea01 == densidadea02) pontocarta1 -- && pontocarta2 --;
   
   //Comparação de pib per capita
if (pibpera01 > pibpera02) pontocarta1 += 1;
if (pibpera01 < pibpera02) pontocarta2 += 1;
if (pibpera01 == pibpera02) pontocarta1 ++ && pontocarta2 ++;

//Resultados:
//Vitória da primeira
if (pontocarta1 > pontocarta2)
{
    printf("A carta de MAIOR VALOR é: %s - %s \n", paisA, estadoa01);
}
//Vitória da segunda
if (pontocarta1 < pontocarta2)
{
    printf("A carta de MAIOR VALOR é: %s - %s \n", paisA, estadoa02);
}
//Empate
if (pontocarta1 == pontocarta2)
{
    printf("Empate! As cartas possuem o mesmo valor.");
}
}
////////////////////////////////////////////////////
if (resposta2 == 3)
{
   compara1e3:
    //Comparação de população
if (populacaoa01 > populacaob01) pontocarta1 += 1;
if (populacaoa01 < populacaob01) pontocarta3 += 1;
if (populacaoa01 == populacaob01) pontocarta1 ++  && pontocarta3 ++ ;

   //Comparação de área pontos turísticos e pib
if (areaa01 > areab01) pontocarta1 += 1;
if (areaa01 < areab01) pontocarta3 += 1;
if (areaa01 == areab01) pontocarta1 ++ && pontocarta3 ++;

   //Comparação de pontos turísticos
if (ponturia01 > ponturib01) pontocarta1 += 1;
if (ponturia01 < ponturib01) pontocarta3 += 1;
if (ponturia01 == ponturib01) pontocarta1 ++ && pontocarta3 ++;

   //Comparação de pib
if (piba01 > pibb01) pontocarta1 += 1;
if (piba01 < pibb01) pontocarta3 += 1;
if (piba01 == pibb01) pontocarta1 ++ && pontocarta3 ++;

    //Comparação de densidade demográfica
if (densidadea01 > densidadeb01) pontocarta1 -= 1;
if (densidadea01 < densidadeb01) pontocarta3 -= 1;
if (densidadea01 == densidadeb01) pontocarta1 -- && pontocarta3 --;
   
   //Comparação de pib per capita
if (pibpera01 > pibperb01) pontocarta1 += 1;
if (pibpera01 < pibperb01) pontocarta3 += 1;
if (pibpera01 == pibperb01) pontocarta1 ++ && pontocarta3 ++;

//Resultados:
//Vitória da primeira
if (pontocarta1 > pontocarta3)
{
    printf("A carta de MAIOR VALOR é: %s - %s \n", paisA, estadoa01);
}
//Vitória da segunda
if (pontocarta1 < pontocarta3)
{
    printf("A carta de MAIOR VALOR é: %s - %s \n", paisB, estadob01);
}
//Empate
if (pontocarta1 == pontocarta3)
{
    printf("Empate! As cartas possuem o mesmo valor.");
}
}
////////////////////////////////////////////////////
if (resposta2 == 4)
{
   compara1e4:
    //Comparação de população
if (populacaoa01 > populacaob02) pontocarta1 += 1;
if (populacaoa01 < populacaob02) pontocarta4 += 1;
if (populacaoa01 == populacaob02) pontocarta1 ++  && pontocarta4 ++ ;

   //Comparação de área pontos turísticos e pib
if (areaa01 > areab02) pontocarta1 += 1;
if (areaa01 < areab02) pontocarta4 += 1;
if (areaa01 == areab02) pontocarta1 ++ && pontocarta4 ++;

   //Comparação de pontos turísticos
if (ponturia01 > ponturib02) pontocarta1 += 1;
if (ponturia01 < ponturib02) pontocarta4 += 1;
if (ponturia01 == ponturib02) pontocarta1 ++ && pontocarta4 ++;

   //Comparação de pib
if (piba01 > pibb02) pontocarta1 += 1;
if (piba01 < pibb02) pontocarta4 += 1;
if (piba01 == pibb02) pontocarta1 ++ && pontocarta4 ++;

    //Comparação de densidade demográfica
if (densidadea01 > densidadeb02) pontocarta1 -= 1;
if (densidadea01 < densidadeb02) pontocarta4 -= 1;
if (densidadea01 == densidadeb02) pontocarta1 -- && pontocarta4 --;
   
   //Comparação de pib per capita
if (pibpera01 > pibperb02) pontocarta1 += 1;
if (pibpera01 < pibperb02) pontocarta4 += 1;
if (pibpera01 == pibperb02) pontocarta1 ++ && pontocarta4 ++;

//Resultados:
//Vitória da primeira
if (pontocarta1 > pontocarta4)
{
    printf("A carta de MAIOR VALOR é: %s - %s \n", paisA, estadoa01);
}
//Vitória da segunda
if (pontocarta1 < pontocarta4)
{
    printf("A carta de MAIOR VALOR é: %s - %s \n", paisB, estadob02);
}
//Empate
if (pontocarta1 == pontocarta4)
{
    printf("Empate! As cartas possuem o mesmo valor.");
}
}
////////////////////////////////////////////////////////////////////////////////////////////////
if (resposta1 == 2)
{
   if (resposta2 == 2)
{
printf("Eita! Você selecionou a mesma carta! Tente novamente, escolha cartas DIFERENTES.");
goto casocartaigual;
}

   if (resposta2 == 1)
{
   goto compara1e2;

////////////////////////////////////////////////////
if (resposta2 == 3)
{
   compara2e3:
   //Comparação de população
if (populacaoa02 > populacaob01) pontocarta2 += 1;
if (populacaoa02 < populacaob01) pontocarta3 += 1;
if (populacaoa02 == populacaob01) pontocarta2 ++  && pontocarta3 ++ ;

  //Comparação de área pontos turísticos e pib
if (areaa02 > areab01) pontocarta2 += 1;
if (areaa02 < areab01) pontocarta3 += 1;
if (areaa02 == areab01) pontocarta2 ++ && pontocarta3 ++;

  //Comparação de pontos turísticos
if (ponturia02 > ponturib01) pontocarta2 += 1;
if (ponturia02 < ponturib01) pontocarta3 += 1;
if (ponturia02 == ponturib01) pontocarta2 ++ && pontocarta3 ++;

  //Comparação de pib
if (piba02 > pibb01) pontocarta2 += 1;
if (piba02 < pibb01) pontocarta3 += 1;
if (piba02 == pibb01) pontocarta2 ++ && pontocarta3 ++;

   //Comparação de densidade demográfica
if (densidadea02 > densidadeb01) pontocarta2 -= 1;
if (densidadea02 < densidadeb01) pontocarta3 -= 1;
if (densidadea02 == densidadeb01) pontocarta2 -- && pontocarta3 --;
  
  //Comparação de pib per capita
if (pibpera02 > pibperb01) pontocarta2 += 1;
if (pibpera02 < pibperb01) pontocarta3 += 1;
if (pibpera02 == pibperb01) pontocarta2 ++ && pontocarta3 ++;

//Resultados:
//Vitória da primeira
if (pontocarta2 > pontocarta3)
{
   printf("A carta de MAIOR VALOR é: %s - %s \n", paisA, estadoa02);
}
//Vitória da segunda
if (pontocarta2 < pontocarta3)
{
   printf("A carta de MAIOR VALOR é: %s - %s \n", paisB, estadob01);
}
//Empate
if (pontocarta2 == pontocarta3)
{
   printf("Empate! As cartas possuem o mesmo valor.");
}
}
////////////////////////////////////////////////////
if (resposta2 == 4)
{
   compara2e4:
   //Comparação de população
if (populacaoa02 > populacaob02) pontocarta2 += 1;
if (populacaoa02 < populacaob02) pontocarta4 += 1;
if (populacaoa02 == populacaob02) pontocarta2 ++  && pontocarta4 ++ ;

  //Comparação de área pontos turísticos e pib
if (areaa02 > areab02) pontocarta2 += 1;
if (areaa02 < areab02) pontocarta4 += 1;
if (areaa02 == areab02) pontocarta2 ++ && pontocarta4 ++;

  //Comparação de pontos turísticos
if (ponturia02 > ponturib02) pontocarta2 += 1;
if (ponturia02 < ponturib02) pontocarta4 += 1;
if (ponturia02 == ponturib02) pontocarta2 ++ && pontocarta4 ++;

  //Comparação de pib
if (piba02 > pibb02) pontocarta2 += 1;
if (piba02 < pibb02) pontocarta4 += 1;
if (piba02 == pibb02) pontocarta2 ++ && pontocarta4 ++;

   //Comparação de densidade demográfica
if (densidadea02 > densidadeb02) pontocarta2 -= 1;
if (densidadea02 < densidadeb02) pontocarta4 -= 1;
if (densidadea02 == densidadeb02) pontocarta2 -- && pontocarta4 --;
  
  //Comparação de pib per capita
if (pibpera02 > pibperb02) pontocarta2 += 1;
if (pibpera02 < pibperb02) pontocarta4 += 1;
if (pibpera02 == pibperb02) pontocarta2 ++ && pontocarta4 ++;

//Resultados:
//Vitória da primeira
if (pontocarta2 > pontocarta4)
{
   printf("A carta de MAIOR VALOR é: %s - %s \n", paisA, estadoa02);
}
//Vitória da segunda
if (pontocarta2 < pontocarta4)
{
   printf("A carta de MAIOR VALOR é: %s - %s \n", paisB, estadob02);
}
//Empate
if (pontocarta2 == pontocarta4)
{
   printf("Empate! As cartas possuem o mesmo valor.");
}
//////////////////////////////////////////////////////////////////////////////////


if (resposta1 == 3)
{
   if (resposta2 == 3)
{
printf("Eita! Você selecionou a mesma carta! Tente novamente, escolha cartas DIFERENTES.");
goto casocartaigual;
}

   if (resposta2 == 1)
{
   goto compara1e3;

////////////////////////////////////////////////////
if (resposta2 == 2) goto compara2e3;

if (resposta2 == 4)
{
   compara3e4:
   //Comparação de população
if (populacaob01 > populacaob02) pontocarta3 += 1;
if (populacaob01 < populacaob02) pontocarta4 += 1;
if (populacaob01 == populacaob02) pontocarta3 ++  && pontocarta4 ++ ;

  //Comparação de área pontos turísticos e pib
  if (areab01 > areab02) pontocarta3 += 1;
  if (areab01 < areab02) pontocarta4 += 1;
  if (areab01 == areab02) pontocarta3 ++ && pontocarta4 ++;
  
    //Comparação de pontos turísticos
  if (ponturib01 > ponturib02) pontocarta3 += 1;
  if (ponturib01 < ponturib02) pontocarta4 += 1;
  if (ponturib01 == ponturib02) pontocarta3 ++ && pontocarta4 ++;
  
    //Comparação de pib
  if (pibb01 > pibb02) pontocarta3 += 1;
  if (pibb01 < pibb02) pontocarta4 += 1;
  if (pibb01 == pibb02) pontocarta3 ++ && pontocarta4 ++;
  
     //Comparação de densidade demográfica
  if (densidadeb01 > densidadeb02) pontocarta3 -= 1;
  if (densidadeb01 < densidadeb02) pontocarta4 -= 1;
  if (densidadeb01 == densidadeb02) pontocarta3 -- && pontocarta4 --;
    
    //Comparação de pib per capita
  if (pibperb01 > pibperb02) pontocarta3 += 1;
  if (pibperb01 < pibperb02) pontocarta4 += 1;
  if (pibperb01 == pibperb02) pontocarta3 ++ && pontocarta4 ++;
  
  //Resultados:
  //Vitória da primeira
  if (pontocarta3 > pontocarta4)
  {
     printf("A carta de MAIOR VALOR é: %s - %s \n", paisB, estadob01);
  }
  //Vitória da segunda
  if (pontocarta3 < pontocarta4)
  {
     printf("A carta de MAIOR VALOR é: %s - %s \n", paisB, estadob02);
  }
  //Empate
  if (pontocarta3 == pontocarta4)
  {
     printf("Empate! As cartas possuem o mesmo valor.");
  }
}

if (resposta1 == 4)
{
   if (resposta2 == 4)
   {
      printf("Eita! Você selecionou a mesma carta! Tente novamente, escolha cartas DIFERENTES.");
   goto casocartaigual;
   }
   if (resposta2 == 1) goto compara1e4;
   if (resposta2 == 2) goto compara2e4;
   if (resposta2 == 3) goto compara3e4;
}

////////////////////////////////////////////////////
}
}}}

}
}


    return 0;
}
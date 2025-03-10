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
int sim = 1, nao = 2;




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

 //Outros cadastros
 printf("Parabéns, você cadastrou sua primeira carta! Que tal cadastrar mais uma para compará-las?\n");
 printf("Este programa tem capacidade para o cadastro de DOIS PAÍSES, cada\num com DOIS ESTADOS, e cada estado com UMA CIDADE.\n\n Selecione O que deseja fazer:");

 printf("1 -  CADASTRAR O SEGUNDO ESTADO DO PAÍS 1");
 printf("3 -  CADASTRAR O PRIMEIRO ESTADO DE OUTRO PAÍS");

 //Estrutura de decisão com o GOTO




//Segundo estado do primeiro país
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



//Primeiro estado do segundo país
printf("\nDigite o PAÍS de sua carta:\n");
 fflush(stdin);
 scanf("%s", &paisA);
//Estrutura if para caso o país seja o mesmo


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
  



    return 0;
}
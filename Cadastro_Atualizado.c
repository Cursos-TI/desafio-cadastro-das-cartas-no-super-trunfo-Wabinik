//Versão atualizada do cadastro de cartas.
//Objetivo: Escrever Um código mais limpo e bem estruturado, utilizando os conceitos estudados.

//Parte 1: Nível novato - Base do código com estruturas IF e ELSE.
//Parte 2: Nível Aventureiro - Criar menu interativo com SWITCH e excluir ANINHAMENTOS. 17/03/2025

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
int menu /*opcmenu1 = 1, opcmenu2 = 2, opcmenu3 = 3, opcmenu4 = 4*/;

//Pontuação das cartas
int pontocarta1, pontocarta2, pontocarta3, pontocarta4, resultado;




 //Trecho de saudações
 printf("\n*+´ Olá! Este é o seu programa de Super-Trunfo com o tema Países! `+* \n\n");
 
 //Início do cadastro de cartas //Menu interativo
 menu:
 printf("Selecione o que desejas fazer.:\n\n");
printf("1 - VER REGRAS\n");
printf("2 - CADASTRAR PAÍS\n");


fflush(stdin);
scanf("%i", &menu);

switch (menu)
{
case 1: //Havia colocado a variável opcmenu1, que tinha valor 1, mas pelo visto, a variável não era necessário.
printf("REGRAS DO JOGO\n\n");
printf("DO CADASTRO:.\n\n");
printf("  Digite o nome de PAÍS, ESTADOS e CIDADES sem espaços, caracteres \nespeciais ou acentos. Exemplo.: São Gonçalo -> SaoGoncalo.\n");
printf("O jogo conta com DOIS PAÍSES, os quais possuem DOIS ESTADOS - cada um com\nUMA CIDADES. É seu dever cadastra-los para jogar.\n\n");
printf("DA COMPARAÇÃO:. \n\n");
printf("  Para comparar cartas, é necessário cadastrar ao menos duas cartas.\nA comparação é feita entre cada atributo individualmente onde.:\n");
printf("1 - Se o atributo de uma carta for maior que o da outra, lhe é\nacrescentado um ponto (+1)\n");
printf("2 - Se os atributos tiverem o mesmo valor, não se acrescenta nada (+0)\n");
printf("São atributos das cartas: ÁREA, POPULAÇÃO, PONTOS TURÍSTICOS, PIB,\nDENSIDADE DEMOGRÁFICA e PIB PER CAPITA\n\n");

goto menu;

case 2:

goto cadastropais;

   break;

default:
//Caso seja digitado uma opção que não existe no menu, aparecerá a seguinte mensagem:
printf("\n\nXXX OPÇÃO INEXISTENTE. POR FAVOR, DIGITE UMA OPÇAO COERENTE XXX\n\n");
goto menu;

   break;
}

cadastropais:
 //cadastro do primeiro país:
 printf("\nDigite o nome de um PAÍS para ser seu primeiro:\n");
 fflush(stdin);
 scanf("%s", &paisA);


//Opções de escolha dos próximos passos
printf("Selecione o que desejas fazer.:\n\n");
printf("1 - VOLTAR AO MENU\n");
printf("2 - CADASTRAR SEGUNDO PAÍS\n");
printf("3 - CADASTRAR PRIMEIRO ESTADO E CIDADE\n");


fflush(stdin);
scanf("%i", &menu);

switch (menu)
{
case 1:
   goto menu;

case 2:
   goto cadastropais2;

case 3: 
   goto cadastroestadoa01;
   
   break;

default:
   break;
}


//Cadastro do primeiro estado e cidade do primeiro país
cadastroestadoa01:
 printf("\nDigite o ESTADO da sua primeira carta:\n");
 fflush(stdin);
 scanf("%s", &estadoa01);

 printf("\nDigite a CIDADE da sua primeira carta:\n");
 fflush(stdin);
 scanf("%s", &cidadea01);

 printf("\nDigite a AREA em KM (obs.: Usar /./ no lugar de /,/):");
 fflush(stdin);
 scanf("%f", &areaa01);

 printf("\nDigite a POPULAÇÃO:\n");
 fflush(stdin);
 scanf("%s", &populacaoa01);

 printf("\nDigite o número de PONTOS TURÍSTICOS:\n");
 fflush(stdin);
 scanf("%i", &ponturia01);

 printf("\nDigite o PIB - Produto Interno Bruto - (obs.: Usar /./ no lugar de /,/):\n");
 fflush(stdin);
 scanf("%f", &piba01); 


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
//Opções de escolha dos próximos passos
opcpaisa01:
printf("Selecione o que desejas fazer.:\n\n");
printf("1 - VOLTAR AO MENU\n");
printf("2 - CADASTRAR SEGUNDO PAÍS\n");
printf("3 - CADASTRAR SEGUNDO ESTADO E CIDADE\n");

fflush(stdin);
scanf("%i", &menu);

switch (menu)
{
case 1:
   goto menu;
   break;

case 2:
   goto cadastropais2;
   
case 3:
   goto cadastroestadoa02;

default:
//Caso seja digitado uma opção que não existe no menu, aparecerá a seguinte mensagem:
printf("\n\nXXX OPÇÃO INEXISTENTE. POR FAVOR, DIGITE UMA OPÇAO COERENTE XXX\n\n");
goto opcpaisa01;
   break;
}


//Segundo estado e cidade do primeiro país
cadastroestadoa02:
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
opcpaisa02:
printf("Selecione o que desejas fazer.:\n\n");
printf("1 - VOLTAR AO MENU\n");
printf("2 - CADASTRAR SEGUNDO PAÍS\n");
printf("3 - COMPARAR CARTAS CADASTRADAS\n");

fflush(stdin);
scanf("%i", &menu);

switch (menu)
{
case 1:
   goto menu;
   break;

case 2:
   goto cadastropais2;
   
case 3:
   goto comparacao;

default:
//Caso seja digitado uma opção que não existe no menu, aparecerá a seguinte mensagem:
printf("\n\nXXX OPÇÃO INEXISTENTE. POR FAVOR, DIGITE UMA OPÇAO COERENTE XXX\n\n");
goto opcpaisa02;
   break;
}





//Cadastro do segundo país
cadastropais2:
printf("\nDigite o PAÍS de sua carta:\n");
 fflush(stdin);
 scanf("%s", &paisB);

 opcpaisb:
printf("Selecione o que desejas fazer.:\n\n");
printf("1 - VOLTAR AO MENU\n");
printf("2 - CADASTRAR PRIMEIRO ESTADO E CIDADE\n");
printf("3 - CADASTRAR PRIMEIRO ESTADO E CIDADE DO PRIMEIRO PAÍS\n");
printf("4 - CADASTRAR SEGUNDO ESTADO E CIDADE DO PRIMEIRO PAÍS\n");


fflush(stdin);
scanf("%i", &menu);

switch (menu)
{
case 1:
   goto menu;
   break;

case 2:
   goto cadastroestadob01;
   
case 3:
   goto cadastroestadoa01;

case 4:
   goto cadastroestadoa02;

default:
//Caso seja digitado uma opção que não existe no menu, aparecerá a seguinte mensagem:
printf("\n\nXXX OPÇÃO INEXISTENTE. POR FAVOR, DIGITE UMA OPÇAO COERENTE XXX\n\n");
goto opcpaisb;
   break;
}


//Cadastro primeiro estado e cidade do país 2
cadastroestadob01:
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
  

 opcestadob01:
 printf("Selecione o que desejas fazer agora.:\n\n");
 printf("1 - VOLTAR AO MENU\n");
 printf("2 - CADASTRAR SEGUNDO ESTADO E CIDADE\n");
 printf("3 - CADASTRAR PRIMEIRO ESTADO E CIDADE DO PRIMEIRO PAÍS\n");
 printf("4 - CADASTRAR SEGUNDO ESTADO E CIDADE DO PRIMEIRO PAÍS\n");
 printf("5 - COMPARAR CARTAS CADASTRADAS\n");
 
 fflush(stdin);
 scanf("%i", &menu);
 
 switch (menu)
 {
 case 1:
    goto menu;
    break;
 
 case 2:
    goto cadastroestadob02;
    
 case 3:
    goto cadastroestadoa01;
 
 case 4:
    goto cadastroestadoa02;
 
 case 5:
    goto comparacao;
 default:
 //Caso seja digitado uma opção que não existe no menu, aparecerá a seguinte mensagem:
 printf("\n\nXXX OPÇÃO INEXISTENTE. POR FAVOR, DIGITE UMA OPÇAO COERENTE XXX\n\n");
 goto opcestadob01;
    break;
 }


 //Segundo estado e cidade do segundo país
 cadastroestadob02:
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


 opcestadob02:
 printf("Selecione o que desejas fazer agora.:\n\n");
 printf("1 - VOLTAR AO MENU\n");
 printf("2 - CADASTRAR PRIMEIRO ESTADO E CIDADE DO PRIMEIRO PAÍS\n");
 printf("3 - CADASTRAR SEGUNDO ESTADO E CIDADE DO PRIMEIRO PAÍS\n");
 printf("4 - COMPARAR CARTAS CADASTRADAS\n");
 
 fflush(stdin);
 scanf("%i", &menu);
 
 switch (menu)
 {
 case 1:
    goto menu;
    break;
 
 case 2:
    goto cadastroestadoa01;
 
 case 3:
    goto cadastroestadoa02;
 
 case 4:
    goto comparacao;

 default:
 //Caso seja digitado uma opção que não existe no menu, aparecerá a seguinte mensagem:
 printf("\n\nXXX OPÇÃO INEXISTENTE. POR FAVOR, DIGITE UMA OPÇAO COERENTE XXX\n\n");
 goto opcestadob02;
    break;
 }



 comparacao:
//Parte de comparações: Seleção de cartas a serem comparadas.
 printf("Saudações! Este é o seu programa de comparações. Selecione a primeira carta a ser comparada:\n\n");
 printf("1 -- %s - %s", paisA, estadoa01);
 printf("2 -- %s - %s", paisA, estadoa02);
 printf("3 -- %s - %s", paisB, estadob01);
 printf("4 -- %s - %s", paisB, estadob02);
 fflush(stdin);
 scanf("%i", &resposta1);

 //segunda seleção com goto caso se selecione a mesma carta.
casocartaigual:
 printf("Agora, selecione a segunda carta a ser comparada:\n\n");
 printf("1 -- %s - %s", paisA, estadoa01);
 printf("2 -- %s - %s", paisA, estadoa02);
 printf("3 -- %s - %s", paisB, estadob01);
 printf("4 -- %s - %s", paisB, estadob02);
 fflush(stdin);
 scanf("%i", &resposta2);

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
    pontocarta1 = 0; // Zerar o valor das cartas para que não corra o risco de receber os valores dde comparações passadas.
    pontocarta2 = 0;
    //Comparação de população // mudar para a estrutura de comparação simples
//Aqui seria o que? "populaçãoa01 > populaçaoa02 ?  pontocarta1 += 1 : pontocarta2 += 1". Se os atributos forem iguais, nada se acrescenta.
if (populacaoa01 > populacaoa02) pontocarta1 += 1;
if (populacaoa01 < populacaoa02) pontocarta2 += 1;
else;
   //Comparação de área pontos turísticos e pib
if (areaa01 > areaa02) pontocarta1 += 1;
if (areaa01 < areaa02) pontocarta2 += 1;
else;
   //Comparação de pontos turísticos
if (ponturia01 > ponturia02) pontocarta1 += 1;
if (ponturia01 < ponturia02) pontocarta2 += 1;
else;
   //Comparação de pib
if (piba01 > piba02) pontocarta1 += 1;
if (piba01 < piba02) pontocarta2 += 1;
else;
    //Comparação de densidade demográfica
if (densidadea01 > densidadea02) pontocarta1 -= 1;
if (densidadea01 < densidadea02) pontocarta2 -= 1;
else;
   //Comparação de pib per capita
if (pibpera01 > pibpera02) pontocarta1 += 1;
if (pibpera01 < pibpera02) pontocarta2 += 1;
else;
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
   pontocarta1 = 0; // Zerar o valor das cartas para que não corra o risco de receber os valores dde comparações passadas.
   pontocarta3 = 0;
    //Comparação de população
if (populacaoa01 > populacaob01) pontocarta1 += 1;
if (populacaoa01 < populacaob01) pontocarta3 += 1;
else;
   //Comparação de área pontos turísticos e pib
if (areaa01 > areab01) pontocarta1 += 1;
if (areaa01 < areab01) pontocarta3 += 1;
else;
   //Comparação de pontos turísticos
if (ponturia01 > ponturib01) pontocarta1 += 1;
if (ponturia01 < ponturib01) pontocarta3 += 1;
else;
   //Comparação de pib
if (piba01 > pibb01) pontocarta1 += 1;
if (piba01 < pibb01) pontocarta3 += 1;
else;
    //Comparação de densidade demográfica
if (densidadea01 > densidadeb01) pontocarta1 -= 1;
if (densidadea01 < densidadeb01) pontocarta3 -= 1;
else;
   //Comparação de pib per capita
if (pibpera01 > pibperb01) pontocarta1 += 1;
if (pibpera01 < pibperb01) pontocarta3 += 1;
else;
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
else;
   //Comparação de área pontos turísticos e pib
if (areaa01 > areab02) pontocarta1 += 1;
if (areaa01 < areab02) pontocarta4 += 1;
else;
   //Comparação de pontos turísticos
if (ponturia01 > ponturib02) pontocarta1 += 1;
if (ponturia01 < ponturib02) pontocarta4 += 1;
else;
   //Comparação de pib
if (piba01 > pibb02) pontocarta1 += 1;
if (piba01 < pibb02) pontocarta4 += 1;
else;
    //Comparação de densidade demográfica
if (densidadea01 > densidadeb02) pontocarta1 -= 1;
if (densidadea01 < densidadeb02) pontocarta4 -= 1;
else;
   //Comparação de pib per capita
if (pibpera01 > pibperb02) pontocarta1 += 1;
if (pibpera01 < pibperb02) pontocarta4 += 1;
else;
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
else;

  //Comparação de área pontos turísticos e pib
if (areaa02 > areab01) pontocarta2 += 1;
if (areaa02 < areab01) pontocarta3 += 1;
else;

  //Comparação de pontos turísticos
if (ponturia02 > ponturib01) pontocarta2 += 1;
if (ponturia02 < ponturib01) pontocarta3 += 1;
else;

  //Comparação de pib
if (piba02 > pibb01) pontocarta2 += 1;
if (piba02 < pibb01) pontocarta3 += 1;
else;

   //Comparação de densidade demográfica
if (densidadea02 > densidadeb01) pontocarta2 -= 1;
if (densidadea02 < densidadeb01) pontocarta3 -= 1;
else;
  
  //Comparação de pib per capita
if (pibpera02 > pibperb01) pontocarta2 += 1;
if (pibpera02 < pibperb01) pontocarta3 += 1;
else;

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
else
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
else;
  //Comparação de área pontos turísticos e pib
if (areaa02 > areab02) pontocarta2 += 1;
if (areaa02 < areab02) pontocarta4 += 1;
else;
  //Comparação de pontos turísticos
if (ponturia02 > ponturib02) pontocarta2 += 1;
if (ponturia02 < ponturib02) pontocarta4 += 1;
else;
  //Comparação de pib
if (piba02 > pibb02) pontocarta2 += 1;
if (piba02 < pibb02) pontocarta4 += 1;
else;
   //Comparação de densidade demográfica
if (densidadea02 > densidadeb02) pontocarta2 -= 1;
if (densidadea02 < densidadeb02) pontocarta4 -= 1;
else;  
  //Comparação de pib per capita
if (pibpera02 > pibperb02) pontocarta2 += 1;
if (pibpera02 < pibperb02) pontocarta4 += 1;
else;
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
else;
  //Comparação de área pontos turísticos e pib
  if (areab01 > areab02) pontocarta3 += 1;
  if (areab01 < areab02) pontocarta4 += 1;
else;  
    //Comparação de pontos turísticos
  if (ponturib01 > ponturib02) pontocarta3 += 1;
  if (ponturib01 < ponturib02) pontocarta4 += 1;
else;  
    //Comparação de pib
  if (pibb01 > pibb02) pontocarta3 += 1;
  if (pibb01 < pibb02) pontocarta4 += 1;
else;  
     //Comparação de densidade demográfica
  if (densidadeb01 > densidadeb02) pontocarta3 -= 1;
  if (densidadeb01 < densidadeb02) pontocarta4 -= 1;
else;    
    //Comparação de pib per capita
  if (pibperb01 > pibperb02) pontocarta3 += 1;
  if (pibperb01 < pibperb02) pontocarta4 += 1;
else;  
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
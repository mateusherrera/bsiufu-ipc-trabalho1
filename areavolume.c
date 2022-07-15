/**
* @file trabalho1_areavolume.c
* @brief O programa cálculará área ou volume de determinadas formas geométrica.
*          O usuário escolherá, primeiro, entre: 1 - Cálculo de área; 2 - Cálculo de volume; 3 - Sair(esta fechará o programa).
*          Caso o usuário tenha escolhido a opção 1 ou a opção 2, escolherá a forma geométrica desejada logo em seguida, digitará
*          as medidas da forma, que serão solicitadas, adequadamente, ao usuário, e por fim o resultado será impresso na tela.
*          Por ultimo o usuário escolherá entre: 1 - Repetir o cálculo com novos valore; 2 - Retornar à seleção de formas.
* 
* Serão usadas 24 funções, entre elas: 1 função que lerá e validará os valores de medidas digitadas pelo usuário; 17 funções que, através do 
* "leiaDados", lerão as medidas necessárias para o cálculo e calcularão as áreas ou os volumes (9 funções para área: Padrão: "areaNome_da_forma";
* 8 funções para volumes: Padrão:"volumeNome_da_forma") de todas as formas (uma função para cada forma) dispóniveis no programa; 5 funções para 
* menus, sendo 4 para imprimi-los e ler as escolhas do usuário e encaminhá-las para o cálculo da forma solicitada (funções: "menu_1", "menu_2", 
* "menu_3", "menu_4") e uma função menu (função:"menu") para conectar e organizar os 3 menus (no caso do menu_4, esse será chamado pelas funções
* menu_2 e menu_3), que dependendo do retorno de cada menu dará inicio ao que for necessário ou finalizará o programa; A última função é a "main",
* que somente iniciará a função "menu".
* 
* @author Euller Henrique Bandeira Oliveira
* @author Mateus Herrera Gobetti Borges
* @date 03/11/2018
* @bugs Nenhum conhecido.
*/

#include <stdio.h>
#include <stdlib.h>
#define OPCAO_MIN 1 //opção mínima para menu
#define OPCAO_MAX_1 3 //opção máxima para menu_1
#define OPCAO_MAX_2 10 //opção máxima para menu_2
#define OPCAO_MAX_3 9 //opção máxima para menu_3
#define OPCAO_MAX_4 2 //opção máxima para menu_4
#define M_PI 3.14159265358979323846 //valor de PI

/**
* @brief Lerá e validará os valores das medidas digitadas
* 
* @param x medida que será digitada
* 
* @return x, medida lida e validada
*/

double leiaDados(){
  
  double x = 0.0; //variável para guardar valor de medidas de formas
  
  scanf("%lf", &x); //ler opção
  getchar(); //remover '\n'
    
  while(x <= 0.0){ //verificar validade do valor digitado
  
    printf("Valor inválido!!\n"); //imprimir mensagem
    printf("Digite um valor válido: "); //imprimir mensagem
    scanf("%lf", &x); //ler opção
    getchar(); //remover '\n'
  } //while
    
  return x; //retorna valor digitado
} //leiaDados

/**
* @brief Esta função calcula a área de um triângulo por meio de dois dados que são inseridos pelo usuário: o valor da base do
*        triângulo e o valor da altura do triâgulo. Tais dados são lidos por meio da função leiaDados(), que além de ler,
*        valida ou invalida os valores digitados pelo usuário, caso os valores lidos sejam válidos, o cálculo da área será realizado 
*        e impresso na tela.
* 
* @param base base do triâgulo
* @param altura altura do triâgulo
* @param area valor da área que será cálculada
*/

void areaTriangulo(void){ //triângulo
  
  double base = 0.0; //valor da base
  double altura = 0.0; //valor da altura
  double area = 0.0; //valor da área
  
  system("clear"); //limpar tela
  
  printf("\t=====================\n"); //imprimir título
  printf("\t  Área do Triângulo\n"); //imprimir título
  printf("\t=====================\n"); //imprimir título
  
  printf("\nDigite o valor da base: "); //imprimir mensagem
  base = leiaDados(); //ler valor da base
  printf("\nDigite o valor da altura: "); //imprimir mensagem
  altura = leiaDados(); //ler valor da altura
  
  area = (base * altura) / 2.0; //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area); //imprimir resultado
  
  return; //não retorna valor
} //areaTriangulo

/**
* @brief Esta função calcula a área de um paralelogramo por meio de dois dados que são inseridos pelo usuário: o valor da base do paralelogramo
*        e o valor da altura do paralelogramo. Tais dados são lidos por meio da função leiaDados(), que além de ler, valida ou invalida os valores
*        digitados pelo usuário, caso os valores lidos sejam válidos, o cálculo da área será realizado e impresso na tela.
* 
* @param base base do paralelogramo
* @param altura altura do paralelogramo
* @param area valor da área que será cálculada
*/

void areaParalelogramo(void){ //paralelogramo
  
  double base = 0.0; //valor da base
  double altura = 0.0; //valor da altura
  double area = 0.0; //valor da área
  
  system("clear"); //limpar tela
  
  printf("\t=========================\n"); //imprimir título
  printf("\t  Área do Paralelogramo\n"); //imprimir título
  printf("\t=========================\n"); //imprimir título
  
  printf("\nDigite o valor da base: "); //imprimir mensagem
  base = leiaDados(); //ler valor da base
  printf("\nDigite o valor da altura: "); //imprimir mensagem
  altura = leiaDados(); //ler valor da altura
  
  area = base * altura; //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area); //imprimir resultado

  return; //não retorna valor
} //areaParalelogramo

/**
* @brief Esta função calcula a área de um losango por meio de dois dados que são inseridos pelo usuário: o valor da maior diagonal do losango
*        e o valor da menor diagonal do losango. Tais dados são lidos por meio da função leiaDados(), que além de ler, valida ou invalida
*        os valores digitados pelo usuário, caso os valores lidos sejam válidos, o cálculo da área será realizado e impresso na tela.
* 
* @param diagonal_a diagonal do losango
* @param diagonal_b outra diagonal do losango
* @param area valor da área que será cálculada
*/

void areaLosango(void){ //losango
  
  double diagonal_a = 0.0; //valor da diagonal_a
  double diagonal_b = 0.0; //valor da diagonal_b
  double area = 0.0; //valor da área
  
  system("clear"); //limpar tela
  
  printf("\t===================\n"); //imprimir título
  printf("\t  Área do Losango\n"); //imprimir título
  printf("\t===================\n"); //imprimir título
  
  printf("\nDigite o valor de uma diagonal: "); //imprimir mensagem
  diagonal_a = leiaDados(); //ler valor da diagonal_a
  printf("\nDigite o valor da outra diagonal: "); //imprimir mensagem
  diagonal_b = leiaDados(); //ler valor da diagonal_b
  
  area = (diagonal_a * diagonal_b) / 2.0; //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area); //imprimir resultado

  return; //não retorna valor
} //areaLosango

/**
* @brief Esta função calcula a área de um quadrado por meio de um dado que é inserido pelo usuário: o valor do lado do quadrado.
*        Tal dado é lido por meio da função leiaDados(), que além de ler, valida ou invalida o valor digitado pelo usuário, caso o valor
*        lido seja válido, o cálculo da área será realizado e impresso na tela.
* 
* @param lado lado do quadrado
* @param area valor da área que será cálculada
*/

void areaQuadrado(void){ //quadrado
  
  double lado = 0.0; //valor do lado
  double area = 0.0; //valor da area
  
  system("clear"); //limpar tela
  
  printf("\t====================\n"); //imprimir título
  printf("\t  Área do Quadrado\n"); //imprimir título
  printf("\t====================\n"); //imprimir título
  
  printf("\nDigite o valor do lado: "); //imprimir mensagem
  lado = leiaDados(); //ler valor do lado
  
  area = lado * lado; //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area); //imprimir resultado
  
  return; //não retorna valor
} //areaQuadrado

/**
* @brief Esta função calcula a área de um retângulo por meio de dois dados que são inseridos pelo usuário: o valor da base do retângulo
*        e o valor da altura do retângulo. Tais dados são lidos por meio da função leiaDados(), que além de ler, valida ou invalida os valores
*        digitados pelo usuário, caso os valores lidos sejam válidos, o cálculo da área será realizado e impresso na tela.
* 
* @param base base do retângulo
* @param altura altura do retângulo
* @param area valor da área que será cálculada
*/

void areaRetangulo(void){ //retângulo
  
  double base = 0.0; //valor da base
  double altura = 0.0; //valor da altura
  double area = 0.0; //valor da área
  
  system("clear"); //limpar tela
  
  printf("\t=====================\n"); //imprimir título
  printf("\t  Área do Retângulo\n"); //imprimir título
  printf("\t=====================\n"); //imprimir título
  
  printf("\nDigite o valor da base: "); //imprimir mensagem
  base = leiaDados(); //ler valor da base
  printf("\nDigite o valor da altura: "); //imprimir mensagem
  altura = leiaDados(); //ler valor da altura
  
  area = base * altura; //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area); //imprimir resultado
  
  return; //não retorna valor
} //areaRetangulo

/**
* @brief Esta função calcula a área de um círculo por meio de um dado que é inserido pelo usuário (o valor do raio do círculo)
*        e da constante M_PI definida no começo deste programa. O dado é lido por meio da função leiaDados(), que além de ler, valida
*        ou invalida o valor digitado pelo usuário, caso o valor lido seja válido, o cálculo da área será realizado e impresso na tela.
* 
* @param raio raio do círculo
* @param area valor da área que será cálculada
* 
* @constant M_PI valor de pi
*/

void areaCirculo(void){ //círculo
  
  double raio = 0.0; //valor do raio
  double area = 0.0; //valor da área
  
  system("clear"); //limpar tela
  
  printf("\t===================\n"); //imprimir título
  printf("\t  Área do Círculo\n"); //imprimir título
  printf("\t===================\n"); //imprimir título
  
  printf("\nDigite o valor do raio: "); //imprimir mensagem
  raio = leiaDados(); //ler valor do raio
  
  area = M_PI * (raio * raio); //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area); //imprimir resultado
  
  return; //não retorna valor
} //areaCirculo

/**
* @brief Esta função calcula a área de um setor circular por meio de dois dados que são inseridos pelo usuário: o valor do raio do setor circular
*        e o valor do ângulo do setor circular. Tais dados são lidos por meio da função leiaDados(), que além de ler, valida ou invalida os valores
*        digitados pelo usuário, caso os valores sejam válidos, o cálculo da área será realizado e impresso na tela.
* 
* @param raio raio do círculo
* @param angulo ângulo do setor circular
* @param area valor da área que será cálculada
*/

void areaSetorcircular(void){ //setor circular
  
  double raio = 0.0; //valor do raio
  double angulo = 0.0; //valor do ângulo
  double area = 0.0; //valor da área
  
  system("clear"); //limpar tela
  
  printf("\t==========================\n"); //imprimir título
  printf("\t  Área do Setor Circular\n"); //imprimir título
  printf("\t==========================\n"); //imprimir título
  
  printf("\nDigite o valor do raio: "); //imprimir mensagem
  raio = leiaDados(); //ler valor do raio
  printf("\nDigite o valor do ângulo, em radianos: "); //imprimir mensagem
  angulo = leiaDados(); //ler valor do ângulo
  
  area = ((raio * raio) * angulo) / 2.0; //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area); //imprimir resultado

  return; //não retorna valor
} //areaSetorcircular

/**
* @brief Esta função calcula a área de uma coroa circular por meio de dois dados que são inseridos pelo usuário: o valor do raio do cículo maior (raio maior)
*        e o valor do raio do círculo menor (raio menor). Tais dados são lidos por meio da função leiaDados(), que além de ler, valida ou invalida os valores 
*        digitados pelo usuário. Nesta função uma nova condição para o valor ser válido é inserida, ou seja, o raio maior deve ser maior que o raio menor, 
*        enquanto o usuário não digitar o valor correto o cálculo não será realizado. Assim que o valor for considerado válido pela função leiaDados() inserida 
*        no laço condicional while, o cálculo da área será realizado e impresso na tela.
* 
* @param raio_maior raio do círculo maior
* @param raio_menor raio do cículo menor
* @param area valor da área que será cálculada
* 
* @constant M_PI valor de pi
*/

void areaCoroacircular(void){ //coroa circular

  double raio_maior = 0.0; //valor do raio maior
  double raio_menor = 0.0; //valor do raio menor
  double area = 0.0; //valor da área
  
  system("clear"); //limpar tela
  
  printf("\t==========================\n"); //imprimir título
  printf("\t  Área da Coroa Circular\n"); //imprimir título
  printf("\t==========================\n"); //imprimir título
  
  printf("\nDigite o valor do raio maior: "); //imprimir mensagem
  raio_maior = leiaDados(); //ler valor do raio maior
  printf("\nDigite o valor do raio menor: "); //imprimir mensagem
  raio_menor = leiaDados(); //ler valor do raio menor
  
  while(raio_maior <= raio_menor){ //caso tenha se digitado o raio maior menor que o raio menor
    
    printf("\nO raio maior deve ser MAIOR que o raio menor!!\n"); //imprimir mensagem
    printf("\nDigite o valor do raio maior: "); //imprimir mensagem
    raio_maior = leiaDados(); //ler valor do raio maior
    printf("\nDigite o valor do raio menor: "); //imprimir mensagem
    raio_menor = leiaDados(); //ler valor do raio menor
  } //while
  
  area = M_PI * ((raio_maior * raio_maior) - (raio_menor * raio_menor)); //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area); //imprimir resultado

  return; //não retorna valor
} //areaCoroacircular

/**
* @brief Esta função calcula a área de um trapézio por meio de três dados que são inseridos pelo usuário: o valor da base maior do trapézio,
*        o valor da base menor do trapézio e o valor da altura do trapézio. Tais dados são lidos por meio da função leiaDados(), que além de ler,
*        valida ou invalida os valores digitados pelo usuário, caso os valores lidos sejam válidos, o cálculo da área será realizado e impresso na
*        tela.
* 
* @param lado_a lado do trapézio
* @param lado_b outro lado do trapézio
* @param altura altura do trapézio
* @param area valor da área que será cálculada
*/

void areaTrapezio(void){ //trapézio
  
  double lado_a = 0.0; //valor do lado_a
  double lado_b = 0.0; //valor do lado_b
  double altura = 0.0; //valor da altura
  double area = 0.0; //valor da área
  
  system("clear"); //limpar tela
  
  printf("\t====================\n"); //imprimir título
  printf("\t  Área do Trapézio\n"); //imprimir título
  printf("\t====================\n"); //imprimir título
  
  printf("\nDigite o valor de um dos lados paralelos: "); //imprimir mensagem
  lado_a = leiaDados(); //ler valor do lado_a
  printf("\nDigite o valor do outro lado paralelo: "); //imprimir mensagem
  lado_b = leiaDados(); //ler valor do lado_b
  printf("\nDigite o valor da altura: "); //imprimir mensagem
  altura = leiaDados(); //ler valor da altura
  
  area = ((lado_a + lado_b) * altura) / 2.0; //cálculo da área
  printf("\nÁrea\n\t%.2lf cm²\n", area); //imprimir resultado

  return; //não retorna valor
} //areaTrapezio

/**
* @brief Esta função calcula o volume de um cubo por meio de um dado que é inserido pelo usuário: o valor do lado do cubo.
*        Tal dado é lido por meio da função leiaDados(), que além de ler, valida ou invalida os valores digitados pelo usuário,
*        caso o valor lido seja válido, o cálculo do volume será realizado e impresso na tela.
* 
* @param lado lado do cubo
* @param volume valor do volume que será cálculado
*/

void volumeCubo(void){ //cubo
  
  double lado = 0.0; //valor do lado
  double volume = 0.0; //valor do volume
  
  system("clear"); //limpar tela
  
  printf("\t==================\n"); //imprimir título
  printf("\t  Volume do Cubo\n"); //imprimir título
  printf("\t==================\n"); //imprimir título
  
  printf("\nDigite o valor do lado: "); //imprimir mensagem
  lado = leiaDados(); //ler valor do lado
  
  volume = (lado * lado * lado); //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume); //imprimir resultado

  return; //não retorna valor
} //volumeCubo

/**
* @brief Esta função calcula o volume de um Paralelepípedo por meio de três dados que são inseridos pelo usuário: o valor da largura 
*        do paralelepípedo, o valor do comprimento do paralelepípedo e o valor da altura do paralelepípedo. Tais dados são lidos por meio 
*        da função leiaDados(), que além de ler, valida ou invalida os valores digitados pelo usuário, caso os valores lidos sejam válidos,
*        o cálculo do volume será realizado e impresso na tela.
* 
* @param largura largura do paralelepípedo
* @param comprimento comprimento do paralelepípedo
* @param altura altura do paralelepípedo
* @param volume valor do volume que será cálculado
*/

void volumeParalelepipedo(void){ //paralelepípedo
  
  double largura = 0.0; //valor da largura
  double comprimento = 0.0; //valor do comprimento
  double altura = 0.0; //valor da altura
  double volume = 0.0; //valor do volume
  
  system("clear"); //limpar tela
  
  printf("\t============================\n"); //imprimir título
  printf("\t  Volume do Paralelepípedo\n"); //imprimir título
  printf("\t============================\n"); //imprimir título
  
  printf("\nDigite o valor da largura: "); //imprimir mensagem
  largura = leiaDados(); //ler valor da largura
  printf("\nDigite o valor do comprimento: "); //imprimir mensagem
  comprimento = leiaDados(); //ler valor do comprimento
  printf("\nDigite o valor da altura: "); //imprimir mensagem
  altura = leiaDados(); //ler valor da altura
  
  volume = (largura * comprimento * altura); //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume); //imprimir resultado

  return; //não retorna valor
} //volumeParalelepipedo

/**
* @brief Esta função calcula o volume de um Cilindro por meio de dois dados que são inseridos pelo usuário (o valor do raio da base do cilindro
*        e o valor da altura do cilindro) e por meio da constante M_PI que foi definida no começo do programa. Os dados são lidos por meio da função
*        leiaDados(), que além de ler, valida ou invalida os valores digitados pelo usuário, caso os valores lidos sejam válidos, o cálculo do volume
*        será realizado e impresso na tela.
* 
* @param raiobase raio da base do cilindro
* @param altura altura do cilindro
* @param volume valor do volume que será cálculado
* 
* @constant M_PI valor de pi
*/

void volumeCilindro(void){ //cilindro
  
  double raiobase = 0.0; //valor do raio da base
  double altura = 0.0; //valor da altura
  double volume = 0.0; //valor do volume
  
  system("clear"); //limpar tela
  
  printf("\t======================\n"); //imprimir título
  printf("\t  Volume do Cilindro\n"); //imprimir título
  printf("\t======================\n"); //imprimir título
  
  printf("\nDigite o valor do raio: "); //imprimir mensagem
  raiobase = leiaDados(); //ler valor do raio
  printf("\nDigite o valor da altura: "); //imprimir mensagem
  altura = leiaDados(); //ler valor da altura
  
  volume = M_PI * (raiobase * raiobase) * altura; //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume); //imprimir resultado

  return; //não retorna valor
} //volumeCilindro

/**
* @brief Esta função calcula o volume de uma esfera por meio de um dado que é inserido pelo usuário (o valor do raio da esfera) e por meio da cosntante M_PI
*        que foi definida no começo do programa. O dado é lido por meio da função leiaDados(), que além de ler, valida ou invalida o valor digitado pelo usuário, 
*        caso o valor lido seja válido, o cálculo do volume será realizado e impresso na tela.
* 
* @param raio raio da esfera
* @param volume valor do volume que será cálculado
* 
* @constant M_PI valor de pi
*/

void volumeEsfera(void){ //esfera
  
  double raio = 0.0; //valor do raio
  double volume = 0.0; //valor do volume
  
  system("clear"); //limpar tela
  
  printf("\t====================\n"); //imprimir título
  printf("\t  Volume da Esfera\n"); //imprimir título
  printf("\t====================\n"); //imprimir título
  
  printf("\nDigite o valor do raio: "); //imprimir mensagem
  raio = leiaDados(); //ler valor do raio
  
  volume = (4.0 * (M_PI * (raio * raio * raio))) / 3.0; //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume); //imprimir resultado

  return; //não retorna valor
} //volumeEsfera

/**
* @brief Esta função calcula o volume de um elipsoide por meio de três dados que são inseridos pelo usuário (o valor do semi eixo a, o valor do semi eixo b
*        e o valor do semi eixo c) e por meio da constante M_PI que foi definida no começo do programa. Os dado são lidos por meio da função leiaDados(),
*        que além de ler, valida ou invalida o valor digitado pelo usuário, caso os valores lidos sejam válidos, o cálculo do volume será realizado e impresso
*        na tela.
* 
* @param semie_a semi-eixo do elipsoide
* @param semie_b outro semi-eixo do elipsoide
* @param semie_c outro semi-eixo do elipsoide
* @param volume valor do volume que será cálculado
* 
* @constant M_PI valor de pi
*/

void volumeElipsoide(void){ //elipsoide
  
  double semie_a = 0.0; //valor do semi-eixo_a
  double semie_b = 0.0; //valor do semi-eixo_b
  double semie_c = 0.0; //valor do semi-eixo_c
  double volume = 0.0; //valor do volume
  
  system("clear"); //limpar tela
  
  printf("\t=======================\n");  //imprimir título
  printf("\t  Volume do Elipsoide\n"); //imprimir título
  printf("\t=======================\n"); //imprimir título
  
  printf("\nDigite o valor do primeiro semi-eixo: "); //imprimir mensagem
  semie_a = leiaDados(); //ler valor do semi-eixo_a
  printf("\nDigite o valor do segundo semi-eixo: "); //imprimir mensagem
  semie_b = leiaDados(); //ler valor do semi-eixo_b
  printf("\nDigite o valor do terceiro semi-eixo: "); //imprimir mensagem
  semie_c = leiaDados(); //ler valor do semi-eixo_c
  
  volume = (4 * (M_PI * semie_a * semie_b * semie_c)) / 3.0; //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume); //imprimir resultado

  return; //não retorna valor
} //volumeElipsoide

/**
* @brief Esta função calcula o volume de uma pirâmide por meio de dois dados que são inseridos pelo usuário: a área da base da pirâmide e a altura da pirâmide.
*        Tais dados são lidos por meio da função leiaDados(), que além de ler, valida ou invalida o valor digitado pelo usuário, caso os valores lidos sejam
*        válidos, o cálculo do volume será realizado e impresso na tela.
* 
* @param areabase área da base da pirâmide
* @param altura altura da pirâmide
* @param volume valor do volume que será cálculado
*/

void volumePiramide(void){ //pirâmide
  
  double areabase = 0.0; //valor da área da base
  double altura = 0.0; //valor da altura
  double volume = 0.0; //valor do volume
  
  system("clear"); //limpar tela
  
  printf("\t======================\n"); //imprimir título
  printf("\t  Volume da Pirâmide\n"); //imprimir título
  printf("\t======================\n"); //imprimir título
  
  printf("\nDigite o valor da área da base: "); //imprimir mensagem
  areabase = leiaDados(); //ler valor da área da base
  printf("\nDigite o valor da altura: "); //imprimir mensagem
  altura = leiaDados(); //ler valor da altura
  
  volume = (areabase * altura) / 3.0; //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume); //imprimir resultado
  
  return; //não retorna valor
} //volumePiramide

/**
* @brief Esta função calcula o volume de um cone por meio de dois dados que são inseridos pelo usuário (o valor do raio da base do cone e o valor da altura
*        do cone) e por meio da cosntante M_PI que foi definida no começo do programa. Os dado são lidos por meio da função leiaDados(), que além de ler, valida
*        ou invalida o valor digitado pelo usuário, caso os valores lidos sejam válidos, o cálculo do volume será realizado e impresso na tela.
* 
* @param raiobase raio da base do cone
* @param altura altura do cone
* @param volume valor do volume que será cálculado
* 
* @constant M_PI valor de pi
*/

void volumeCone(void){ //cone
  
  double raiobase = 0.0; //valor do raio da base
  double altura = 0.0; //valor da altura
  double volume = 0.0; //valor do volume
  
  system("clear"); //limpar tela
  
  printf("\t==================\n"); //imprimir título
  printf("\t  Volume do Cone\n"); //imprimir título
  printf("\t==================\n"); //imprimir título
  
  printf("\nDigite o valor do raio da base: "); //imprimir mensagem
  raiobase = leiaDados(); //ler valor do raio da base
  printf("\nDigite o valor da altura: "); //imprimir mensagem
  altura = leiaDados(); //ler valor da altura
  
  volume = (M_PI * ((raiobase * raiobase) * altura)) / 3.0; //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume); //imprimir resultado
  
  return; //não retorna valor
} //volumeCone

/**
* @brief Esta função calcula o volume de um prisma por meio de dois dados que são inseridos pelo usuário: o valor da área da base do prisma e o valor da altura
*        do prisma. Os dados são lidos por meio da função leiaDados(), que além de ler, valida ou invalida o valor digitado pelo usuário, caso os valores lidos
*        sejam válidos, o cálculo do volume será realizado e impresso na tela.
* 
* @param areabase area da base do prisma
* @param altura altura do prisma
* @param volume valor do volume que será cálculado
*/

void volumePrisma(void){ //prisma
  
  double areabase = 0.0; //valor da área da base
  double altura = 0.0; //valor da altura
  double volume = 0.0; //valor do volume
  
  system("clear"); //limpar tela
  
  printf("\t====================\n"); //imprimir título
  printf("\t  Volume do Prisma\n"); //imprimir título
  printf("\t====================\n"); //imprimir título
  
  printf("\nDigite o valor da área da base: "); //imprimir mensagem
  areabase = leiaDados(); //ler valor da área da base
  printf("\nDigite o valor da altura: "); //imprimir mensagem
  altura = leiaDados(); //ler valor da altura
  
  volume = areabase * altura; //cálculo do volume
  printf("\nVolume\n\t%.2lf cm³\n", volume); //imprimir resultado
  
  return; //não retorna valor
} //volumePrisma

/**
* @brief A função "menu_4" imprimirá as opções e lerá a opção escolhida pelo usuário. A função "menu_4" será usada para criar um laço nas funções
*        "menu_2" e "menu_3"
* 
* @param o opção digitada pelo usuário
* 
* @return 1, para repetir o laço das funções "menu_2" e "menu_3"
* @return 0, para finalizar o laço das funções "menu_2" e "menu_3"
*/

int menu_4(void){ //menu_4
  
  int o = 0; //opção digitada pelo usuário
  
  printf("\nOpções:\n"); //imprimir mensagem
  printf("1 - Repetir cálculo com novos valores\n"); //repetir cálculo com novos valores
  printf("2 - Voltar à seleção de formas\n"); //selecionar nova forma
  
  printf("\nDigite uma opção: "); //imprimir mensagem
  scanf("%d", &o); //ler opção
  getchar(); //remover '\n'
  
  while(!(o >= OPCAO_MIN && o <= OPCAO_MAX_4)){ //caso "o" não seja válido
    
    printf("\nOPÇÃO INVÁLIDA!!\nDigite uma opção válida: "); //imprimir mensagem
    scanf("%d", &o); //ler novamente a opção até que seja válida
    getchar(); //remover '\n'
  } //while
  
  if(o == 1){ //repetir cálculo com novos valores
    
    return 1; //retorna 1, para repetir cálculos das funções "menu_2" e "menu_3"
  }else if(o == 2){ //selecionar nova forma
    
    return 0; //retorna 0, para escolher nova forma geométrica nos menus "menu_2" e "menu_3"
  }else{
  } //else
} //menu_4

/**
* @brief A função "menu_3" imprimirá as opções e lerá a opção escolhida pelo usuário, caso a opção seja 9, a função retornará 1 para "menu", caso a opção
*        esteja entre 1 e 8, o usuário será encaminhado para a função de cálculo da forma escolhida, com a utilização do "menu_4" será feito um laço, para
*        que o usuário possa refazer o cálculo quantas vezes desejar, quando o "menu_4" retornar 0, o laço finaliza e a "menu_3" retorna 3 para "menu", 
*        então a função é finalizada e iniciada novamente pela função "menu"
* 
* @param o opção digitada pelo usuário
* 
* @return 1 quando (o == 9)
* @return 3 quando (o != 9 && (o >= OPCAO_MIN && o <= OPCAO_MAX_2)) e todos os cálculos, resquisitados pelo usuário, de acordo com a forma escolhida, forem feitos
*/

int menu_3(void){ //menu_3 | volume
  
  int o = 0; //opção digitada pelo usuário
  
  system("clear"); //limpar tela
  
  printf("\t==================================\n"); //imprimir título
  printf("\t  Cálculo dos volumes de sólidos\n"); //imprimir título
  printf("\t==================================\n"); //imprimir título
  
  printf("\nOpções:\n"); //imprimir mensagem
  printf("1 - Cubo\n"); //cubo
  printf("2 - Paralelepípedo\n"); //paralelepípedo
  printf("3 - Cilindro\n"); //cilindro
  printf("4 - Esfera\n"); //esfera
  printf("5 - Elipsoide\n"); //elipsoide
  printf("6 - Pirâmide\n"); //pirâmide
  printf("7 - Cone\n"); //cone
  printf("8 - Prisma\n"); //prisma
  printf("9 - Retornar ao menu anterior\n"); //retornar ao menu anterior
  
  printf("\nDigite uma opção: "); //imprimir mensagem
  scanf("%d", &o); //ler opção
  getchar(); //remover '\n'
  
  while(!(o >= OPCAO_MIN && o <= OPCAO_MAX_3)){ //caso "o" não seja válido
    
    printf("\nOPÇÃO INVÁLIDA!!\nDigite uma opção válida: "); //imprimir mensagem
    scanf("%d", &o); //ler novamente a opção até que seja válida
    getchar(); //remover '\n'
  } //while
  
  if(o == 9){ //retornar ao menu anterior
    
    return 1; //retorna 1, para retornar ao "menu_1"
  }else if(o == 8){ //prisma
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      volumePrisma(); //cálculo do volume do prisma
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for
    
    return 3; //retorna 3, para iniciar o "menu_3" novamente na função "menu"
  }else if(o == 7){ //cone
    
    for(o = 1; o == 1;){ //se repetirá até que "menu_4" retorne 0
      
      volumeCone(); //cálculo do volume do cone
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for
    
    return 3; //retorna 3, para iniciar o "menu_3" novamente na função "menu"
  }else if(o == 6){ //pirâmide
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      volumePiramide(); //cálculo do volume da pirâmide
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for
    
    return 3; //retorna 3, para iniciar o "menu_3" novamente na função "menu"
  }else if(o == 5){ //elipsoide
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      volumeElipsoide(); //cálculo do volume do elipsoide
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for
    
    return 3; //retorna 3, para iniciar o "menu_3" novamente na função "menu"
  }else if(o == 4){ //esfera
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      volumeEsfera(); //cálculo do volume da esfera
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for
    
    return 3; //retorna 3, para iniciar o "menu_3" novamente na função "menu"
  }else if(o == 3){ //cilindro
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      volumeCilindro(); //cálculo do volume do cilindro
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for 
    
    return 3; //retorna 3, para iniciar o "menu_3" novamente na função "menu"
  }else if(o == 2){ //paralelepípedo
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      volumeParalelepipedo(); //cálculo do volume do paralelepípedo
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for
    
    return 3; //retorna 3, para iniciar o "menu_3" novamente na função "menu"
  }else if(o == 1){ //cubo
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      volumeCubo(); //cálculo do volume do cubo
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for 
    
    return 3; //retorna 3, para iniciar o "menu_3" novamente na função "menu"
  }else{
  } //else
} //menu_3 | volume

/**
* @brief A função "menu_2" imprimirá as opções e lerá a opção escolhida pelo usuário, caso a opção seja 10, a função retornará 1 para "menu", caso a opção
*        esteja entre 1 e 9, o usuário será encaminhado para a função de cálculo da forma escolhida, com a utilização do "menu_4" será feito um laço, para
*        que o usuário possa refazer o cálculo quantas vezes desejar, quando o "menu_4" retornar 0, o laço finaliza e a "menu_2" retorna 2 para "menu", 
*        então a função é finalizada e iniciada novamente pela função "menu"
* 
* @param o opção digitada pelo usuário
* 
* @return 1 quando (o == 10)
* @return 2 quando (o != 10 && (o >= OPCAO_MIN && o <= OPCAO_MAX_2)) e todos os cálculos, resquisitados pelo usuário, de acordo com a forma escolhida, forem feitos
*/

int menu_2(void){ //menu_2 | área
  
  int o = 0; //opção digitada pelo usuário
  
  system("clear"); //limpar tela
  
  printf("\t=======================================\n"); //imprimir título
  printf("\t  Cálculo das áreas de figuras planas\n"); //imprimir título
  printf("\t=======================================\n"); //imprimir título
  
  printf("\nOpções:\n"); //imprimir mensagem
  printf("1 - Triângulo\n"); //triâgulo
  printf("2 - Paralelogramo\n"); //paralelogramo
  printf("3 - Losango\n"); //losango
  printf("4 - Quadrado\n"); //quadrado
  printf("5 - Retângulo\n"); //retângulo
  printf("6 - Círculo\n"); //círculo
  printf("7 - Setor Circular\n"); //setor circular
  printf("8 - Coroa Circular\n"); //coroa circular
  printf("9 - Trapézio\n"); //trapézio
  printf("10 - Retornar ao menu anterior\n"); //retorna ao menu anterior
  
  printf("\nDigite uma opção: "); //imprimir mensagem
  scanf("%d", &o); //ler opção
  getchar(); //remover '\n'
  
  while(!(o >= OPCAO_MIN && o <= OPCAO_MAX_2)){ //caso "o" não seja válido
    
    printf("\nOPÇÃO INVÁLIDA!!\nDigite uma opção válida: "); //imprimir mensagem
    scanf("%d", &o); //ler novamente a opção até que seja válida
    getchar(); //remover '\n'
  } //while
  
  if(o == 10){ //retornar ao menu anterior
    
    return 1; //retorna 1, para retornar ao "menu_1"
  }else if(o == 9){ //trapézio
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      areaTrapezio(); //cálculo da área do trapézio
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for 
        
    return 2; //retorna 2, para iniciar o "menu_2" novamente na função "menu"
  }else if(o == 8){ //coroa circular
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      areaCoroacircular(); //cálculo da área da coroa circular
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for
    
    return 2; //retorna 2, para iniciar o "menu_2" novamente na função "menu"
  }else if(o == 7){ //setor circular
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      areaSetorcircular(); //cálculo da área do setor circular
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for
    
    return 2; //retorna 2, para iniciar o "menu_2" novamente na função "menu"
  }else if(o == 6){ //círculo
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      areaCirculo(); //cálculo da área do círculo
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for
    
    return 2; //retorna 2, para iniciar o "menu_2" novamente na função "menu"
  }else if(o == 5){ //retângulo
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      areaRetangulo(); //cálculo da área do retângulo
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for
    
    return 2; //retorna 2, para iniciar o "menu_2" novamente na função "menu"
  }else if(o == 4){ //quadrado
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      areaQuadrado(); //cálculo da área do quadrado
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for
    
    return 2; //retorna 2, para iniciar o "menu_2" novamente na função "menu"
  }else if(o == 3){ //losango
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      areaLosango(); //cálculo da área do losango
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for 
    
    return 2; //retorna 2, para iniciar o "menu_2" novamente na função "menu"
  }else if(o == 2){ //paralelogramo
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      areaParalelogramo(); //cálculo da área do paralelogramo
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for 
    
    return 2; //retorna 2, para iniciar o "menu_2" novamente na função "menu"
  }else if(o == 1){ //triângulo
    
    for(o = 1; o == 1;){ //se repetirá até que menu_4 retorne 0
      
      areaTriangulo(); //cálculo da área do triâgulo
      o = menu_4(); //guarda em "o" o retorno de "menu_4", de acordo com o escolhido pelo usuário
    } //for
    
    return 2; //retorna 2, para iniciar o "menu_2" novamente na função "menu"
  }else{
  } //else
} //menu_2 | área

/**
* @brief A função "menu_1" imprimirá as opções e lerá a opção escolhida pelo usuário. Caso se escolha 3, retornará 0 para a função "menu", caso se escolha 2,
*        retornará 3 para "menu", caso se escolha 1, retornará 2 para "menu"
* 
* @param o opção digitada pelo usuário
* 
* @return 0 quando (o == 3)
* @return 3 quando (o == 2)
* @return 2 quando (o == 1)
*/

int menu_1(void){ //menu_1
  
  int o = 0; //opção digitada pelo usuário
  
  system("clear"); //limpar tela
  
  printf("\n\t=============================\n"); //imprimir título
  printf("\t  Cálculo de área ou volume\n"); //imprimir título
  printf("\t=============================\n"); //imprimir título
  
  printf("\nOpções:\n"); //imprimir mensagem
  printf("\n1 - Cálculo da área\n"); //chamar menu_2
  printf("2 - Cálculo de volume\n"); //chamar menu_3
  printf("3 - Sair\n"); //fechar programa
  
  printf("\nDigite uma opção: "); //imprimir mensagem
  scanf("%d", &o); //ler opção
  getchar(); //remover '\n'
  
  while(!(o >= OPCAO_MIN && o <= OPCAO_MAX_1)){ //caso "o" não seja válido
    
    printf("\nOPÇÃO INVÁLIDA!!\nDigite uma opção válida: "); //imprimir mensagem
    scanf("%d", &o); //ler novamente a opção até que seja válida
    getchar(); //remover '\n'
  } //while
  
  if(o == 3){ //fechar programa
    
    return 0; //retorna 0, para fechar a função "menu"
  }else if(o == 2){ //chamar menu_3 | volume
    
    return 3; //retorna 3, para iniciar o "menu_3", através da função "menu"
  }else if(o == 1){ //chamar menu_2 | área
    
    return 2; //retorna 2, para iniciar o "menu_2", através da função "menu"
  }else{
  } //else
} //menu_1

/**
* @brief A função "menu" organizará, através de um laço, os três principais menus ("menu_1", "menu_2", "menu_3"). Começará iniciando "menu_1", 
*        após isso iniciará os menus conforme seus respectivos retornos, o laço se finalizará quando "menu_1" retornar 0
* 
* @param i receberá, após a primeira execução do laço, o retorno do menu que foi chamado e será usado para continuidade ou fechamento do laço
*/

void menu(void){ //organização dos menus  
  
  int i = 0; //indica qual função menu será chamada
  
  for(i = 1; i != 0;){ //até que se retorne 0, para finalizar a função (o zero será retornado apenas ao se escolher a opção "3" no "menu_1")
    if(i == 1){ //menu_1
      
      i = menu_1(); //guarda o retorno do "menu_1" (determinará o caminho do programa, de acordo com o escolhido pelo usuário no "menu_1")
    }else if(i == 2){ //menu_2 | área
      
      i = menu_2(); //guarda o retorno do "menu_2" (determinará o caminho do programa, de acordo com o escolhido pelo usuário no "menu_2")
    }else if(i == 3){ //menu_3 | volume
      
      i = menu_3(); //guarda o retorno do "menu_3" (determinará o caminho do programa, de acordo com o escolhido pelo usuário no "menu_3")
    }else{
    } //else
  } //for
  
  system("clear"); //limpar tela
  
  return; //não retorna valor
} //menu

int main(void){ //função principal ("main")
  
  menu(); //chama função "menu" | programa se fecha quando a função "menu" é finalizada
  
  return 0; //retorna 0
} //main

/**
*  A tabela a seguir contém temperatura de fusão e de ebulição
* de várias substâncias. Complete a tabela com o estado físico
* de cada uma a 25 graus Celsius.
*
* Exemplo de dados fornecidos pelo usuário:
* 
* Substância   tf     te   Estado físico
* ---------- ----   ----  --------------
* A           -83     -4   ?
* B           -47    +16   ?
* C           -21    +44   ?
* D           +18    +65   ?
* E           +83   +397   ?
*
* Onde:
* - tf -> temperatura de fusão em graus Celsius
* - te -> temperatura de ebulição em graus Celsius
* - ?  -> Sólido/Líquido/Gasoso
*
* Observações sobre o programa:
*  - char[ NUMERO ] -> Sequencia de caracteres (uma String)
*                      serve para guardar palavras e frases
*                      na memória. Reserva um NUMERO de
*                      espaços na memória para caracteres
*  - float          -> indica que queremos guardar um número
*                      do domínio dos reais, ou seja, com 
*                      casas decimais após a vírgula podendo
*                      ser positivo ou negativo
*
*  - int             -> representa um valor inteiro, positivo
*                       ou negativo.
*
*  ---------------------------------------------------------
*
*  - scanf          -> solicita para o usuário digitar um valor
*                      via teclado
*  
*  CUIDADO: A variável do scanf quando ela possui [] não deve ter
*           o caracter & (olhe abaixo no scanf nome e o 
*           scanf &temperaturaDeFusao
*           NAO COLOQUE ACENTO EM NOME DE VARIÁVEL... ISSO É O 1o 
*           AVISO... NO SEGUNDO HAVERÁ CONSEQUÊNCIAS...
*
* @author Maria Clara Seixa Scheffel
*/

#define SOLIDO  0
#define LIQUIDO 1
#define GASOSO  2

#define TEMPERATURA_ATUAL 25

#include <stdio.h>

int qualEstadoDaMateria( int tf, int te, int temperaturaCorrente ) {
    // se a temperatura corrente for menor que a temepratura de fusão
    if( temperaturaCorrente < tf ) {
        return SOLIDO;
    }
    // se a temperaturacorrente for maior que a temperatura de ebulição
    if( temperaturaCorrente > te ) {
       return GASOSO;
    }
    return LIQUIDO;
} 

int main(int argc, char *argv[]) {
    char nome[20]; // array de char é uma String por isso %s no scanf

    float temperaturaFusao; // %f no scanf
    float temperaturaEbulicao;

    int estado; // %d no scanf

    printf("\nQual o nome da substância? ");
    scanf("%s", nome);

    printf("\nQual a temperatura de fusão (tf)? ");
    scanf("%f", &temperaturaFusao);   
    
    printf("\nQual a temperatura de ebulição (te)? " );
    scanf("%f", &temperaturaEbulicao);
     
    estado = qualEstadoDaMateria( temperaturaFusao, temperaturaEbulicao, TEMPERATURA_ATUAL); 
    printf("O valor da variavel estado é %d \n", estado );

    switch( estado ) {
        case SOLIDO:
          printf("\nSolido\n");
          break;
        case LIQUIDO:
          printf("\nLiquido\n");
          break;
        case GASOSO:
          printf("\nGasoso\n");
          break;
        default:
          printf("Xiiii algo deu errado mano!!! Vai saber˜!!!");
          break;
    }
}

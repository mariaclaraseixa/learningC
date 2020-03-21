#include <stdio.h>

/**
* Escreve meu nome usando ASCII art
* Demonstra como usar função na linguagem C
*
* Uma função é um conjunto de comandos que realiza uma tarefa específica
*
*
* Baseado no texto de http://patorjk.com/software/taag/#p=display&f=Doh&t=Maria
*
* Tarefa: ler https://homepages.dcc.ufmg.br/~rodolfo/aedsi-2-10/Funcoes/funcoes.html
*
* @author: Maria Clara Seixa Scheffel
*/


/**
* Função para escrever a palavra Maria
*/
void escreverMaria() {
  printf("MMMMMMMM               MMMMMMMM                                      iiii                    \n");
  printf("M:::::::M             M:::::::M                                     i::::i                   \n");
  printf("M::::::::M           M::::::::M                                      iiii                    \n");
  printf("M:::::::::M         M:::::::::M                                                              \n");
  printf("M::::::::::M       M::::::::::M  aaaaaaaaaaaaa  rrrrr   rrrrrrrrr  iiiiiii   aaaaaaaaaaaaa   \n");
  printf("M:::::::::::M     M:::::::::::M  a::::::::::::a r::::rrr:::::::::r i:::::i   a::::::::::::a  \n");
  printf("M:::::::M::::M   M::::M:::::::M  aaaaaaaaa:::::ar:::::::::::::::::r i::::i   aaaaaaaaa:::::a \n");
  printf("M::::::M M::::M M::::M M::::::M           a::::arr::::::rrrrr::::::ri::::i            a::::a \n");
  printf("M::::::M  M::::M::::M  M::::::M    aaaaaaa:::::a r:::::r     r:::::ri::::i     aaaaaaa:::::a \n");
  printf("M::::::M   M:::::::M   M::::::M  aa::::::::::::a r:::::r     rrrrrrri::::i   aa::::::::::::a \n");
  printf("M::::::M    M:::::M    M::::::M a::::aaaa::::::a r:::::r            i::::i  a::::aaaa::::::a \n");
  printf("M::::::M     MMMMM     M::::::Ma::::a    a:::::a r:::::r            i::::i a::::a    a:::::a \n");
  printf("M::::::M               M::::::Ma::::a    a:::::a r:::::r           i::::::ia::::a    a:::::a \n");
  printf("M::::::M               M::::::Ma:::::aaaa::::::a r:::::r           i::::::ia:::::aaaa::::::a \n");
  printf("M::::::M               M::::::M a::::::::::aa:::ar:::::r           i::::::i a::::::::::aa:::a\n");
  printf("MMMMMMMM               MMMMMMMM  aaaaaaaaaa  aaaarrrrrrr           iiiiiiii  aaaaaaaaaa  aaaa\n");
}

/**
* Função para escrever a palavra Clara
*/
void escreverClara() {
  printf("         CCCCCCCCCCCCClllllll                                                       \n");
  printf("      CCC::::::::::::Cl:::::l                                                       \n");
  printf("    CC:::::::::::::::Cl:::::l                                                       \n");
  printf("   C:::::CCCCCCCC::::Cl:::::l                                                       \n");
  printf("  C:::::C       CCCCCC l::::l   aaaaaaaaaaaaa  rrrrr   rrrrrrrrr   aaaaaaaaaaaaa    \n");
  printf(" C:::::C               l::::l   a::::::::::::a r::::rrr:::::::::r  a::::::::::::a   \n");
  printf(" C:::::C               l::::l   aaaaaaaaa:::::ar:::::::::::::::::r aaaaaaaaa:::::a  \n");
  printf(" C:::::C               l::::l            a::::arr::::::rrrrr::::::r         a::::a  \n");
  printf(" C:::::C               l::::l     aaaaaaa:::::a r:::::r     r:::::r  aaaaaaa:::::a  \n");
  printf(" C:::::C               l::::l   aa::::::::::::a r:::::r     rrrrrrraa::::::::::::a  \n");
  printf(" C:::::C               l::::l  a::::aaaa::::::a r:::::r           a::::aaaa::::::a  \n");
  printf("  C:::::C       CCCCCC l::::l a::::a    a:::::a r:::::r          a::::a    a:::::a  \n");
  printf("   C:::::CCCCCCCC::::Cl::::::la::::a    a:::::a r:::::r          a::::a    a:::::a  \n");
  printf("    CC:::::::::::::::Cl::::::la:::::aaaa::::::a r:::::r          a:::::aaaa::::::a  \n");
  printf("      CCC::::::::::::Cl::::::l a::::::::::aa:::ar:::::r           a::::::::::aa:::a \n");
  printf("         CCCCCCCCCCCCCllllllll  aaaaaaaaaa  aaaarrrrrrr            aaaaaaaaaa  aaaa \n");
}

/**
* Função para escrever meu nome completo
*/
void escreverMeuNome() {
  escreverMaria();
  escreverClara();
}



// o programa começa executando no main
int main() {
  printf("Saindo do main -> \n\n\n"); // Algumas linhas em branco no início
  
  escreverMeuNome();  


  printf("Voltou para o  main -> \n\n\n"); // Algumas linhas em branco no início
}

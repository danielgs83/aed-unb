#include "arvore.hpp"

//funcao principal do programa
int main(int argc, char const *argv[]) {

  //instanciando os objetos
  Arvore arv("Jacaranda", "Jacaranda acutifolia");
  Arvore arv2("Araucaria", "Araucaria angustifolia");
  Arvore arv3; //declara variavel sem argumentos - construtor recebe strings vazias

  //chamadas da funcao-membro dos objetos
  arv.meu_nome(0);
  arv2.meu_nome(1);
  arv3.meu_nome(1);

  return 0;
}

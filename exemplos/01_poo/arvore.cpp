#include "arvore.hpp"
#include <iostream>

using namespace std;

//definicoes das funcoes-membro da classe Arvore

//construtor
Arvore::Arvore(std::string n1, std::string n2)
{
  nome = n1;
  nomeCientifico = n2;
}

//funcao-membro
void Arvore::meu_nome(int tipo)
{
  if(tipo == 0)
    cout << "Meu nome cientifico e: " << nomeCientifico << endl;
  else
    if(tipo == 1)
      cout << "Meu nome e: " << nome << endl;
    else
      cout << "erro!" << endl;
}

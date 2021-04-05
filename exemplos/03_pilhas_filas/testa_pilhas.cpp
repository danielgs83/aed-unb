#include <iostream>
// #include "doubleStack.h"
#include "genListStack.h"
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  string word;
  int sz = 10;
  // doubleStack pilha(sz);
  LLStack<double> pilha;
  LLStack<string> pilha2;

  for (size_t i = 0; i < sz; i++) {
    pilha.push(0.1 + i);
    cout << 0.1 + i << " ";
  }
  cout << endl;

  while(!pilha.isEmpty()){
    cout << pilha.pop() << " ";
  }
  cout << endl;

  cout << "Digite palavras, CTRL-D para encerrar\n";
  while(cin >> word){
      pilha2.push(word);
  }

  while(!pilha2.isEmpty()){
    cout << pilha2.pop() << " ";
  }
  cout << endl;

  return 0;
}

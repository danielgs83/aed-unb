#include "genQueue.h"
#include "genListStack.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {

  string palavra;
  Queue<string> f;
  LLStack<string> p;

  while (cin >> palavra) { //lendo enquanto nao digitar CTRL-D
    f.enqueue(palavra); //enfileira
    p.push(palavra); //empilha
  }

  cout << "FILA: ";
  while (!f.isEmpty()) { //remove da fila e imprime
    cout << f.dequeue() << " ";
  }
  cout << endl;

  cout << "PILHA: ";
  while (!p.isEmpty()) { //remove da pilha e imprime
    cout << p.pop() << " ";
  }
  cout << endl;

  return 0;
}

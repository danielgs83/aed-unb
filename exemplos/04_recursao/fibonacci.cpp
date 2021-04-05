#include <iostream>
#include "recursao.h"

using namespace std;

int main(int argc, char const *argv[]) {
  int n;

  cin >> n;

  for (size_t i = 0; i < n; i++) {
    cout << fib(i) << " ";
  }
  cout << endl;

  for (size_t i = 0; i < n; i++) {
    cout << fibo(i) << " ";
  }
  cout << endl;

  return 0;
}

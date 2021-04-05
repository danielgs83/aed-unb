#include "recursao.h"
#include <iostream>

//variavel global
double complexidade=0;

using namespace std;

void executa_recursao() {
	int n;

	for(n=0; n<10; n++){
		complexidade=0;
		cout << "Fatorial Recursivo(" << n << ")=" << fatorial(n) << endl;
		cout << "   # Chamadas: " << complexidade << endl;
		complexidade=0;
		cout << "Fatorial Iterativo(" << n << ")=" << factorial(n) << endl;
		cout << "   # Laços: " << complexidade << endl;
	}

	cout << endl << endl;
	for(n=0; n<10; n++) {
		complexidade=0;
		cout << "Fibonacci Recursivo(" << n << ")=" << fib(n) << endl;
		cout << "   # Chamadas: " << complexidade << endl;
		complexidade=0;
		cout << "Fibonacci Iterativo(" << n << ")=" << fibo(n) << endl;
		cout << "   # Laços: " << complexidade << endl;
	}

}

//fatorial recursivo
long int fatorial(int n) {
	complexidade++;
	if(n == 0)
		return 1;
	else {
		return fatorial(n-1) * n;
	}
}

//fatorial iterativo
long int factorial(int n) {
  long int product = 1;
  while (n>0) {
		complexidade++;
    product *= n;
    --n;
  }
  return product;
}

//Fibonacci recursivo
long int fib(int n) {
	complexidade++;
	if(n<=1)
		return n;
	else  {
		return fib(n-1) + fib(n-2);
	}
}

//Fibonacci iterativo
long int fibo(int n) {
	int f1=0, f2=1, f3, i;
	for(i=0; i<n; i++){
		complexidade++;
		f3 = f1 + f2;
		f2=f1;
		f1=f3;
	}
	return f1;
}

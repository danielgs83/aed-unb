all: compararecursao fibonacci

recursao.o: recursao.cpp recursao.h
	g++ -std=c++11 -Wall -c recursao.cpp

compara_recursao.o: compara_recursao.cpp recursao.h
	g++ -std=c++11 -Wall -c compara_recursao.cpp

compararecursao: recursao.o compara_recursao.o
	g++ -std=c++11 -Wall recursao.o compara_recursao.o -o compararecursao

fibonacci.o: fibonacci.cpp recursao.h
	g++ -std=c++11 -Wall -c recursao.cpp

fibonacci: fibonacci.o recursao.o
		g++ -std=c++11 -Wall recursao.o fibonacci.o -o fibonacci

clean:
	rm -f *.o compararecursao

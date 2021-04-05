CC=g++
FLAGS=-Wall -std=c++11

all: listasimples

list.o: list.cpp list.hpp
	$(CC) $(FLAGS) -c list.cpp

list_main.o: list_main.cpp list.hpp
	$(CC) $(FLAGS) -c list_main.cpp

listasimples: list.o list_main.o
	$(CC) $(FLAGS) list.o list_main.o -o listasimples

clean:
	rm -f *.o listasimples

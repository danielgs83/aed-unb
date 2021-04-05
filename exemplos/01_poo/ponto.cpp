#include "ponto.hpp"
#include <iostream>

using namespace std;

	//exemplos de multiplos construtores - implementacoes
	Ponto::Ponto(double x, double y){
		this->x = x;
		this->y = y;
	}
	//construtor padrao
	Ponto::Ponto(){
		this->x = 0.0;
		this->y = 0.0;
	}

	void Ponto::mostraPonto(){
		cout 	<< "Coordenadas : ("
					<< x
					<< ", "
					<< y
					<< ")"
					<< endl;
	}

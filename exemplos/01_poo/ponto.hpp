#ifndef GUARD_ponto
#define GUARD_ponto

//exemplo de declaracao de classe para ponto no plano 2D
class Ponto {
	public:
		double x;
		double y;

		//exemplos de multiplos construtores
		Ponto(double, double);
		Ponto();
		//metodo
		void mostraPonto();
};
#endif

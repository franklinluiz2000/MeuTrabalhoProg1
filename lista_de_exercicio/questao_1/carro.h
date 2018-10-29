#ifndef CARRO_H
#define CARRO_H

#include<string>

class Carro
{
public:
	Carro(std::string nome, int ano, double maxGasolina, double kml);
	~Carro();

	
	void abastecer(double l);

	void mover(double km);

	double getQtdeCombustivel();

	double getDistanciaPercorrida();

	double getAutonomia();



private:

	std::string nome;
	std::string modelo;
	double gasolina, maxGasolina, consumoGasolina;
	int ano;
	double kml,km;
	
};


#endif
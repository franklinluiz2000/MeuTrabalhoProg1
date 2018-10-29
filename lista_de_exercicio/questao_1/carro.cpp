#include <iostream>
#include "carro.h"


Carro::Carro(std::string nome, int ano, double maxGasolina, double kml)
{

	this->nome = nome;
	this->ano = ano;
	this->maxGasolina = maxGasolina;
	this->kml = kml;

}

Carro::~Carro(){}


void Carro::abastecer(double l)
{
	if((this->gasolina + l) <= maxGasolina){
		this->gasolina += l;
	}
	
}

void Carro::mover(double km)
{
	if(gasolina <= 1){
		std::cout<< "Voce nao tem combustível suficiente!"<<std::endl;
	}else{
		this->km += km;
		this->gasolina -= km/kml;
	}
	
}

double Carro::getQtdeCombustivel()
{
	return gasolina;

}

double Carro::getDistanciaPercorrida()
{
	return km;

}

double Carro::getAutonomia()
{
	double autonomia = (gasolina -1) * kml;
	
	return autonomia;
}

#include<iostream>
#include<string>
#include"pessoa.h"

Pessoa::Pessoa(std::string nome, int idade, float altura)
{
	this->nome = nome;
	this->idade = idade;
	this->altura = altura;
}

Pessoa::~Pessoa(){}
	
void Pessoa::setNome(std::string nome)
{
	this->nome = nome;
}

std::string Pessoa::getNome()
{
	return this->nome;
}

void Pessoa::setIdade(int idade)
{
	this->idade = idade;
}

int Pessoa::getIdade()
{
	return this->idade;
}

void Pessoa::setAltura(float altura)
{
	this->altura = altura;
}
float Pessoa::getAltura()
{
	return this->altura;
}

std::ostream& operator<<(ostream& o, Pessoa const p)
{
	
     o << "Nome: " << p.nome <<endl<< "Idade:" << p.idade <<endl<< "Altura: " << p.altura << endl;

	
return o;
}

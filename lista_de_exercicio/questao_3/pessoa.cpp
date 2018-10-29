#include <iostream>
#include "pessoa.h"

#include <string.h>

using namespace std;

Pessoa::Pessoa()
{
    this->nome = "";
    this->idade = 0;
    this->altura = 0.0;
}

Pessoa::Pessoa(string nome, int idade, float altura)
{
    this->nome = nome;
    this->idade = idade;
    this->altura = altura;
    
}

string Pessoa::getNome(){ return this->nome; }
int Pessoa::getIdade(){ return this->idade; }
float Pessoa::getAltura(){ return this->altura; }

void Pessoa::setNome(string nome)
{
    this->nome = nome;
}

void Pessoa::setIdade(int idade)
{
    this->idade = idade;
}

void Pessoa::setAltura(float altura)
{
    this->altura = altura;
}

std::ostream& operator<< (std::ostream &o, Pessoa const pessoa)
{
    o << "Pessoa: " << pessoa.nome <<", idade: "<<pessoa.idade << ", altura: " << pessoa.altura;
    return o;
}
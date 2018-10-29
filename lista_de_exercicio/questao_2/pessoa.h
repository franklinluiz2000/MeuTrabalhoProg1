#ifndef PESSOA_H
#define PESSOA_H

#include<string>
using namespace std;

class Pessoa
{
public:
	Pessoa(std::string nome, int idade, float altura);
	~Pessoa();
	
	void setNome(std::string nome);
	std::string getNome();

	void setIdade(int idade);
	int getIdade();

	void setAltura(float altura);
	float getAltura();

	friend std::ostream& operator<<(ostream& o, Pessoa const p);

private:
	std::string nome;
	int idade;
	float altura;
};
#endif

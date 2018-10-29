#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa{
    private:
        std::string nome;
        int idade;
        float altura;
    public:
        Pessoa();
        Pessoa(std::string nome, int idade, float altura);
        int getIdade();
        void setIdade(int idade);

        float getAltura();
        void setAltura(float altura);

        std::string getNome();
        void setNome(std::string);

        friend std::ostream &operator<< (std::ostream &o, Pessoa const p);
};

#endif

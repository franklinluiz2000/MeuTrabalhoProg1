#ifndef AGENDA_H
#define AGENDA_H

#include <vector>
#include <string.h>
#include "pessoa.h"

class Agenda{
    private:
        std::vector<Pessoa*> contatos;
        int total_contatos;
    public:
        Agenda();
        void insereContato(std::string nome, int idade, float altura);
        void removeContato(std::string nome);
        int buscaContato(std::string nome);
        void listaContato(char letra = ' ');

        void imprimeContato(int i);
}; 

#endif
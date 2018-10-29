#include <iostream>
#include "agenda.h"
#include "pessoa.h"
#include <string.h>
#include <vector>

using namespace std;

Agenda::Agenda(){
}

void Agenda::insereContato(string nome, int idade, float altura)
{
    if(this->total_contatos==100) return;
    Pessoa* p = new Pessoa(nome, idade, altura);
    this->contatos.push_back(p);
}

void Agenda::removeContato(string nome)
{
    for (std::vector<Pessoa*>::iterator it = this->contatos.begin() ; it != this->contatos.end(); ++it)
    {
        if((*it)->getNome() == nome)
        {
            this->contatos.erase(it);
        }
    }
}

int Agenda::buscaContato(std::string nome)
{
    int i = 0;
    for (std::vector<Pessoa*>::iterator it = this->contatos.begin() ; it != this->contatos.end(); ++it)
    {
        if((*it)->getNome() == nome)
        {
            return i;
        }
        i++;
    }
    return -1;
}

void Agenda::listaContato(char letra)
{
    for (std::vector<Pessoa*>::iterator it = this->contatos.begin() ; it != this->contatos.end(); ++it)
    {
        if(letra==(char)' ' || (*it)->getNome()[0] == letra)
        {
            cout << *(*it) << endl;
        }
    }
}

void Agenda::imprimeContato(int i)
{
    if(this->contatos.at(i) != NULL)
        cout << *this->contatos[i] <<endl;
}
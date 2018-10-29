#include <iostream>

#include "livro.h"
#include "biblioteca.h"
#include <vector>

using namespace std;

Biblioteca::Biblioteca()
{}

void Biblioteca::adicionarLivro(Livro* l)
{
    this->livros.push_back(l);
}

Livro* Biblioteca::buscarLivroPorNome(std::string titulo)
{
    for (std::vector<Livro*>::iterator it = this->livros.begin() ; it != this->livros.end(); ++it)
    {
        if((*it)->getTitulo() == titulo)
        {
            return (*it);
        }
    }
    return NULL;
}

bool Biblioteca::contemLivro(Livro* livro)
{
    for (std::vector<Livro*>::iterator it = this->livros.begin() ; it != this->livros.end(); ++it)
    {
        if((*it)->getTitulo() == livro->getTitulo() && (*it)->getAutor()==livro->getAutor())
        {
            return true;
        }
    }
    return false;
}

Livro* Biblioteca::buscarLivroPorISBN(std::string isbn)
{
    for (std::vector<Livro*>::iterator it = this->livros.begin() ; it != this->livros.end(); ++it)
    {
        if((*it)->getISBN() == isbn)
        {
            return (*it);
        }
    }
    return NULL;
}

bool Biblioteca::alugarLivro(std::string isbn)
{
    Livro* l = this->buscarLivroPorISBN(isbn);
    if(l==NULL)
    {
        cout << "Livro não disponível" << endl;
        return false;
    }

    for (std::vector<Livro*>::iterator it = this->livrosAlocados.begin() ; it != this->livrosAlocados.end(); ++it)
    {
        if((*it)->getISBN() == isbn)
        {
            cout << "Livro já alugado" << endl;
            return false;
        }
    }

    this->livrosAlocados.push_back(l);
    return true;
}

int Biblioteca::getLivrosDisponiveis()
{
    return this->livros.size() - this->livrosAlocados.size();
}
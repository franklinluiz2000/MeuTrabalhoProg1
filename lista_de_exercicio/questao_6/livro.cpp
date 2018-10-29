#include <iostream>
#include "livro.h"

using namespace std;

Livro::Livro(std::string titulo_m, std::string autor_m, std::string editora_m, std::string isbn_m, int ano_m)
: titulo(titulo_m),autor(autor_m), editora(editora_m), isbn(isbn_m), ano(ano_m)
{
}

Livro::Livro()
{
}

void Livro::setTitulo(string titulo)
{
    this->titulo = titulo;
}

string Livro::getTitulo()
{
    return this->titulo;
}

void Livro::setAutor(string autor)
{
    this->autor = autor;
}

string Livro::getAutor()
{
    return this->autor;
}

void Livro::setEditora(string editora)
{
    this->editora = editora;
}

string Livro::getEditora()
{
    return this->editora;
}

void Livro::setISBN(string isbn)
{
    this->isbn = isbn;
}

string Livro::getISBN()
{
    return this->isbn;
}

void Livro::setAno(int ano)
{
    this->ano = ano;
}

int Livro::getAno()
{
    return this->ano;
}

std::ostream& operator<< (std::ostream &o, Livro const livro)
{
    o << "Nome: " << livro.titulo <<", ano: "<< livro.ano << ", editora: " << livro.editora
    << ", ISBN" << livro.isbn << ", autor:" << livro.autor;
    return o;
}
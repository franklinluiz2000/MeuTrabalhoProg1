#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <string>
#include "livro.h"
#include <vector>

class Biblioteca{
private:
    std::vector<Livro*> livros;
    std::vector<Livro*> livrosAlocados;
public:
    Biblioteca();

    void adicionarLivro(Livro* l);
    Livro* buscarLivroPorNome(std::string nome);
    Livro* buscarLivroPorISBN(std::string isbn);
    bool alugarLivro(std::string isbn);
    bool contemLivro(Livro* livro);
    int getLivrosDisponiveis();
};
#endif
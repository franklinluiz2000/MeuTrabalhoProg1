#ifndef LIVRO_H
#define LIVRO_H

#include <string>

class Livro{

private:
    std::string titulo, autor, editora, isbn;
    int ano;
public:
    Livro(std::string titulo, std::string autor, std::string editora, std::string isbn, int ano);
    Livro();

    std::string getTitulo();
    void setTitulo(std::string titulo);

    std::string getAutor();
    void setAutor(std::string autor);

    std::string getEditora();
    void setEditora(std::string editora);

    std::string getISBN();
    void setISBN(std::string isbn);

    int getAno();
    void setAno(int ano);

    friend std::ostream &operator<< (std::ostream &o, Livro const l);
};
#endif
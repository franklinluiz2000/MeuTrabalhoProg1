#ifndef BINGO_H
#define BINGO_H
#include"sorteadora.h"
#include"cartela.h"
#include"jogador.h"

class Bingo
{
private:
     
     Jogador* vencedor;

public:
     Bingo();
     Jogador* getVencedor();
     void AddJogador(joagador* novo);
     void run();
     void imprimirVencedor();
     Cartela* imprimirCartela();
     bool desativarNumero();
};

#endif



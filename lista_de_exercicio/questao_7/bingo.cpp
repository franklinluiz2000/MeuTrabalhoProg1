#include<iostream>

#include"sorteadora.h"
#include"jogador.h"
#include"cartela.h"


Bingo::Bingo()

Jogador* getVencedor()
{
     retrun this->vencedor;
}

void AddJogador(joagador* novo)
{
     lista_jogadores.push_back(novo);
}

void Bingo::run()
{
     Jogador* nome->getNumerodaCartela();

    


}

void Bingo::imprimirVencedor()
{

     cout << "O vencedor é : " << this->vencedor->getNome() << endl; 

}

Cartela* iprimirCartelaSorteada()
{
 
    for(int i = 0; i <= MAX_NUMEROS; i++)
    {    
         cout << "Numeros da cartela sorteada : " << this->vencedor->cartela_jogador[i] << "\t";

    }
}

bool Bingo::desativarNumero()
{




}

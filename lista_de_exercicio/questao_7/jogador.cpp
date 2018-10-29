#include<iostream>
 #include<vector>

#include"cartela.h"
#include"sorteadora.h"

Jogador::Jogador(std::string nome){this->nome = nome}


std::vector<int> getNumerodaCartela()
{
   for(int i = 0; i < MAX_NUMEROS; i++)
   {
        this->cartela_jogador.push_back(getNumero());

   }
      
}

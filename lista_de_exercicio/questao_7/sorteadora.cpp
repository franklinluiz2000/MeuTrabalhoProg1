#include<iostream>

#include"sorteadora.h"

Sorteadora::Sorteadora(int num)
{
   this->num = std::round(dis(gen));
   return this->num;

}

int Sorteadora::getNumero(){return this->num;}
   

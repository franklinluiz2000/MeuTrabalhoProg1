#ifndef SORTEADORA_H
#define SORTEADORA_H


class sorteadora
{
private:
     int num;
     std::default_random_engine gen;
     std::uniform_int_distribution<int> dis(1,100);

public:
     Sorteadora(int num);
     int getNumero();

};

#endif

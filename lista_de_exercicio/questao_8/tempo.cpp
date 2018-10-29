#include<iostream>
#include<ctime>
#include"tempo.h"

using namespace std;

void Tempo::lerTempo()
{
   std::time_t t = std::time(0);
   std::tm* now = std::localtime(&t);
   this->hh = now->tm_hour;
   this->mm = now->tm_min;
   this->ss = now->tm_sec;
   
}

int Tempo::converterSegundos()
{
   int horario = (hh*60*60)+(mm*60)+(ss);
   return horario;
}

void Tempo::mostrarTempo()
{
   cout<<"Hora atual: "<<hh<<":"<<mm<<":"<<ss<<endl;
   cout<<"Convertendo em segundos: "<<converterSegundos()<<" segundos"<<endl;
   
}


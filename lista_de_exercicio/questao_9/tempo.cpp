#include<iostream>
#include<ctime>
#include"tempo.h"

using namespace std;
/*
Tempo::Tempo()//int h, int m, int s)
{
   this->hh = hh;
   this->mm = mm;
   this->ss = ss;
}

void Tempo::lerTempo()
{
   std::time_t t = std::time(0);
   std::tm* now = std::localtime(&t);
   this->hh = now->tm_hour;
   this->mm = now->tm_min;
   this->ss = now->tm_sec;
   
}*/

int Tempo::converterSegundos()
{
   cout<<"teste em horas "<<hh<<":"<<mm<<":"<<ss<<endl;
   int horario = (hh*60*60)+(mm*60)+(ss);
   return horario;
}

void Tempo::mostrarTempo()
{  cin>>hh>>mm>>ss;
   cout<<"Hora atual: "<<hh<<":"<<mm<<":"<<ss<<endl;
      
}

std::istream &operator>>(std::istream &i, Tempo &t)
{
   i >> t.hh >> t.mm >> t.ss;
   return i;

}

std::ostream &operator<<(std::ostream &o, Tempo const t)

{
   
   o<<"Convertendo em segundos: "<< t.hh << t.mm << t.ss << endl;
   return o;

}

#include<iostream>
#include<ctime>
#include"data.h"

using namespace std;

Data::Data()
{
   std::time_t t = std::time(0);
   std::tm* now = std::localtime(&t);
   this->ano = (now->tm_year + 1900);
   this->mes = (now->tm_mon + 1);
   this->dia = (now->tm_mday);
  
}


Data::Data(int dia, int mes, int ano)
{
   this->dia = dia;
   this->mes = mes;
   this->ano = ano;
}

int Data::getDia()
{return this->dia;}

void Data::setDia(int dia)
{this->dia = dia;}

int Data::getMes()
{return this->mes;}

void Data::setMes(int mes)
{this->mes = mes;}

int Data::getAno()
{return this->ano;}

void Data::setAno(int ano)
{this->ano = ano;}

void Data::somarDias(int d)
{
  this->dia = this->dia + d;
  if(this->dia > 30)
     {
        int m = this->dia / 30;
        this->dia = this->dia % 30;
        this->mes = mes + m;
        if(this->mes > 12);
        {
          int a = this->mes / 12;
          this->mes = this->mes % 12;
           this->ano = ano + a;
        }
     } 
}
void Data::somarMeses(int m)
{
   this->mes = mes + m;
   if(mes > 12)
   {
      int a = mes / 12;
      this->mes = this->mes % 12;
      this->ano = ano + a;
   }
}
void Data::somarAnos(int a)
{
   this->ano = ano + a;
}
int Data::proximoDia()
{
   std::time_t t = std::time(0);
   std::tm* now = localtime(&t);
   this->dia = (now->tm_mday);
   this->dia = dia + 1;
   return dia;  
}

std::ostream &operator<<(std::ostream &o,Data const dt)
{
   o <<"A nova data após a adição de dias, meses e anos:"<<endl<<"Data: "<< dt.dia << "/" << dt.mes << "/" << dt.ano<<endl;
   return o;
}


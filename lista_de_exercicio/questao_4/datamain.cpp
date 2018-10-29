#include<iostream>
#include"data.h"

using namespace std;

int main()
{  
   int d,m,a;              
   Data dt;
   cout<<"Hoje: "<<dt.getDia()<<"/"<<dt.getMes()<<"/"<<dt.getAno()<<endl;
   cout<<"Amanhã: "<<dt.proximoDia()<<"/"<<dt.getMes()<<"/"<<dt.getAno()<<endl;
   
   cout<<"Adicione a quantidade de dias: ";
   cin>> d;
   cout<<"Adicione a quantidade de meses: ";
   cin>> m;
   cout<<"Adicione a quantidade de anos: ";
   cin>> a;

   dt.somarDias(d);
   dt.somarMeses(m);
   dt.somarAnos(a);
   cout<< dt;

return 0;
}






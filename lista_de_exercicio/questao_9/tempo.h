#ifndef TEMPO_H
#define TEMPO_H

class Tempo
{
private:

   int hh,mm,ss;

public:
  // Tempo();//int h, int m, int s);   

   void lerTempo();

   int converterSegundos();

   void mostrarTempo();

   friend std::ostream &operator<<(std::ostream &o, Tempo const t); 

   friend std::istream &operator>>(std::istream &i, Tempo &t);
};

#endif

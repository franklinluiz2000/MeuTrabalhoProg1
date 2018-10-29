#include <iostream>
#include <string.h>
#include "agenda.h"
#include "pessoa.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Agenda* agenda = new Agenda();
    agenda->insereContato("Bolsonaro", 57, 1.77);
    agenda->insereContato("haddade", 44, 1.79);
    agenda->insereContato("Lula", 60, 1.76);
    cout << "all: "<<endl;
    agenda->listaContato();
    cout << "______" << endl;
    agenda->imprimeContato(0);
    agenda->removeContato("Lula");
    agenda->imprimeContato(0);
    return 0;
}

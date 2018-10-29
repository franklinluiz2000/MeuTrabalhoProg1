#include <iostream>
#include <string>
#include "livro.h"
#include "biblioteca.h"

#include <cassert>

using namespace std;

int main(int argc, char const *argv[])
{
	Livro* l1 = new Livro("um titulo random", "mateus", "editora random", "134-454-45454", 2010);
	Livro* l3 = new Livro("um titusdslo rasdsdndom", "msdateus", "edsditora random", "177-477-45454", 2005);
	Livro* l2 = new Livro("um titulo random2", "mateus2", "editora random2", "173-452-47754", 2012);
	Biblioteca* b = new Biblioteca();
	b->adicionarLivro(l1);
	b->adicionarLivro(l2);
 
	assert(b->contemLivro(l1));
	cout << "contem l1, ok!" << endl;
	assert(b->contemLivro(l3)==false);
	cout << "não contem l3, ok!" << endl;

	Livro* l = b->buscarLivroPorNome("um titulo random");
	assert(l!=NULL);

	assert(l->getAno() == 2010);
	cout << "find l, ok!" << endl;

	Livro* temp = b->buscarLivroPorISBN("134-454-45454");
	assert(temp->getAno() == 2010);
	cout << "find by isbn, ok!" << endl;

	assert(b->getLivrosDisponiveis() == 2);

	b->alugarLivro("134-454-45454");

	assert(b->getLivrosDisponiveis() == 1);

	cout << "FINISH, OK!" << endl;
	return 0;
}
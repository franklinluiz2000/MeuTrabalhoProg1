#ifndef DATA
#define DATA

class Data
{
private:
	int dia;
	int mes;
	int ano;

public:
 
	Data();
	Data(int dia, int mes, int ano);
	
	int getDia();
	void setDia(int dia);

	int getMes();
	void setMes(int mes);

	int getAno();
	void setAno(int ano);
	
	void somarDias(int d);
	void somarMeses(int m);
	void somarAnos(int a);

	int proximoDia();

	friend std::ostream &operator<<(std::ostream &o,Data const dt);


};

#endif

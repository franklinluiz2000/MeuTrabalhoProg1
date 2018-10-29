#include<iostream>

using namespace std;

class Pessoa
{
private://observaçao no mudado para private
    string m_nome;
    int m_idade;

public:
    Pessoa(string nome, int idade):m_nome(nome),m_idade(idade){};//faltava o inicializador da idade solução adicionar 
    ~Pessoa(){};
  
    string getNome(){return m_nome;};
    int getIdade(){return m_idade;};

};

class Empregado:private Pessoa
{
private:
    string m_matricula;
    double m_salario;

public:
    Empregado(string nome, int idade, string matricula, double salario):
       Pessoa(nome,idade), m_matricula(matricula), m_salario(salario){};
    ~Empregado(){};
  
    string getMatricula(){return m_matricula;};    
    double getSalario(){return m_salario;};
    using Pessoa::getNome;//usando sobrecarga de função que passam a chamada para Pessoa
    using Pessoa::getIdade;//usando sobrecarga de função que passam a chamada para Pessoa
    
};

class Aluno:public Pessoa
{
private:
    string m_matricula;

public:
    Aluno(string nome, int idade,string matricula):
        Pessoa(nome,idade),m_matricula(matricula){};
    ~Aluno(){};
  //metodo criado para mostrar valor dos atributos da classe
    string getMatricula(){return m_matricula;};
    void imprimeAluno()
    {
     cout<<"Nome: "<< getNome() <<endl<< "idade: " << getIdade() <<endl
     << "Matriccula: " << m_matricula <<endl<<endl;

     }
};

class Vendedor:private Empregado
{
private:
    double m_meta_mensal;
    double m_desconto_nivel1;

public:
    Vendedor(string nome,int idade, string matricula,double salario, 
    double meta, double desconto):
    Empregado(nome,idade,matricula,salario),m_meta_mensal(meta),m_desconto_nivel1(desconto){};
    ~Vendedor(){};
   
    double getMetaMensal(){return m_meta_mensal;};
    double getDescontoN1(){return m_desconto_nivel1;};

};

class Gerente:private Empregado
{
private:
    string m_setor;
    double m_desconto_nivel2;

public:
    Gerente(string nome, int idade, string matricula, double salario, string setor, double desconto)://retirado o argumento meta,pois atributo não herdado da classe Vendedor
    Empregado(nome, idade, matricula, salario), m_setor(setor), m_desconto_nivel2(desconto){};
    ~Gerente(){};

    string getSetor(){return m_setor;};
    double getDescontoN2(){return m_desconto_nivel2;};

    void imprimeDados()
    {
       cout << "Nome: " << getNome()  << endl    //m_nome mudado para getNome() 
       << "Idade: " << getIdade() << endl       //m_idade mudado para getIdade()
       << "Matricula: " << getMatricula() << endl 
       << "Salario: " << getSalario() << endl 
       << "Setor: " << m_setor << endl 
       << "Desconto N2: " << m_desconto_nivel2 << endl;
    };

};

int main(int argc, char const *argv[])
{
   Aluno a("maria de Lourdes", 22, "98765432-1");
   a.imprimeAluno();//adicionado para chamar a função imprimir os dados do aluno
   Gerente g("Emiliano Emilio", 45, "666000666-1", 5780.00, "Departamento Financeiro", 7.5);
   g.imprimeDados();
   return 0;
}
/* Resumo:  
   Da forma que estava não teria como m_nome na linha 90 e m_idade da linha 91 acessar a classe pessoa tem dois metodos de resolver esse problema uma forma era mudar a herança da classe gerente para public pois estava declarado como privado e assim não podiamos ter acesso aos atributos da classe pessoa e a outra forma é usar o using Pessoa::getNome() e using Pessa::getIade() para nome e para idade, assim quando quisermos usar o getNome() ou getIdade() ele erá me permitir esse acesso sem precisar mudar a herança para public.
   Outra modificação foi na instanciação do objeto ele passava 6 argumentos, quando no construtor de Gerente pedia 7 por isso foi apagado a inicialização de meta para essa classe, e foi criado tambem um metodo imprime aluno ja que no momento que este objeto era criado não havia acesso a classe de gerente.  */


#ifndef PAGAMENTO_H
#define PAGAMENTO_H

#include <string>

using namespace std;

class Pagamento()
{  
     private:
	double valorPagamento;
	string nomeDoFuncionario;
     public:   
	void setValorPagamento( double valor );
	void setNomeDoFuncionario( string nome );
	
	double getValorPagamento();
	string getNomeDoFuncionario();

};

#endif

#include <iostream>
#include <string>

#include "ControledePagamentos.h"
#include "Pagamento.h"
using namespace std;

int main()
{
        ControledePagamentos cp;
	Pagamento p;
	p.setNomeDoFuncionario("José");
	p.setValorPagamento(200.00);

	Pagamento p2;
	p2.setNomeDoFuncionario("Maria");
	p2.setValorPagamento(200.00);

	cp.setPagamentos(p);
	cp.setPagamentos(p2);
	
	cout << cp.calculaTotalDePagamentos() << endl;
	if( cp.existePagamentoParaFuncionario( "Joao" ) {
		cout << "Existe pagamento" << endl;
	} else {
		cout << "Nao existe pagamento";
	}
}




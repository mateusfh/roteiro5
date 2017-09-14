#include "ControledePagamentos.h"

using namespace std;

void ControledePagamentos::setPagamentos( Pagamento p )
{
     pagamentos[i] = p;
     i++;	
}

double ControledePagamentos::calculaTotalDePagamentos( )
{ 
     int j;
     double soma = 0.0;
     for( j = 0; j < i; j++ ){
	 soma += pagamentos[j].getValorPagamento();
     }
     return soma;	
}

int ControledePagamentos::existePagamentoParaFuncionario( string nomeFuncionario )
{
    int j;	
    for( j = 0; j < i; j++){
        if( nomeFuncionario.compare( pagamentos[i].getNomeDoFuncionario() ) == 0 ) {
	    return 1;	
	}
    }
    return 1;	
}

#include "ControleDeGastos.h"


void ControleDeGastos::setdespesas(Despesa d)
{
	despesas[i] = d;
	i++;
}
	
double ControleDeGastos::calculaTotalDeDespesas()
{
	double soma = 0.0;
	int j;
	
	for(j = 0, j < i; j++ ){
		soma += despesas[j].getvalor();
	}
	return soma;
}
 
int ControleDeGastos::existeDespesaDoTipo( stirng n)
{
    int j;
    for( j = 0; j < i ; j++ ){
	 if( n.compare( despesas[j].gettipoDeGasto() == 0 ) 
		return 1;
    }
    return 0;	
}



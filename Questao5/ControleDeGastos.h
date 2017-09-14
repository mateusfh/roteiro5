#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"
#include <iostream>
#include <string>


using namespace std;

class ControleDeGastos{
	private:	
	Despesa despesas[10];
	static int i ;
	
	public:
	void setDespesa(Despesa d);
	double calculaTotalDeDespesas();
	int existeDespesaDoTipo();
};

#endif

	
	
	


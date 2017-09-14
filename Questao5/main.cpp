#include "Despesa.h"
#include "ControleDeGastos.h"
#include <iostream>
#include <string>

using namespace std;

int main(void)
{	
	ControleDeGastos cg;	
	Despesa d1,d2;
	d1.setvalor(50);
	d1.settipoDeGasto("gas");
	d2.setvalor(100);
	d2.settipoDeGasto("agua");

	cg.setDespesa(d1);
	cg.setDespesa(d2);

	cout << "Total de despesas: " << cg.calculaTotalDeDespesas() << endl;



}

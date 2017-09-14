#ifndef DESPESA_H
#define DESPESA_H

#include <iostream>
#include <string>


using namespace std;

class Despesa{
	private:
		double valor;
		string tipoDeGasto;

	public:
	 	void setvalor(double Valor);
		double getvalor();
		void settipoDeGasto(string TipoDeGasto); 
		string gettipoDeGasto();
};
#endif



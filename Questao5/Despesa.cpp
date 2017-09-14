#include "Despesa.h"

void Despesa::setvalor(double V)
{
	valor = V;
}

void Despesa::settipoDeGasto(string TipoDeGasto)
{
	tipoDeGasto = TipoDeGasto;
}

double Despesa::getvalor()
{
	return valor;
}

string Despesa::gettipoDeGasto()
{
	return tipoDeGasto;
}




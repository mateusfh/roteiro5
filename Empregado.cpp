#include "Empregado.h"

Empregado::Empregado( string n, string s, double sal)
{
    this->setNome(n);
    this->setSobrenome(s);
    this->setSalario(sal);
}

double Empregado::getSalario(){ return salario;}
string Empregado::getNome(){ return nome;}
string Empregado::getSobrenome(){ return sobrenome; }

void Empregado::setNome( string n){ nome = n; }
void Empregado::setSobrenome( string s ){ sobrenome = s; }
void Empregado::setSalario( double sal){
    if( sal > 0)
        salario = sal;
    else{
        salario = 0;
    }
}

#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

using namespace std;

class Empregado
{
    public:
        double getSalario();
        string getNome();
        string getSobrenome();

        void setSalario( double sal);
        void setNome( string n);
        void setSobrenome( string s);

        Empregado(string n, string s, double sal);

    private:
        string nome, sobrenome;
        double salario;
};

#endif // EMPREGADO_H

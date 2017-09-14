#ifndef DATA_H
#define DATA_H

#include <iostream>

using namespace std;


class Data{
     private:
        int dia;
        int mes;
        int ano;

     public:
        // Construtores Get:
            int getDia();
            int getMes();
            int getAno();
        // Construtores Set:
            void setDia( int x );
            void setMes( int y );
            void setAno( int z );
        // Metodo Avanca Dia:
            void avancarDia();
            int ehBissexto(int ano);
            int valida( int x, int y, int z );
            Data( int d, int m, int a);

};

#endif // DATA_H

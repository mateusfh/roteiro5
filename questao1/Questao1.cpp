#include <cstdlib>
#include <iostream>

#include "Data.h"

using namespace std;

int main()
{
    Data d = Data( 1, 1, 2012 );

    cout << d.getDia() << "/" << d.getMes() << "/" << d.getAno() << endl;
    d.avancarDia();
    cout << d.getDia() << "/" << d.getMes() << "/" << d.getAno() << endl;

    return 0;
}

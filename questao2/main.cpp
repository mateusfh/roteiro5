#include <cstdlib>
#include <iostream>
#include "Invoice.h"

using namespace std;

int main()
{
    Invoice i = Invoice(1,100, "eh_isso_ai", 20.00);

    cout << i.getNumero() << endl;
    cout << i.getQuantidade() << endl;
    cout << i.getDescricao() << endl;
    cout << i.getPreco() << endl;

    return 0;
}

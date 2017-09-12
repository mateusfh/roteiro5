#include <iostream>
#include "../Empregado.h"

using namespace std;

int main()
{
    Empregado e = Empregado("Jose", "da Silva", 1000);
    cout << e.getNome() << " " << e.getSobrenome() << " recebe: " << e.getSalario() << endl;

    Empregado f = Empregado("Joao", "da Silva", -1000);
    cout << f.getNome() << " " << f.getSobrenome() << " recebe: " << f.getSalario() << endl;
    return 0;
}

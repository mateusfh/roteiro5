#ifndef CONTROLEDEPAGAMENTOS_H
#define CONTROLEDEPAGAMENTOS_H

#include <string>
using namespace std;

class ControledePagamentos
{
      private:
	  Pagamento pagamentos[10];
	  int i = 0;

      public:
	  void setPagamentos( Pagamento p);
	  double calculaTotalDePagamentos();
          int existePagamentoParaFuncionario( string nomeFuncionario );
};

#endif

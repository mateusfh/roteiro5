#include "Pagamento.h"

void Pagamento::setValorPagamento( double valor )
{
      valorPagamento = valor;
}

void Pagamento::setNomeDoFuncionario( string nome )
{
      nomeDoFuncionario = nome;
}

double Pagamento::getValorPagamento()
{
      return valorPagamento;
}

string Pagamento::getNomeDoFuncionario()
{    
      return nomeDoFuncionario;
}

#include "Invoice.h"

int    Invoice::getQuantidade(){ return quantidade;  }
int    Invoice::getNumero(){ return numero; }
double Invoice::getPreco(){ return preco; }
char  *Invoice::getDescricao(){ return descricao; }

void   Invoice::setDecricao( char* d ){
       descricao = d;
}
void   Invoice::setNumero( int n ){
       numero = n;
}
void   Invoice::setQuantidade( int q ){
       quantidade = q;
}
void   Invoice::setPreco( double p ){
       preco = p;
}

double Invoice::getInvoceAmount(int x, double y){
     if( x < 0  || y < 0 ){ return 0; }
     else{
          return x*y;
     }
}

Invoice::Invoice( int n, int q, char *d, double p){
	setDecricao(d);
	setNumero(n);
	setQuantidade(q);
	setPreco(p);
}

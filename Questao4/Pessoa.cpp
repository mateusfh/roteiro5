#include "Pessoa.h"

Pessoa::Pessoa( string n)
{
    this->setNome(n)
}

Pessoa::Pessoa( string n, int i, string t){
    this->setNome(n);
    this->setIdade(i);
    this->setTelefone(t);
}

int Pessoa::getIdade(){ return idade; }
string Pessoa::getNome(){ return nome; }
string Pessoa::getTelefone(){ return telefone; }

void Pessoa::setIdade( int i){
    idade = i;
}
void Pessoa::setNome( string n){
    nome = n;
}
void Pessoa::setTelefone( string t){
    telefone = t;
}

Pessoa::~Pessoa()
{
    //dtor
}

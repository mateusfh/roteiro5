#ifndef PESSOA_H
#define PESSOA_H


class Pessoa
{
    public:
        Pessoa( string nome);
        Pessoa( string n, int i, string t);
        void setNome( string n) ;
        void setTelefone( string t);
        void setIdade(int i);
        int getIdade();
        string getNome();
        string getTelefone();
    protected:

    private:
        string nome;
        int idade;
        string telefone;
};

#endif // PESSOA_H

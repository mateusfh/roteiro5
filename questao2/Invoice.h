#ifndef INVOICE_H
#define INVOICE_H


class Invoice{
      public:
        // Contrutores:
            int getNumero();
            int getQuantidade();
            char *getDescricao();
            double getPreco();

            void setNumero( int numero);
            void setQuantidade( int quantidade);
            void setDecricao( char *descricao);
            void setPreco( double preco);

        // Metodo:
            double getInvoceAmount( int x, double y );
	    Invoice(int n, int q, char *d, double p);

      private:
        int numero;
        char *descricao;
        int quantidade;
        double preco;

};


#endif // INVOICE_H

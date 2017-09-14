#include "Data.h"

int Data::getDia(){ return dia; }
int Data::getMes(){ return mes; }
int Data::getAno(){ return ano; }

void Data::setDia( int x ){ dia = x; }
void Data::setMes( int y ){ mes = y; }
void Data::setAno( int z ){ ano = z; }

int Data::ehBissexto(int ano){
    if(( ano % 4 == 0 ) && ( ano % 100 != 0 )){
        return 1;
    }
    return 0;
}

int Data::valida(int x, int y, int z){
    if( x < 1 || x > 31 && y < 1 || y > 12 ){
        return 0;
    }else{
        if( y == 2 && x > 29){ return 0; }
        if(( y == 4 || y == 6 || y == 9 || y == 11 ) && x > 30 ){ return 0; }
        return 1;
    }
}

Data::Data( int d, int m, int a){
     if ( valida( d, m, a )){
          dia = d;
          mes = m;
          ano = a;
     }else{
          cout << "DATA INVALIDA!" << endl;
     }
}

void Data::avancarDia(){
     if( mes == 4 || mes == 6 || mes == 9 || mes == 11){
         if( dia == 30 ) {
             dia = 1;
             mes++;
         }
         else{ dia++; }
     }
     if( mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
         if( dia == 31 ) {
             dia = 1;
             mes++;
         }
         else{ dia++; }
     }

     if( mes == 2){
         if( ehBissexto(ano) ){
             if(dia == 29){
                 dia = 1;
                 mes++;
             }else{ dia++; }
         }else{
             if(dia == 28){
                 dia = 1;
                 mes++;
             }else{ dia++; }
         }
     }

     if ( mes > 12 ){ mes = 1; ano++; }
}


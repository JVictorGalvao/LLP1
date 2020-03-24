#include <iostream>

#include "ContaCorrente.h"
#include "Poupanca.h"
#include "ContaEspecial.h"

using namespace std;

int main(){

    ContaCorrente c1("Joao",111111,2500,2000,10000);
    
    c1.definirLimite();
    cout << "Limite de João: "<< c1.getLimite() << endl;

    Poupanca p1("Victor",222222,5000,3500,10256);

    p1.setTaxaRendimento(21);
    cout << "Rendimentos de Victor: "<< p1.render() <<endl;

    ContaEspecial ces1("Rodrigues",333333,3250,1024,10000);

    ces1.definirLimite();
    cout <<"Limite de Rodrigues: "<< ces1.getLimite() << endl;

   
    return 0;
}
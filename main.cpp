#include <iostream>
#include "dominios.hpp"

using namespace std;

int main()
{
    // Provisório
    int valor_teste = 3; // Válido
    //int valor_teste = -1; //Invádio
    //int valor_teste = 10; // Inválido
    //char valor_teste = '3'; // ? -> Inválido
    Avaliacao avaliacao;
    if (avaliacao.setValor(valor_teste))
        cout << "Valor = " << avaliacao.getValor() << endl;
    else
        cout << "Valor inválido" << endl;
}

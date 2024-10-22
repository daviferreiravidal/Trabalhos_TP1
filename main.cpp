#include <iostream>
#include <iomanip> // Include for setting precision
#include "dominios.hpp"

using namespace std;

int main()
{
    // Provisório

    // AVALIAÇÃO --------------------------------------------------
    // ------------------------------------------------------------
    int valor_teste = 3; // Válido
    //int valor_teste = -1; //Invádio
    //int valor_teste = 10; // Inválido
    //char valor_teste = '3'; // ? -> Inválido
    Avaliacao avaliacao;
    if (avaliacao.setValor(valor_teste))
        cout << "Valor = " << avaliacao.getValor() << endl;
    else
        cout << "Valor inválido" << endl;


    // DINHEIRO ---------------------------------------------------
    //float valor_teste2 = 2003.50; // Válido
    double valor_teste2 = 199999.99;// Válido
    //float valor_teste2 = 200000.01;// Inválido
    //int valor_teste2 = 23000;// ? -> Válido
    //int valor_teste2 = 5000.99;// ? -> Válido 
    Dinheiro dinheiro;
    if (dinheiro.setValor(valor_teste2))
        // "setprecision": necessário para evitar arredondamentos indesejados
        cout << "Valor = " << fixed << setprecision(2) << dinheiro.getValor() << endl;
    else
        cout << "Valor inválido" << endl;
    // ------------------------------------------------------------
}

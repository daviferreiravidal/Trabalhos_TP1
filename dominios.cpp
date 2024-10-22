// DEFINIÇÃO DAS CLASSES/DOMÍNIOS

#include <iostream>
#include "dominios.hpp"

using namespace std;

// AVALIAÇÃO -----------------------------------------------------
bool Avaliacao::validar(int v)
{
    // Precisa validar se o input é do tipo certo?
    if (v >= 0 && v <= 5)
        return true;
    return false;
}

bool Avaliacao::setValor(int v)
{
    if (!validar(v))
        return false;

    valor = v;
    return true;
}

int Avaliacao::getValor() const
{
    return valor;
}
// ---------------------------------------------------------------

// DINHEIRO ------------------------------------------------------
bool Dinheiro::validar(int v)
{
    if (v >= 0 && v <= 20000000)
        return true;
    return false;
}

bool Dinheiro::setValor(double v)
{
    int novo_valor = static_cast<int>(v * 100);
    if (!validar(novo_valor))
        return false;
    valor = novo_valor;
    return true;
}

double Dinheiro::getValor() const
{
    return static_cast<double>(valor) / 100;
}

// ---------------------------------------------------------------


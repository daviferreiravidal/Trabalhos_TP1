// DEFINIÇÃO DAS CLASSES/DOMÍNIOS

#include <iostream>
#include "dominios.hpp"

using namespace std;

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

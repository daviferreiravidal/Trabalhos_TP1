// DEFINIÇÃO DAS CLASSES/DOMÍNIOS

#include <iostream>
#include <cmath>
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

bool Dinheiro::setValor(float v)
{
    int novo_valor = static_cast<int>(floor(v * 100));
    cout << v << " | " << floor(v * 100) << " | " << static_cast<int>(floor(v * 100)) <<endl;
    if (!validar(novo_valor))
        return false;
    valor = novo_valor;
    return true;
}

float Dinheiro::getValor() const
{
    return static_cast<float>(valor) / 100;
}

// ---------------------------------------------------------------


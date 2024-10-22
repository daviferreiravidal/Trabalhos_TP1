// DEFINIÇÃO DAS CLASSES/DOMÍNIOS

#include <iostream>
#include <cctype> // isalnum()
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
// ---------------------------------------------------------------

// CÓDIGO --------------------------------------------------------
bool Codigo::validar(string v)
{
    int TAMANHO_CODIGO = 6;
    if (v.length() != TAMANHO_CODIGO)
        return false;
    for (int i = 0; i < TAMANHO_CODIGO; i++)
    {
        if (! isalnum(v[i]))
            return false;
    }
    return true;
}

bool Codigo::setValor(string v)
{
    if (!validar(v))
        return false;
    valor = v;
    return true;
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
// ---------------------------------------------------------------

// DURAÇÃO -------------------------------------------------------
bool Duracao::validar(int v)
{
    if (v >= 0 && v <= 360)
        return true;
    return false;
}

bool Duracao::setValor(int v)
{
    if (!validar(v))
        return false;
    valor = v;
    return true;
}
// ---------------------------------------------------------------

// NOME ----------------------------------------------------------
bool Nome::validar(string v)
{
    // O nome precisa ter apenas letras???
    if (v.length() > 0 && v.length() <= 30)
        return true;
    return false;
}

bool Nome::setValor(string v)
{
    if (!validar(v))
        return false;
    valor = v;
    return true;
}
// ---------------------------------------------------------------

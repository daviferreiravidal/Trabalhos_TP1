#include <cctype> // isalnum()
#include <regex>
#include "../include/codigo_v0.hpp"

bool Codigo::validar(string v)
{
    const int TAMANHO_CODIGO = 6;
    if (v.length() != TAMANHO_CODIGO)
        return false;
    for (int i = 0; i < TAMANHO_CODIGO; i++)
    {
        if (! isalnum(v[i]))
            return false;
    }
    return true;
}

bool Codigo::set_valor(string v)
{
    if (!validar(v))
        return false;
    valor = v;
    return true;
}
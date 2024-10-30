#include <cctype> // isalnum()
#include <regex>
#include "../../include/dominios/DOMINIOS.hpp"

bool Duracao::validar(int v)
{
    if (v >= 0 && v <= 360)
        return true;
    return false;
}

bool Duracao::set_valor(int v)
{
    if (!validar(v))
        return false;
    valor = v;
    return true;
}

#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED

#include <string>
using namespace std;

class Codigo
{
    private:
        string valor;
        bool validar(string);
    public:
        bool set_valor(string);
        string get_valor() const;
};

inline string Codigo::get_valor() const
{ return valor; }

#endif

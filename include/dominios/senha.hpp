#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED

#include <string>
using namespace std;

class Senha
{
    private:
        string valor;
        bool validar(string);
    public:
        bool set_valor(string);
        string get_valor() const;
};

inline string Senha::get_valor() const
{ return valor; }

#endif
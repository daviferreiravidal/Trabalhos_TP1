#ifndef AVALIACAO_HPP_INCLUDED
#define AVALIACAO_HPP_INCLUDED

#include <string>
using namespace std;

class Avaliacao
{
    private:
        int valor;
        bool validar(int);
    public:
        bool set_valor(int);
        int get_valor() const;
};

inline int Avaliacao::get_valor() const
{ return valor; }

#endif
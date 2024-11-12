<<<<<<< HEAD:include/dominios/duracao.hpp
#ifndef DURACAO_HPP_INCLUDED
#define DURACAO_HPP_INCLUDED
=======
#ifndef DURACAO_HPP
#define DURACAO_HPP

>>>>>>> master:dominios/include/duracao.hpp

#include <string>
using namespace std;

class Duracao
{
    private:
        int valor;
        bool validar(int);
    public:
        bool set_valor(int);
        int get_valor() const;
};

inline int Duracao::get_valor() const
{ return valor; }

#endif
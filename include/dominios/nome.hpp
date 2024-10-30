#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED

#include <string>
using namespace std;

class Nome
{
    private:
        string valor;
        bool validar(string);
    public:
        bool set_valor(string);
        string get_valor() const;
};

inline string Nome::get_valor() const
{ return valor; }

#endif
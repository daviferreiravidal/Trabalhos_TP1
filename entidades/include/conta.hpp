#ifndef CONTA_HPP
#define CONTA_HPP

#include "../dominios/src/dominio.cpp"
#include <iostream>

class Conta 
{
    private:
        Codigo codigo;
        Senha senha;     
    public:
        
        void set_codigo(const Codigo&);
        Codigo get_codigo() const;
 
        void set_senha(const Senha&);
        Senha get_senha() const;
};

inline void Conta::set_codigo(const Codigo& codigo)
{
    this->codigo = codigo;
}

inline Codigo Conta::get_codigo() const 
{
    return codigo;
}

inline void Conta::set_senha(const Senha& senha)
{
    this->senha = senha;
}

inline Senha Conta::get_senha() const 
{
    return senha;
}

#endif
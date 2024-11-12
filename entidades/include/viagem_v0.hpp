#ifndef VIAGEM_V0_HPP_INCLUDED
#define VIAGEM_V0_HPP_INCLUDED

#include "../../dominios/include/nome_v0.hpp"
#include "../../dominios/include/avaliacao_v0.hpp"
#include <iostream>

class Viagem
{
    private:
        
        Nome nome;
        Avaliacao avaliacao;
    
    public:

        void set_nome(const Nome&);
        Nome get_nome() const;

        void set_avaliacao(const Avaliacao&);
        Avaliacao get_avaliacao() const;

};

inline void Viagem::set_nome(const Nome& nome)
{
    this->nome = nome;
}

inline Nome Viagem::get_nome() const
{
    return nome;
}

inline void Viagem::set_avaliacao(const Avaliacao& avaliacao)
{
    this->avaliacao = avaliacao;
}

inline Avaliacao Viagem::get_avaliacao() const
{
    return avaliacao;
}

#endif



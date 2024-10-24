// DECLARAÇÃO DAS CLASSES/DOMÍNIOS

#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <iostream>
using namespace std; // 'string' está incluida no std

class Avaliacao
{
    private:
        int valor;
        bool validar(int);
    public:
        bool setValor(int);
        int getValor() const;
};

inline int Avaliacao::getValor() const
{
    return valor;
}

class Codigo
{
    private:
        string valor;
        bool validar(string);
    public:
        bool setValor(string);
        string getValor() const;
};

inline string Codigo::getValor() const
{
    return valor;
}

class Dinheiro
{
    private:
        // Armazenar valor como "int" para evitar floating-point errors
        int valor;
        bool validar(int);
    public:
        bool setValor(double);
        int getValor() const;
};

inline int Dinheiro::getValor() const
{
    return valor;
}

class Duracao
{
    private:
        int valor;
        bool validar(int);
    public:
        bool setValor(int);
        int getValor() const;
};

inline int Duracao::getValor() const
{
    return valor;
}

class Nome
{
    private:
        string valor;
        bool validar(string);
    public:
        bool setValor(string);
        string getValor() const;
};

inline string Nome::getValor() const
{
    return valor;
}

#endif

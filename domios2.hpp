// DECLARAÇÃO DAS CLASSES/DOMÍNIOS

#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include<iostream>
#include<string>

using namespace std;

// Provisório
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


class Dinheiro
{
    private:
        // Armazenar valor como "int" para evitar floating-point errors
        int valor;
        bool validar(int);
    public:
        bool setValor(double);
        double getValor() const;
};

inline double Dinheiro::getValor() const
{
    return valor;
}




class Senha
{
    private:
        int valor;
        bool validar(int);
    public:
        bool setValor(int);
        int getValor() const;
};

inline int Senha::getValor() const
{
    return valor;
}


class Horario
{
    private:
        string valor;
        bool validar(const string &novoValor);
    public:
        bool setValor(const string &novoValor);
        string getValor() const;
};

inline string Horario::getValor() const
{
    return valor;
}



class Data
{
private:
    string valor;
    bool validar(const string &novoValor);
public:
    bool setValor(const string &novoValor);
    string getValor() const;

};


inline string Data::getValor() const
{
    return valor;
}



#endif // DOMINIOS_HPP_INCLUDED

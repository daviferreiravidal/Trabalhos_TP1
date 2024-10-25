// DECLARAÇÃO DAS CLASSES/DOMÍNIOS

#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <iostream>
#include <pthread.h>
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
{ return valor; }

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
{ return valor; }

class Data {
private:
  string valor;
  bool validar(const string &);

public:
  bool setValor(const string);
  string getValor() const;
};

inline string Data::getValor() const { return valor; }

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
{ return valor; }

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
{ return valor; }

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
{ return valor; }

class Horario
{
    private:
        string valor;
        bool validar(string);
    public:
        bool setValor(string);
        // Precisam que o valor esteja definido
        string getValor() const;
        int getHora() const;
        int getMinutos() const;
};

inline string Horario::getValor() const
{ return valor; }


#endif

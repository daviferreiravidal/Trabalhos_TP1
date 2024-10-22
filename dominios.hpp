// DECLARAÇÃO DAS CLASSES/DOMÍNIOS

#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

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
#endif

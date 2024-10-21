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

#endif

// DEFINIÇÃO DAS CLASSES/DOMÍNIOS

#include <iostream>
#include "dominios.hpp"
#include<string>

using namespace std;

// AVALIAÇÃO -----------------------------------------------------
bool Avaliacao::validar(int v)
{
    // Precisa validar se o input é do tipo certo?
    if (v >= 0 && v <= 5)
        return true;
    return false;
}

bool Avaliacao::setValor(int v)
{
    if (!validar(v))
        return false;

    valor = v;
    return true;
}

// ---------------------------------------------------------------

// DINHEIRO ------------------------------------------------------
bool Dinheiro::validar(int v)
{
    if (v >= 0 && v <= 20000000)
        return true;
    return false;
}

bool Dinheiro::setValor(double v)
{
    int novo_valor = static_cast<int>(v * 100);
    if (!validar(novo_valor))
        return false;
    valor = novo_valor;
    return true;
}

// ---------------------------------------------------------------

// SENHA ---------------------------------------------------------
bool Senha::validar(int v)
{
    int array[5];
    int digito;
    bool crescente;
    bool decrescente;
    if (v >= 100000) return false;
    for (int i = 1; i <= 5; i++){
        digito = v%10;
        v /= 10;
        array[5 - i] = digito;
    }
    //verificando se digitos aparecem repetidos
    for (int i = 0; i <= 3; i++){
        for (int j = i + 1; j <= 4; j++){
            if (array[i] == array[j]) return false;
        }
}

bool Senha::setValor(int novoValor)
{
    if (!validar(novoValor))
        return false;
    valor = novoValor;
    return true;
}

// ---------------------------------------------------------------

// HORARIO ---------------------------------------------------------
bool Horario::validar(const string &v)
{
    int horas, minutos;
    if (v.length() != 5) return false;
    if (v[2] != ':') return false;
    for (int i = 0; i < 5; i++){
        if (i == 2){
            continue;
        }
        if (! isdigit(v[i])) return false;
    }
    horas = stoi(v.substr(0,2));
    minutos = stoi(v.substr(3,2));
    if (horas < 0 || horas > 23 || minutos < 0 || minutos > 59) return false;
    return true;
}

bool Horario::setValor(const string &novoValor)
{
    if (!validar(novoValor))
        return false;
    valor = novoValor;
    return true;
}

// ---------------------------------------------------------------

// Data ---------------------------------------------------------
bool verificaData(string &v){
    int dia,mes,ano;
    if (v.length() != 8) return false;
    if (v[2] != '-' || v[5] != '-') return false;
    for (int i = 0; i < 8; i++){
        if (i == 2 || i == 5) continue;
        if (! isdigit(v[i])) return false;
    }
    dia = stoi(v.substr(0,2));
    mes = stoi(v.substr(3,2));
    ano = stoi(v.substr(6,2));
    if (dia < 0 || dia > 31 || mes < 1 || mes > 12 || ano < 0 || ano > 99) return false;
    //considera anos bissextos
    if (mes == 2 && dia == 29 && ano%4 != 0) return false;

    if (mes == 2 && dia > 29) return false;
    if (dia == 31 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) return false;
    return true;
}
bool Data::setValor(const string &novoValor)
{
    if (!validar(novoValor))
        return false;
    valor = novoValor;
    return true;
}

// ---------------------------------------------------------------

int main()
{
    Data data;
    if(data.setValor("22-10-24"))
        cout << "Valor = "<<data.getValor() << endl;
    else
        cout << "Valor invalido" << endl;
    if(data.setValor("22-10-2024"))
        cout << "Valor = "<<data.getValor() << endl;
    else
        cout << "Valor invalido" << endl;

}






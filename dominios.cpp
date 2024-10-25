// DEFINIÇÃO DAS CLASSES/DOMÍNIOS

#include <iostream>
#include <cctype> // isalnum()
#include "dominios.hpp"

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

// CÓDIGO --------------------------------------------------------
bool Codigo::validar(string v)
{
    int TAMANHO_CODIGO = 6;
    if (v.length() != TAMANHO_CODIGO)
        return false;
    for (int i = 0; i < TAMANHO_CODIGO; i++)
    {
        if (! isalnum(v[i]))
            return false;
    }
    return true;
}

bool Codigo::setValor(string v)
{
    if (!validar(v))
        return false;
    valor = v;
    return true;
}
// ---------------------------------------------------------------

// Data ------------------------------------------------------
bool Data::validar(const string &v) {
  int dia, mes, ano;
  if (v.length() != 8)
    return false;
  if (v[2] != '-' || v[5] != '-')
    return false;
  for (int i = 0; i < 8; i++) {
    if (i == 2 || i == 5)
      continue;
    if (!isdigit(v[i]))
      return false;
  }
  dia = stoi(v.substr(0, 2));
  mes = stoi(v.substr(3, 2));
  ano = stoi(v.substr(6, 2));
  if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0 || ano > 99)
    return false;
  // considera anos bissextos
  if (mes == 2 && dia == 29 && ano % 4 != 0)
    return false;

  if (mes == 2 && dia > 29)
    return false;
  if (dia == 31 && (mes == 4 || mes == 6 || mes == 9 || mes == 11))
    return false;
  return true;
}

bool Data::setValor(const string v) {
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

// DURAÇÃO -------------------------------------------------------
bool Duracao::validar(int v)
{
    if (v >= 0 && v <= 360)
        return true;
    return false;
}

bool Duracao::setValor(int v)
{
    if (!validar(v))
        return false;
    valor = v;
    return true;
}
// ---------------------------------------------------------------

// NOME ----------------------------------------------------------
bool Nome::validar(string v)
{
    // O nome precisa ter apenas letras???
    if (v.length() > 0 && v.length() <= 30)
        return true;
    return false;
}

bool Nome::setValor(string v)
{
    if (!validar(v))
        return false;
    valor = v;
    return true;
}
// ---------------------------------------------------------------

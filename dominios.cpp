// DEFINIÇÃO DAS CLASSES/DOMÍNIOS

#include <iostream>
#include "dominios.hpp"

using namespace std;
/*
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

int Avaliacao::getValor() const
{
    return valor;
}
*/

bool verificaAvaliacao(int avaliacao){
    bool flag = false;
    for (int i = 0; i < 6; i++){
        if (avaliacao == i) flag = true;
    }
    return flag;
}



bool verificaCodigo(const string &codigo){
    bool flag = true;
    if (codigo.length() != 6) return false;
    //conferindo se todos os digitos seguem as restricoes
    for (char a : codigo){
        if (! ((isdigit(a)) || (isalpha(a))) ){
            flag = false;
        }

    }
    return flag;
}

bool verificaData(string &data){
    int dia,mes,ano;
    if (data.length() != 8) return false;
    if (data[2] != '-' || data[5] != '-') return false;
    for (int i = 0; i < 8; i++){
        if (i == 2 || i == 5) continue;
        if (! isdigit(data[i])) return false;
    }
    dia = stoi(data.substr(0,2));
    mes = stoi(data.substr(3,2));
    ano = stoi(data.substr(6,2));
    if (dia < 0 || dia > 31 || mes < 1 || mes > 12 || ano < 0 || ano > 99) return false;
    //considera anos bissextos
    if (mes == 2 && dia == 29 && ano%4 != 0) return false;

    if (mes == 2 && dia > 29) return false;
    if (dia == 31 && (mes == 4 || mes == 6 || mes == 9 || mes == 11)) return false;
    return true;
}



bool verificaDinheiro(float dinheiro){
    if (dinheiro < 0 || dinheiro > 200000) return false;
    //verificar que ha 2 digitos dps da virgula apenas
    if (dinheiro*100 - static_cast<int>(dinheiro*100) != 0) return false;
    return true;
}


bool verificaDuracao(int duracao){
    if (duracao >=0 && duracao <= 360){
        return true;
    }
    return false;
}

bool verificaHorario(string &horario){
    int horas, minutos;
    if (horario.length() != 5) return false;
    if (horario[2] != ':') return false;
    for (int i = 0; i < 5; i++){
        if (i == 2){
            continue;
        }
        if (! isdigit(horario[i])) return false;
    }
    horas = stoi(horario.substr(0,2));
    minutos = stoi(horario.substr(3,2));
    if (horas < 0 || horas > 23 || minutos < 0 || minutos > 59) return false;
    return true;
}

bool verificaNome(const string &nome){
    return nome.length() <= 30;
}

bool verificaSenha(int senha){
    int array[5];
    int digito;
    bool crescente;
    bool decrescente;
    if (senha >= 100000) return false;
    for (int i = 1; i <= 5; i++){
        digito = senha%10;
        senha /= 10;
        array[5 - i] = digito;
    }
    //verificando se digitos aparecem repetidos
    for (int i = 0; i <= 3; i++){
        for (int j = i + 1; j <= 4; j++){
            if (array[i] == array[j]) return false;
        }
    }

    //verificando se aparece em ordem crescente e decrescente
    crescente = true;
    for(int i = 0; i <= 3; i++){
        if (array[i+1] < array[i]) crescente = false;
    }
    decrescente = true;
    for(int i = 0; i <= 3; i++){
        if (array[i+1] > array[i]) decrescente = false;
    }
    if (crescente||decrescente) return false;
    return true;
}


int main(){

}

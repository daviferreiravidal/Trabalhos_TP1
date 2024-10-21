#include <iostream>
#include "dominios.hpp"

#include <string>

using namespace std;

/*
int main()
{
    // Provisório
    int valor_teste = 3; // Válido
    //int valor_teste = -1; //Invádio
    //int valor_teste = 10; // Inválido
    //char valor_teste = '3'; // ? -> Inválido
    Avaliacao avaliacao;
    if (avaliacao.setValor(valor_teste))
        cout << "Valor = " << avaliacao.getValor() << endl;
    else
        cout << "Valor inválido" << endl;
}
*/

bool verificaCodigo(const string &codigo){
    bool flag = true;
    if (codigo.length() != 6) return false;
    //conferindo se todos os digitos seguem as restricoes
    for (char a : codigo){
        cout << a << endl;
        if (! ((a >= 48 && a <= 57) || (a >= 65 && a <= 90) || (a >= 97 && a <= 122))){
            flag = false;
            cout << flag;
        }
         
    }
    return flag;
}

int main(){
    //string a;
    //getline(cin,a);
    bool x = verificaCodigo("ad");
    cout << x;
}


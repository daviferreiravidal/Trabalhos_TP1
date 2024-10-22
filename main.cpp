#include <iostream> 
#include <iomanip> // Include for setting precision
#include "dominios.hpp"

using namespace std;

int main()
{
    // AVALIAÇÃO --------------------------------------------------
    int teste_avaliacao = 3; // Válido
    //int teste_avaliacao = -1; //Invádio
    //int teste_avaliacao = 10; // Inválido
    //char teste_avaliacao = '3'; // ? -> Inválido
    Avaliacao avaliacao;
    if (avaliacao.setValor(teste_avaliacao))
        cout << "Valor 'avaliação': " << avaliacao.getValor() << endl;
    else
        cout << "Valor 'avaliação' INVÁLIDO" << endl;
    // ------------------------------------------------------------

    // CÓDIGO -----------------------------------------------------
    string teste_codigo = "A1b2Z0"; // Válido
    //string teste_codigo = "A1B2C3Z"; // Inválido
    //string teste_codigo = ""; // Inválido
    //string teste_codigo = "#abc12"; // Inválido
    Codigo codigo;
    if (codigo.setValor(teste_codigo))
        cout << "Valor 'código': " << codigo.getValor() << endl;
    else
        cout << "Valor 'código' INVÁLIDO" << endl;
    // ------------------------------------------------------------

    // DINHEIRO ---------------------------------------------------
    //float teste_dinheiro = 2003.50; // Válido
    double teste_dinheiro = 199999.99;// Válido
    //float test_dinheiro = 200000.01;// Inválido
    //int teste_dinheiro = 23000;// ? -> Válido
    //int teste_dinheiro = 5000.99;// ? -> Válido 
    Dinheiro dinheiro;
    if (dinheiro.setValor(teste_dinheiro))
        // "setprecision": necessário para evitar arredondamentos indesejados
        cout << "Valor 'dinheiro': " << fixed << setprecision(2) << static_cast<double>(dinheiro.getValor()) << endl;
    else
        cout << "Valor 'dinheiro' INVÁLIDO" << endl;
    // ------------------------------------------------------------

    // DURAÇÃO ----------------------------------------------------
    int teste_duracao = 0; // Válido
    //int teste_duracao = 361; // Inválido
    //double teste_duracao = 15.4; // ? -> Válido
    //char teste_duracao = 'A'; // ? -> Válido (Depende do valor na tabela ascii)
    Duracao duracao;
    if (duracao.setValor(teste_duracao))
        cout << "Valor 'duração': " << duracao.getValor() << endl;
    else
        cout << "Valor 'duração' INVÁLIDO" << endl;
    // ------------------------------------------------------------

    // NOME -------------------------------------------------------
    string teste_nome = "AAAAAbbbbbCCCCCdddddEEEEEfffff"; // Válido
    //string teste_nome = "AAAAAbbbbbCCCCCdddddEEEEEfffffG"; // Inválido
    //string teste_nome = "AAAA1bbbb#CCCC?dddd*EEEE&ffff("; // Válido
    //string teste_nome = "dfhedfbfh2834y12347$ç,."; // Válido
    //string teste_nome = ""; // Inválido
    Nome nome;
    if (nome.setValor(teste_nome))
        cout << "Valor 'nome': " << nome.getValor() << endl;
    else
        cout << "Valor 'nome' INVÁLIDO" << endl;
    // ------------------------------------------------------------
}



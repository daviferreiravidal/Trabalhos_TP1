#ifndef DOMINIOS_HPP_INCLUDED
#define DOMINIOS_HPP_INCLUDED

#include <string>
#include <cstdint>

using namespace std;

class Conta{
private:
    string codigo;
    unsigned int senha;
    bool validarCodigo();
    bool validarSenha();
public:
    bool setCodigo(const string &novoCodigo);
    bool setSenha(unsigned int novaSenha);
    string getCodigo() const;
    unsigned int getSenha() const;
};

inline string Conta::getCodigo() const{
    return codigo;
}

inline unsigned int Conta::getSenha() const{
    return senha;
}


class Viagem{
private:
    string codigo;
    string nome;
    uint8_t avaliacao;
    bool validarCodigo();
    bool validarNome ();
public:
    bool setCodigo(const string &novoCodigo);
    bool setNome(const string &novoNome);
    bool setAvaliacao(uint8_t novaAvaliacao);
    string getCodigo() const;
    string getNome() const;
    uint8_t getAvaliacao() const;
};

inline string Viagem::getCodigo() const{
    return codigo;
}

inline string Viagem::getNome() const{
    return nome;
}

inline uint8_t Viagem::getAvaliacao() const{
    return avaliacao;
}


class Destino{
private:
    string codigo;
    string nome;
    string dataInicio;
    string dataFim;
    uint8_t avaliacao;
    bool validarCodigo();
    bool validarNome ();
    bool validarDataInicio();
    bool validarDataFim();
    bool validarAvaliacao();
public:
    bool setCodigo(const string &novoCodigo);
    bool setNome(const string &novoNome);
    bool setDataInicio(const string &novaDataInicio);
    bool setDataFim(const string &novaDataFim);
    bool setAvaliacao(uint8_t novaAvaliacao);
    string getCodigo() const;
    string getNome() const;
    string getDataInicio() const;
    string getDataFim() const;
    uint8_t getAvaliacao() const;
};

inline string Destino::getCodigo() const{
    return codigo;
}

inline string Destino::getNome() const{
    return nome;
}

inline string Destino::getDataInicio() const{
    return dataInicio;
}

inline string Destino::getDataFim() const{
    return dataFim;
}

inline uint8_t Destino::getAvaliacao() const{
    return avaliacao;
}


class Atividade{
private:
    string codigo;
    string nome;
    string data;
    string horario;
    int duracao;
    float dinheiro;
    uint8_t avalicao;
    bool validarCodigo();
    bool validarNome ();
    bool validarData();
    bool validarHorario();
    bool validarDuracao();
    bool validarDinheiro();
    bool validarAvaliacao();
public:
    bool setCodigo(const string &novoCodigo);
    bool setNome(const string &novoNome);
    bool setData(const string &novaData);
    bool setHorario(const string &novoHorario);
    bool setDuracao(int novaDuracao);
    bool setDinheiro(float novoDinheiro);
    bool setAvaliacao(uint8_t novaAvaliacao);
    string getCodigo() const;
    string getNome() const;
    string getData() const;
    string getHorario() const;
    int getDuracao() const;
    float getDinheiro() const;
    uint8_t getAvaliacao() const;
};

inline string Atividade::getCodigo() const{
    return codigo;
}

inline string Atividade::getNome() const{
    return nome;
}

inline string Atividade::getData() const{
    return data;
}

inline string Atividade::getHorario() const{
    return horario;
}

inline int Atividade::getDuracao() const{
    return duracao;
}

inline float Atividade::getDinheiro() const{
    return dinheiro;
}

inline uint8_t Atividade::getAvaliacao() const{
    return avalicao;
}


class Hospedagem{
private:
    string codigo;
    string nome;
    float dinheiro;
    uint8_t avalicao;
    bool validarCodigo();
    bool validarNome ();
    bool validarDinheiro();
    bool validarAvaliacao();
public:
    bool setCodigo(const string &novoCodigo);
    bool setNome(const string &novoNome);
    bool setDinheiro(float novoDinheiro);
    bool setAvaliacao(uint8_t novaAvaliacao);
    string getCodigo() const;
    string getNome() const;
    float getDinheiro() const;
    uint8_t getAvaliacao() const;
};

inline string Hospedagem::getCodigo() const{
    return codigo;
}

inline string Hospedagem::getNome() const{
    return nome;
}

inline float Hospedagem::getDinheiro() const{
    return dinheiro;
}

inline uint8_t Hospedagem::getAvaliacao() const{
    return avalicao;
}

#endif // DOMINIOS_HPP_INCLUDED

#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include "Cliente.h"

// Definição da classe ContaBancaria
class ContaBancaria{
    // Atributos do(s) objeto(s) da classe (conta(s) bancária(s))
    private:
    int numero;
    Cliente titular;
    double saldo;

    // Construtor da classe e todos os métodos associados à ela (para mais detalhes, checar o arquivo com as implementações)
    public:
    ContaBancaria(int _numero, Cliente _titular, double _saldo);
    void depositar(double valor);
    void sacar(double valor);
    void transferir(double valor, ContaBancaria &destino);
    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);
    void exibirSaldo();
    void exibirInformacoes();
};

#endif
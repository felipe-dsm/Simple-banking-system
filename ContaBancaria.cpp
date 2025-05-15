#include <iostream>
#include "ContaBancaria.h"

// Construtor que inicializa os atributos numero, titular e saldo
ContaBancaria::ContaBancaria(int _numero, Cliente _titular, double _saldo)
    : numero(_numero), titular(_titular), saldo(_saldo) {
}

// Método para depositar dinheiro em uma conta
void ContaBancaria::depositar(double valor){
    saldo += valor;
}

// Método para sacar dinheiro de uma conta
void ContaBancaria::sacar(double valor){
    // Verificação para saber se há saldo disponível para efetuar o saque
    if(saldo < valor){
        std::cout << "Saldo insuficiente.\n";
    }
    else{
        saldo = saldo - valor;
        std::cout << "Saque efetuado.\n";
    }
}

// Método para transferir dinheiro de uma conta para uma outra conta
void ContaBancaria::transferir(double valor, ContaBancaria &destino){
    // Verificação para saber se há saldo disponível para efetuar a transferência
    if(saldo < valor){
        std::cout << "Saldo insuficiente.\n";
    }
    else{
        saldo = saldo - valor;
        destino.saldo += valor;
        std::cout << "Transferido: R$ " << valor << " da conta " << numero << " para a conta " << destino.numero << std::endl;
    }
}

// Método para transferir dinheiro em duas parcelas iguais de uma conta para duas outras contas
void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2){
    // Verificação para saber se há saldo disponível para efetuar a transferência
    if(saldo < valor){
        std::cout << "Saldo insuficiente.\n";
    }
    else{
        saldo = saldo - valor;
        destino1.saldo += valor / 2;
        destino2.saldo += valor / 2;
        std::cout << "Transferido: R$ " << valor << " para cada conta (" << destino1.numero << " e " << destino2.numero << ") da conta " << numero << std::endl;
    }
}

// Método para exibir o saldo de uma conta
void ContaBancaria::exibirSaldo(){
    std::cout << "Saldo atual da conta: R$ " << saldo << std::endl;
}

// Método para exibir o nome do titular de uma conta, seu CPF, o número da conta e seu saldo atual
void ContaBancaria::exibirInformacoes(){
    std::cout << "Titular: " << titular.getNome() << ", CPF: " << titular.getCpf() << std::endl;
    std::cout << "Número da Conta: " << numero << ", Saldo: R$ " << saldo << std::endl;
}
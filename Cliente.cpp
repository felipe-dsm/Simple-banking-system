#include "Cliente.h"

// Construtor que inicializa os atributos nome e cpf
Cliente::Cliente(std::string _nome, std::string _cpf){
    nome = _nome;
    cpf = _cpf;
}

// Método getter para o atributo nome
std::string Cliente::getNome(){
    return nome;
}

// Método getter para o atributo cpf
std::string Cliente::getCpf(){
    return cpf;
}
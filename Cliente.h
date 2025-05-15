#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>

// Definição da classe Cliente
class Cliente{
    // Atributos do(s) objeto(s) da classe (cliente(s))
    private:
    std::string nome;
    std::string cpf;

    // Construtor da classe e todos os métodos associados à ela (para mais detalhes, checar o arquivo com as implementações)
    public:
    Cliente(std::string _nome, std::string _cpf);
    std::string getNome();
    std::string getCpf();
};

#endif
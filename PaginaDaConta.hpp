#ifndef PAGINADACONTA_HPP
#define PAGINADACONTA_HPP

#include "PlanoAtual.hpp"
#include "Assinatura.hpp"
#include <string>

class PaginaDaConta {
private:
    std::string nomeUsuario;
    Assinatura* assinatura;

public:
    PaginaDaConta(std::string nomeUsuario, Assinatura* assinatura);

    void exibirInformacoes() const;
};

#endif // PAGINADACONTA_HPP

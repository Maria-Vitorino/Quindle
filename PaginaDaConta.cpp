#include "PaginaDaConta.hpp"
#include <iostream>

PaginaDaConta::PaginaDaConta(std::string nomeUsuario, Assinatura* assinatura)
    : nomeUsuario(nomeUsuario), assinatura(assinatura) {}

void PaginaDaConta::exibirInformacoes() const {
    std::cout << "Nome do Usuário: " << nomeUsuario << std::endl;
    std::cout << "Plano: " << assinatura->getTipoPlano() << std::endl;
    std::cout << "Livros Acessados no Mês: " << assinatura->getLivrosAcessados() << std::endl;
    std::cout << "Livros Restantes no Mês: " << assinatura->getLimiteLivros() - assinatura->getLivrosAcessados() << std::endl; 
    }

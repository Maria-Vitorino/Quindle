#include "PlanoAtual.hpp"
#include <iostream>

PaginaDaConta::PaginaDaConta(std::string nomeUsuario, PlanoAtual* plano)
    : nomeUsuario(nomeUsuario), plano(plano) {}

void PaginaDaConta::exibirInformacoes() const {
    std::cout << "Nome do Usuário: " << nomeUsuario << std::endl;
    std::cout << "Plano: " << (plano->getIsPro() ? "Pro" : "Basico") << std::endl;
    std::cout << "Livros Acessados no Mês: " << plano->getLivrosAcessados() << std::endl;
    std::cout << "Livros Restantes no Mês: " 
              << plano->getLimiteLivros() - plano->getLivrosAcessados() << std::endl;
}

bool PlanoAtual::getIsPro() const {
    return isPro;
}
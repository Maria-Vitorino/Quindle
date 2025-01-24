#include "PlanoPro.hpp"
#include <iostream>

PlanoPro::PlanoPro() : limiteLivros(10), livrosAcessados(0) {}

void PlanoPro::acessarLivro() {
    if (livrosAcessados < limiteLivros) {
        livrosAcessados++;
        std::cout << "Livro acessado com sucesso." << std::endl;
    } else {
        std::cout << "Limite de livros mensais atingido." << std::endl;
    }
}

void PlanoPro::resetarLivrosAcessados() {
    livrosAcessados = 0;
}

int PlanoPro::getLimiteLivros() const {
    return limiteLivros;
}

int PlanoPro::getLivrosAcessados() const {
    return livrosAcessados;
}

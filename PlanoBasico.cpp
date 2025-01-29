#include "PlanoBasico.hpp"
#include <iostream>

PlanoBasico::PlanoBasico() : limiteLivros(5), livrosAcessados(0) {}

void PlanoBasico::acessarLivro() {
    if (livrosAcessados < limiteLivros) {
        livrosAcessados++;
        std::cout << "Livro acessado com sucesso." << std::endl;
    } else {
        std::cout << "Limite de livros mensais atingido." << std::endl;
    }
}

void PlanoBasico::resetarLivrosAcessados() {
    livrosAcessados = 0;
}

int PlanoBasico::getLimiteLivros() const {
    return limiteLivros;
}

int PlanoBasico::getLivrosAcessados() const {
    return livrosAcessados;
}

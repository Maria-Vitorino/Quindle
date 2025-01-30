#include "PlanoAtual.hpp"
#include <iostream>

PlanoAtual::PlanoAtual(bool isPro) : isPro(isPro) {
    if (isPro) {
        planoPro = new PlanoPro();
        planoBasico = nullptr;
    } else {
        planoBasico = new PlanoBasico();
        planoPro = nullptr;
    }
}

void PlanoAtual::acessarLivro() {
    if (isPro && planoPro) {
        planoPro->acessarLivro();
    } else if (planoBasico) {
        planoBasico->acessarLivro();
    } else {
        std::cout << "Plano não definido." << std::endl;
    }
}

void PlanoAtual::resetarLivrosAcessados() {
    if (isPro && planoPro) {
        planoPro->resetarLivrosAcessados();
    } else if (planoBasico) {
        planoBasico->resetarLivrosAcessados();
    }
}

int PlanoAtual::getLimiteLivros() const {
    if (isPro && planoPro) {
        return planoPro->getLimiteLivros();
    } else if (planoBasico) {
        return planoBasico->getLimiteLivros();
    }
    return 0;
}

int PlanoAtual::getLivrosAcessados() const {
    if (isPro && planoPro) {
        return planoPro->getLivrosAcessados();
    } else if (planoBasico) {
        return planoBasico->getLivrosAcessados();
    }
    return 0;
}

bool PlanoAtual::getIsPro() const {
    return isPro;
}

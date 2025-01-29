#include "Assinatura.hpp"
#include "PlanoPro.hpp"  // Incluindo as definições completas de PlanoPro
#include "PlanoBasico.hpp"  // Incluindo as definições completas de PlanoBasico
#include <iostream>

// Construtor
Assinatura::Assinatura(bool isPro) : isPro(isPro) {
    if (isPro) {
        planoPro = new PlanoPro();
        planoBasico = nullptr;
    } else {
        planoBasico = new PlanoBasico();
        planoPro = nullptr;
    }
}

// Destrutor para liberar a memória alocada
Assinatura::~Assinatura() {
    delete planoPro;    // Libera o recurso alocado para planoPro, se existente
    delete planoBasico; // Libera o recurso alocado para planoBasico, se existente
}

// Métodos
void Assinatura::acessarLivro() {
    if (isPro && planoPro) {
        planoPro->acessarLivro();
    } else if (planoBasico) {
        planoBasico->acessarLivro();
    } else {
        std::cout << "Plano não definido." << std::endl;
    }
}

void Assinatura::resetarLivrosAcessados() {
    if (isPro && planoPro) {
        planoPro->resetarLivrosAcessados();
    } else if (planoBasico) {
        planoBasico->resetarLivrosAcessados();
    }
}

int Assinatura::getLimiteLivros() const {
    if (isPro && planoPro) {
        return planoPro->getLimiteLivros();
    } else if (planoBasico) {
        return planoBasico->getLimiteLivros();
    }
    return 0; // Retorna 0 caso nenhum plano esteja definido
}

int Assinatura::getLivrosAcessados() const {
    if (isPro && planoPro) {
        return planoPro->getLivrosAcessados();
    } else if (planoBasico) {
        return planoBasico->getLivrosAcessados();
    }
    return 0;
}

bool Assinatura::getIsPro() const {
    return isPro;
}

std::string Assinatura::getTipoPlano() const {
    return isPro ? "Pro" : "Basico";
}

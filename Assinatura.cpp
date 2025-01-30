#include "Assinatura.hpp"
#include "PlanoPro.hpp"  
#include "PlanoBasico.hpp"  
#include <iostream>

Assinatura::Assinatura(bool isPro) : isPro(isPro) {
    if (isPro) {
        planoPro = new PlanoPro();
        planoBasico = nullptr;
    } else {
        planoBasico = new PlanoBasico();
        planoPro = nullptr;
    }
}


Assinatura::~Assinatura() {
    delete planoPro;    
    delete planoBasico; 
}


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
    return 0; 
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

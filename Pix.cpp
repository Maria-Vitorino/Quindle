#include "Pix.hpp"

Pix::Pix(std::string metodo, double valor, std::string chavePix) : Pagamentos(metodo, valor), chavePix(chavePix) {}

void Pix::setChavePix(std::string chavePix) {
    this->chavePix = chavePix;
}

std::string Pix::getChavePix() const {
    return chavePix;
}


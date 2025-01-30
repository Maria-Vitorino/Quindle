#include "Pagamentos.hpp"

Pagamentos::Pagamentos(std::string metodo, double valor) : metodo(metodo), valor(valor) {}

void Pagamentos::setMetodo(std::string metodo) {
    this->metodo = metodo;
}

void Pagamentos::setValor(double valor) {
    this->valor = valor;
}

std::string Pagamentos::getMetodo() const {
    return metodo;
}

double Pagamentos::getValor() const {
    return valor;
}

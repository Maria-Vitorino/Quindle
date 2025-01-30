#include "Credito.hpp"

Credito::Credito(std::string metodo, double valor, std::string numeroCartao, std::string validade, std::string cvv)
    : Pagamentos(metodo, valor), numeroCartao(numeroCartao), validade(validade), cvv(cvv) {}

void Credito::setNumeroCartao(std::string numeroCartao) {
    this->numeroCartao = numeroCartao;
}

void Credito::setValidade(std::string validade) {
    this->validade = validade;
}

void Credito::setCvv(std::string cvv) {
    this->cvv = cvv;
}

std::string Credito::getNumeroCartao() const {
    return numeroCartao;
}

std::string Credito::getValidade() const {
    return validade;
}

std::string Credito::getCvv() const {
    return cvv;
}

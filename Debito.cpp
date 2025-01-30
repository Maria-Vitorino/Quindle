#include "Debito.hpp"

Debito::Debito(std::string metodo, double valor, std::string numeroCartao, std::string validade, std::string cvv)
    : Pagamentos(metodo, valor), numeroCartao(numeroCartao), validade(validade), cvv(cvv) {}

void Debito::setNumeroCartao(std::string numeroCartao) {
    this->numeroCartao = numeroCartao;
}

void Debito::setValidade(std::string validade) {
    this->validade = validade;
}

void Debito::setCvv(std::string cvv) {
    this->cvv = cvv;
}

std::string Debito::getNumeroCartao() const {
    return numeroCartao;
}

std::string Debito::getValidade() const {
    return validade;
}

std::string Debito::getCvv() const {
    return cvv;
}

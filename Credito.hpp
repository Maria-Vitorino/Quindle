#ifndef CREDITO_HPP
#define CREDITO_HPP

#include "Pagamentos.hpp"
#include <string>

class Credito : public Pagamentos {
private:
    std::string numeroCartao;
    std::string validade;
    std::string cvv;

public:
    Credito(std::string metodo, double valor, std::string numeroCartao, std::string validade, std::string cvv);

    void setNumeroCartao(std::string numeroCartao);
    void setValidade(std::string validade);
    void setCvv(std::string cvv);

    std::string getNumeroCartao() const;
    std::string getValidade() const;
    std::string getCvv() const;
};

#endif // CREDITO_HPP

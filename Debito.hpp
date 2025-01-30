#ifndef DEBITO_HPP
#define DEBITO_HPP

#include "Pagamentos.hpp"
#include <string>

class Debito : public Pagamentos {
private:
    std::string numeroCartao;
    std::string validade;
    std::string cvv;

public:
    Debito(std::string metodo, double valor, std::string numeroCartao, std::string validade, std::string cvv);

    void setNumeroCartao(std::string numeroCartao);
    void setValidade(std::string validade);
    void setCvv(std::string cvv);

    std::string getNumeroCartao() const;
    std::string getValidade() const;
    std::string getCvv() const;
};

#endif // DEBITO_HPP

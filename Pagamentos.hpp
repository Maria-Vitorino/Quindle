#ifndef PAGAMENTOS_HPP
#define PAGAMENTOS_HPP

#include <string>

class Pagamentos {
protected:
    std::string metodo;
    double valor;

public:
    Pagamentos(std::string metodo, double valor);

    void setMetodo(std::string metodo);
    void setValor(double valor);

    std::string getMetodo() const;
    double getValor() const;
};

#endif // PAGAMENTOS_HPP

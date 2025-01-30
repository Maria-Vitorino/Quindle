#ifndef PIX_HPP
#define PIX_HPP

#include "Pagamentos.hpp"
#include <string>

class Pix : public Pagamentos {
private:
    std::string chavePix;

public:
    Pix(std::string metodo, double valor, std::string chavePix);

    void setChavePix(std::string chavePix);
    std::string getChavePix() const;
};

#endif // PIX_HPP

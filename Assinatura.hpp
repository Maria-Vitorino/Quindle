#ifndef ASSINATURA_HPP
#define ASSINATURA_HPP

#include "PlanoBasico.hpp"
#include "PlanoPro.hpp"
#include <string>

class Assinatura {
private:
    PlanoBasico* planoBasico;
    PlanoPro* planoPro;
    bool isPro;

public:
    Assinatura(bool isPro);

    void acessarLivro();
    void resetarLivrosAcessados();

    int getLimiteLivros() const;
    int getLivrosAcessados() const;
    bool getIsPro() const;
    std::string getTipoPlano() const;
};

#endif // ASSINATURA_HPP

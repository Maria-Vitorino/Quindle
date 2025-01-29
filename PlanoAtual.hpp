#ifndef PLANOATUAL_HPP
#define PLANOATUAL_HPP

#include "PlanoBasico.hpp"
#include "PlanoPro.hpp"

class PlanoAtual {
private:
    PlanoBasico* planoBasico; // Ponteiro para o plano básico
    PlanoPro* planoPro;       // Ponteiro para o plano Pro
    bool isPro;               // Indica se o plano atual é Pro

public:
    // Construtor que inicializa o plano (Básico ou Pro)
    PlanoAtual(bool isPro);

    // Funções para acessar recursos do plano
    void acessarLivro();       // Permite acessar um livro
    int getLimiteLivros() const;  // Retorna o limite de livros do plano atual
    int getLivrosAcessados() const; // Retorna o número de livros acessados no mês

    // Indica se o plano atual é Pro
    bool getIsPro() const;

    // Destrutor para liberar memória
    ~PlanoAtual();
};

#endif // PLANOATUAL_HPP
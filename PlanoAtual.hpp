#ifndef PLANOATUAL_HPP
#define PLANOATUAL_HPP

#include "PlanoBasico.hpp"
#include "PlanoPro.hpp"

class PlanoAtual {
private:
    PlanoBasico* planoBasico; 
    PlanoPro* planoPro;       
    bool isPro;               

public:
    
    PlanoAtual(bool isPro);

    
    void acessarLivro();       
    int getLimiteLivros() const;  
    int getLivrosAcessados() const; 

   
    bool getIsPro() const;

    
    ~PlanoAtual();
};

#endif
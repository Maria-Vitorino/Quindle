#ifndef PLANOBASICO_HPP
#define PLANOBASICO_HPP

class PlanoBasico {
private:
    int limiteLivros;
    int livrosAcessados;

public:
    PlanoBasico();

    void acessarLivro();
    void resetarLivrosAcessados();

    int getLimiteLivros() const;
    int getLivrosAcessados() const;
};

#endif // PLANOBASICO_HPP

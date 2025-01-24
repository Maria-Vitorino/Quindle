#ifndef PLANOPRO_HPP
#define PLANOPRO_HPP

class PlanoPro {
private:
    int limiteLivros;
    int livrosAcessados;

public:
    PlanoPro();

    void acessarLivro();
    void resetarLivrosAcessados();

    int getLimiteLivros() const;
    int getLivrosAcessados() const;
};

#endif // PLANOPRO_HPP

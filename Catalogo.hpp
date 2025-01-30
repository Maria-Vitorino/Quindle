#ifndef CATALOGO_HPP
#define CATALOGO_HPP

#include "Livro.hpp"
#include <vector>
#include <string>

class Catalogo {
private:
    std::vector<Livro> livros;

public:
    Catalogo();
    void carregarLivros(const std::string& nomeArquivo);
    void exibirLivros() const;
    const std::vector<Livro>& getLivros() const;
};

#endif // CATALOGO_HPP
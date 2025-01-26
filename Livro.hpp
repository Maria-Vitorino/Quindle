#ifndef LIVRO_HPP
#define LIVRO_HPP

#include <string>
class Livro{
protected:
std::string Titulo;
std::string Autor;

public:

Livro (std::string titulo, std::string autor);

void setTitulo(std::string titulo);
void setAutor(std::string autor);

std::string getTitulo() const;
std::string getAutor() const;
};

#endif //LIVRO_HPP

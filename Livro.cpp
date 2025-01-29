320#
1,3 include "Livro.hpp"

Livro:: Livro (std::string titulo, std::string autor) : Titulo(titulo) , Autor(autor){}

void Livro::setTitulo(std::string titulo){
Titulo = titulo;
}
void Livro::setAutor(std::string autor){
Autor = autor;
}

std::string Livro::getTitulo() const{
return Titulo;
}
std::string Livro::getAutor() const{
return Autor;
}

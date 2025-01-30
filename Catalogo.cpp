#include "Catalogo.hpp"
#include <fstream>
#include <iostream>
#include <sstream>

Catalogo::Catalogo() {}

void Catalogo::carregarLivros(const std::string& nomeArquivo) {
    std::ifstream arquivo(nomeArquivo);
    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo: " << nomeArquivo << std::endl;
        return;
    }

    std::string linha;
    while (std::getline(arquivo, linha)) {
        std::istringstream iss(linha);
        std::string titulo, autor;

        if (std::getline(iss, titulo, ',') && std::getline(iss, autor, ',')) {
            livros.emplace_back(titulo, autor);
        }
    }

    arquivo.close();
}

void Catalogo::exibirLivros() const {
    if (livros.empty()) {
        std::cout << "Nenhum livro no catalogo." << std::endl;
    } else {
        std::cout << "\n=== Catalogo de Livros ===\n";
        for (const auto& livro : livros) {
            std::cout << "Titulo: " << livro.getTitulo() << ", Autor: " << livro.getAutor() << std::endl;
        }
    }
}
const std::vector<Livro>& Catalogo::getLivros() const {
    return livros; 
}
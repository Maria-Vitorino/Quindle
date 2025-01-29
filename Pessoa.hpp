#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <string>

class Pessoa {
protected:
//Atributos
std::string Nome;
std::string CPF;
public:

Pessoa(std::string nome, std:: string cpf);

//metodos
void setNome(std::string nome);
void setCPF(std:: string cpf);

std::string getNome() const;
std:: string getCPF() const;

};

#endif //PESSOA_HPP

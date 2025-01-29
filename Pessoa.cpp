#include "Pessoa.hpp"

Pessoa::Pessoa(std::string nome, std::string cpf): Nome(nome) , CPF(cpf){}

void Pessoa::setNome(std::string nome){
Nome = nome;
}
void Pessoa::setCPF(std:: string cpf){
CPF = cpf;
}

std::string Pessoa::getNome() const{
return Nome;
}
std:: string Pessoa::getCPF() const{
return CPF;
}

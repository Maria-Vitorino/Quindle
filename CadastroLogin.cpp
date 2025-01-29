#include "CadastroLogin.hpp"

CadastroLogin::CadastroLogin(std::string nome, std:: string cpf, std::string email, std::string senha): Pessoa(nome,cpf), Email(email), Senha(senha){}

void CadastroLogin::setEmail(std::string email){
Email = email;
}
void CadastroLogin::setSenha(std::string senha){
Senha = senha;
}
void CadastroLogin::setNome(std::string nome){
Nome = nome;
}
void CadastroLogin::setCPF(std::string cpf){
CPF = cpf;
}

std::string CadastroLogin::getEmail() const{
return Email;
}
std::string CadastroLogin::getSenha() const{
return Senha;
}
std::string CadastroLogin:: getNome() const {
return Nome;
}
std::string CadastroLogin:: getCPF() const {
return CPF;
}

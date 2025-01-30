#include "Login.hpp"

Login::Login(std::string email, std::string senha) : Email(email), Senha(senha) {}

void Login::setEmail(std::string email) {
    Email = email;
}

void Login::setSenha(std::string senha) {
    Senha = senha;
}

std::string Login::getEmail() const {
    return Email;
}

std::string Login::getSenha() const {
    return Senha;
}
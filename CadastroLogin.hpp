#ifndef CadastroLogin_HPP
#define CadastroLogin_HPP

#include "Pessoa.hpp"

class CadastroLogin : public Pessoa  {
protected:
//Atributos
std::string Email;
std::string Senha;

public:

CadastroLogin (std::string nome , std::string cpf, std::string email, std::string senha);

//metodos
void setEmail(std::string email);
void setSenha(std::string senha);
void setCPF (std::string cpf);
void setNome (std::string nome);

std::string getEmail() const;
std::string getSenha() const;
std::string getNome () const;
std::string getCPF () const;


};

#endif //CadastroLogin_HPP
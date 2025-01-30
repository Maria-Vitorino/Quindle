#ifndef LOGIN_HPP
#define LOGIN_HPP

#include <string>

class Login {
private:
    std::string Email;
    std::string Senha;

public:
    Login(std::string email, std::string senha);

    void setEmail(std::string email);
    void setSenha(std::string senha);

    std::string getEmail() const;
    std::string getSenha() const;
};

#endif // LOGIN_HPP
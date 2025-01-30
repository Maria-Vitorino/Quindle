#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

#include "CadastroLogin.hpp"
#include "Login.hpp"
#include "Assinatura.hpp"
#include "PaginaDaConta.hpp"
#include "Pix.hpp"
#include "Credito.hpp"
#include "Debito.hpp"
#include "Pessoa.hpp"
#include "Catalogo.hpp"

bool verificarLogin(const std::string& email, const std::string& senha, std::string& nome, std::string& tipoPlano) {
    std::ifstream arquivo("usuarios.csv");

    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo CSV para leitura." << std::endl;
        return false;
    }

    std::string linha;
    while (std::getline(arquivo, linha)) {
        std::stringstream ss(linha);
        std::string nomeArquivo, cpf, emailArquivo, senhaArquivo, tipoPlanoArquivo, metodoPagamento, valorPagamento;

        
        std::getline(ss, nomeArquivo, ',');
        std::getline(ss, cpf, ',');
        std::getline(ss, emailArquivo, ',');
        std::getline(ss, senhaArquivo, ',');
        std::getline(ss, tipoPlanoArquivo, ',');
        std::getline(ss, metodoPagamento, ',');
        std::getline(ss, valorPagamento, ',');

        
        if (email == emailArquivo && senha == senhaArquivo) {
            nome = nomeArquivo;
            tipoPlano = tipoPlanoArquivo;
            return true;
        }
    }

    return false; 
}



void salvarDadosNoCSV(const CadastroLogin& usuario, const Assinatura& assinatura, const Pagamentos& pagamento) {
    std::ofstream arquivo("usuarios.csv", std::ios::app);

    if (!arquivo.is_open()) {
        std::cerr << "Erro ao abrir o arquivo CSV para salvar os dados." << std::endl;
        return;
    }

    arquivo << usuario.getNome() << ","
            << usuario.getCPF() << ","
            << usuario.getEmail() << ","
            << usuario.getSenha() << ","
            << assinatura.getTipoPlano() << ","
            << pagamento.getMetodo() << ","
            << pagamento.getValor() << std::endl;

    arquivo.close();
    std::cout << "Dados salvos com sucesso!" << std::endl;
}

int main() {
    std::string nome, email, senha, metodoPagamento, cpf,tipoPlano;
    bool isPro;
    double valorPagamento;
 int opcao;
    std::cout << "Bem-vindo ao sistema! Escolha uma opcao:" << std::endl;
    std::cout << "1 - Login" << std::endl;
    std::cout << "2 - Cadastro" << std::endl;
    std::cout << "3 - Fechar o programa" << std::endl;
    std::cin >> opcao;
    std::cin.ignore();

    if (opcao == 1) {
    std::string email, senha;
        std::cout << "Digite seu email: ";
        std::getline(std::cin, email);

        std::cout << "Digite sua senha: ";
        std::getline(std::cin, senha);

        if (verificarLogin(email, senha, nome, tipoPlano)) {

    
    int limiteLivros;
    if (tipoPlano == "Pro" || tipoPlano == "pro") {
        isPro = 1;
        limiteLivros = 10;
    } else if (tipoPlano == "Basico" || tipoPlano == "basico") {
        isPro = 0;
        limiteLivros = 5;
    } else {
        std::cerr << "Tipo de plano desconhecido: " << tipoPlano << std::endl;
        return 0;
    }

    int livrosAcessados = 0; 
    
} else {
    std::cout << "Email ou senha incorretos." << std::endl;
    return 0;
}
    } else if (opcao == 2){
    std::cout << "\nBem-vindo ao sistema! Por favor, preencha seus dados." << std::endl;

    std::cout << "Digite seu nome: ";
    std::getline(std::cin, nome);

    std::cout << "Digite seu CPF: ";
    std::getline(std::cin, cpf);

    std::cout << "Digite seu email: ";
    std::getline(std::cin, email);

    std::cout << "Digite sua senha: ";
    std::getline(std::cin, senha);

    CadastroLogin usuario(nome, cpf, email, senha);

    std::cout << "Escolha seu plano (0 - Basico, 1 - Pro): ";
    std::cin >> isPro;
    std::cin.ignore();  

    Assinatura assinatura(isPro);
    valorPagamento = isPro ? 50.0 : 20.0; 

    Pagamentos* pagamento = nullptr;
   
    while (true) {
        std::cout << "Escolha a forma de pagamento (Pix, Credito, Debito): ";
        
       
        std::getline(std::cin, metodoPagamento);  

       
        if (metodoPagamento == "Pix" || metodoPagamento == "pix") {
            std::string chavePix;
            std::cout << "Digite a chave Pix: ";
            std::getline(std::cin, chavePix);
            pagamento = new Pix(metodoPagamento, valorPagamento, chavePix);
            break;  
        } else if (metodoPagamento == "Credito" || metodoPagamento == "credito") {
            std::string numeroCartao, validade, cvv;
            std::cout << "Digite o numero do cartao: ";
            std::getline(std::cin, numeroCartao);
            std::cout << "Digite a validade (MM/AA): ";
            std::getline(std::cin, validade);
            std::cout << "Digite o CVV: ";
            std::getline(std::cin, cvv);
            pagamento = new Credito(metodoPagamento, valorPagamento, numeroCartao, validade, cvv);
            break;
        } else if (metodoPagamento == "Debito" || metodoPagamento == "debito") {
            std::string numeroCartao, validade, cvv;
            std::cout << "Digite o numero do cartao: ";
            std::getline(std::cin, numeroCartao);
            std::cout << "Digite a validade (MM/AA): ";
            std::getline(std::cin, validade);
            std::cout << "Digite o CVV: ";
            std::getline(std::cin, cvv);
            pagamento = new Debito(metodoPagamento, valorPagamento, numeroCartao, validade, cvv);
            break;
        } else {
            std::cout << "Metodo de pagamento invalido!" << std::endl;
        }
    }
    
   
    salvarDadosNoCSV(usuario, assinatura, *pagamento);
    } else if(opcao == 3){
        std::exit(0);
    }

Assinatura assinatura(isPro);
CadastroLogin usuario(nome, cpf, email, senha);
Pagamentos* pagamento = nullptr;

    while (true) {
        int Limite = assinatura.getLimiteLivros();
        int resto = assinatura.getLivrosAcessados();
        while(true){
        std::cout << "\n=== Seja bem-vindo ao Quindle ===\n";
        PaginaDaConta conta(usuario.getNome(), &assinatura);
        conta.exibirInformacoes();

        std::string AcessarLivro;
        std::cout << "\nDeseja acessar um livro (S/N)? (Caso deseje fechar o programa, pressione F): ";
        std::cin >> AcessarLivro;

        if ((AcessarLivro == "S" && Limite > resto )  || (AcessarLivro == "s" && Limite > resto)) {
            break;
        } else if((AcessarLivro == "S" && Limite <= resto )  || (AcessarLivro == "s" && Limite <= resto)){
            std::cout << "\nVoce chegou ao limite de livros para esse mes. Espere ate o proximo mes para poder ler mais. " << std::endl; 
        }else if (AcessarLivro == "N" || AcessarLivro == "n") {
            std::cout << "\nOk, voltando a pagina inicial." << std::endl;
        }  else if(AcessarLivro == "F" || AcessarLivro == "f"){
            std::exit(0);
        } else {
            std::cout << "\nComando invalido. Voltando a pagina inicial." << std::endl;
        } 
        }

    Catalogo catalogo;
    catalogo.carregarLivros("livros.csv");
    catalogo.exibirLivros();

    while(true){

        int escolhaLivro;
    std::cout << "\nEscolha o numero do livro que deseja acessar ([0, 1, 2 ... n] para escolher qual livro, de acordo com a ordem que aparecem na tela): " << std::endl;
    std::cin >> escolhaLivro;
        
        if (escolhaLivro >= 0 && escolhaLivro < catalogo.getLivros().size()) {
        const Livro& livroEscolhido = catalogo.getLivros()[escolhaLivro];
        std::cout << "\nVoca esta acessando o livro: " << livroEscolhido.getTitulo() << "\n";
        std::cout << "Autor: " << livroEscolhido.getAutor() << "\n";
        break;
    } else {
        std::cout << "Escolha invalida! Escolha novamente." << std::endl;
    }
    }
    
    while(true){
        std::string continuaracesso;
    std::cout << "Continuar acessando esse livro(S/N): ";
    std::cin >> continuaracesso;
     if (continuaracesso == "S" || continuaracesso == "s") {
          std::cout << "\nVoce continua acessando esse livro" << std::endl;
        } else if (continuaracesso == "N" || continuaracesso == "n") {
            std::cout << "\nOk, voltando a pagina inicial." << std::endl;
            assinatura.acessarLivro();
           break;
        } else {
           std::cout << "Escolha invalida! Escolha novamente." << std::endl;
        }
}

    
    delete pagamento;
}
}
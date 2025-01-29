#include <iostream>
#include <vector>
#include <string>

#include "CadastroLogin.hpp"
#include "Catalogo.hpp"
#include "PlanoAtual.hpp"
#include "PaginaDaConta.hpp"
#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

unordered_map<string, CadastroLogin> usuarios;

void cadastrarUsuario() {
    string nome, email, senha, cpf;

    cout << "\nDigite seu nome: ";
    cin.ignore();
    getline(cin, nome);

    cout << "Digite seu CPF: ";
    cin >> cpf;

    cout << "Digite seu email: ";
    cin >> email;

    cout << "Digite sua senha: ";
    cin >> senha;

    if (usuarios.find(email) != usuarios.end()) {
        cout << "\nEmail já cadastrado!\n";
        return;
    }

    usuarios[email] = CadastroLogin(nome, cpf, email, senha);
    cout << "\nCadastro realizado com sucesso!\n";
}

bool loginUsuario(CadastroLogin& usuarioAtual) {
    string email, senha;

    cout << "\nDigite seu email: ";
    cin >> email;
    cout << "Digite sua senha: ";
    cin >> senha;

    if (usuarios.find(email) != usuarios.end() && usuarios[email].getSenha() == senha) {
        usuarioAtual = usuarios[email];
        cout << "\nLogin realizado com sucesso!\n";
        return true;
    }

    cout << "\nEmail ou senha incorretos!\n";
    return false;
}

void menuPrincipal(CadastroLogin& usuarioAtual) {
    PlanoAtual plano(false); // Padrão: Plano Básico
    Catalogo catalogo;
    catalogo.carregarLivros("livros.txt"); // Nome fictício para o arquivo de livros



int main() {
    int escolha;
    CadastroLogin usuarioAtual("", "", "", "");

    do {
        cout << "\n--- Bem-vindo ao Sistema ---\n";
        cout << "1. Fazer login\n";
        cout << "2. Cadastrar\n";
        cout << "3. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> escolha;

        switch (escolha) {
        case 1:
    std::cout << "Digite seu email: ";
    std::getline(std::cin, email);

    std::cout << "Digite sua senha: ";
    std::getline(std::cin, senha);

            break;
        case 2:
                std::cout << "Digite seu nome: ";
    std::getline(std::cin, nome);

    std::cout << "Digite seu CPF: ";
    std::cin >> cpf;
    std::cin.ignore();

    std::cout << "Digite seu email: ";
    std::getline(std::cin, email);

    std::cout << "Digite sua senha: ";
    std::getline(std::cin, senha);

    CadastroLogin usuario(nome, cpf, email, senha);

    std::cout << "Escolha seu plano (0 - Básico, 1 - Pro): ";
    std::cin >> isPro;
    std::cin.ignore();

    Assinatura assinatura(isPro);
    valorPagamento = isPro ? 50.0 : 20.0; // Exemplo de valores para planos

    std::cout << "Escolha a forma de pagamento (Pix, Crédito, Débito): ";
    std::getline(std::cin, metodoPagamento);

    Pagamentos* pagamento = nullptr;

    if (metodoPagamento == "Pix") {
        std::string chavePix;
        std::cout << "Digite a chave Pix: ";
        std::getline(std::cin, chavePix);
        pagamento = new Pix(metodoPagamento, valorPagamento, chavePix);
    } else if (metodoPagamento == "Crédito") {
        std::string numeroCartao, validade, cvv;
        std::cout << "Digite o número do cartão: ";
        std::getline(std::cin, numeroCartao);
        std::cout << "Digite a validade (MM/AA): ";
        std::getline(std::cin, validade);
        std::cout << "Digite o CVV: ";
        std::getline(std::cin, cvv);
        pagamento = new Credito(metodoPagamento, valorPagamento, numeroCartao, validade, cvv);
    } else if (metodoPagamento == "Débito") {
        std::string numeroCartao, validade, cvv;
        std::cout << "Digite o número do cartão: ";
        std::getline(std::cin, numeroCartao);
        std::cout << "Digite a validade (MM/AA): ";
        std::getline(std::cin, validade);
        std::cout << "Digite o CVV: ";
        std::getline(std::cin, cvv);
        pagamento = new Debito(metodoPagamento, valorPagamento, numeroCartao, validade, cvv);
    } else {
        std::cerr << "Método de pagamento inválido!" << std::endl;
        return 1;
    }

    // Exibir informações na página da conta
    PaginaDaConta conta(usuario.getNome(), &assinatura);
    conta.exibirInformacoes();

    // Salvar dados no arquivo CSV
    salvarDadosNoCSV(usuario, assinatura, *pagamento);

    // Limpeza
    delete pagamento;

    return 0;
}

        case 3:
            cout << "\nSaindo...\n";
            break;
        default:
            cout << "\nOpção inválida!\n";
        }
    } while (escolha != 3);

    return 0;

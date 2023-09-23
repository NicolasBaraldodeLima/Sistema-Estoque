#include <iostream>
#include <string>

class ItemEstoque {
public:
    ItemEstoque() {
        nome = "";
        quantidade = 0;
        preco = 0.0;
    }

    void inserirDados() {
        std::cout << "Nome do item: ";
        std::cin.ignore();
        std::getline(std::cin, nome);

        std::cout << "Quantidade: ";
        std::cin >> quantidade;

        std::cout << "Preço por unidade: ";
        std::cin >> preco;
    }

    void mostrarDados() const {
        std::cout << "Nome: " << nome << std::endl;
        std::cout << "Quantidade: " << quantidade << std::endl;
        std::cout << "Preço por unidade: " << preco << std::endl;
    }

private:
    std::string nome;
    int quantidade;
    double preco;
};

int main() {
    ItemEstoque item;

    std::cout << "Informe os detalhes do item:" << std::endl;
    item.inserirDados();

    std::cout << "\nDetalhes do item inserido:" << std::endl;
    item.mostrarDados();

    return 0;
}

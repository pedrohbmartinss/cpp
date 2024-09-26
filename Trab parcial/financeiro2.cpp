#include <iostream>
#include <cstring>  // Para usar strcpy e strcmp

using namespace std;

// Definição de uma struct para transações (entradas e saídas)
struct Transacao {
    char descricao[50];
    float valor;
    char categoria[20];
};

// Definição de uma struct para categorias com orçamento
struct Categoria {
    char nome[20];
    float teto;
    float gasto_atual;
};

// Função para cadastrar uma nova categoria
void cadastrarCategoria(Categoria categorias[], int &indiceCategoria) {
    char nome[20];
    float teto;

    cout << "Digite o nome da categoria: ";
    cin >> nome;
    cout << "Digite o teto da categoria: ";
    cin >> teto;

    strcpy(categorias[indiceCategoria].nome, nome);
    categorias[indiceCategoria].teto = teto;
    categorias[indiceCategoria].gasto_atual = 0;
    indiceCategoria++;

    cout << "Categoria cadastrada: " << nome << " com teto de R$" << teto << endl;
}

// Função para registrar uma entrada
void registrarEntrada(Transacao entradas[], int &indiceEntrada) {
    char descricao[50], categoria[20];
    float valor;

    cout << "Digite a descrição da entrada: ";
    cin.ignore();  // Para limpar o buffer do enter anterior
    cin.getline(descricao, 50);

    cout << "Digite o valor da entrada: ";
    cin >> valor;

    cout << "Digite a categoria da entrada: ";
    cin >> categoria;

    strcpy(entradas[indiceEntrada].descricao, descricao);
    entradas[indiceEntrada].valor = valor;
    strcpy(entradas[indiceEntrada].categoria, categoria);
    indiceEntrada++;

    cout << "Entrada registrada: " << descricao << " - R$" << valor << " - Categoria: " << categoria << endl;
}

// Função para registrar uma saída
void registrarSaida(Transacao saidas[], int &indiceSaida, Categoria categorias[], int numCategorias) {
    char descricao[50], categoria[20];
    float valor;

    cout << "Digite a descrição da saída: ";
    cin.ignore();  // Limpa o buffer
    cin.getline(descricao, 50);

    cout << "Digite o valor da saída: ";
    cin >> valor;

    cout << "Digite a categoria da saída: ";
    cin >> categoria;

    // Verificar se o gasto ultrapassa o teto da categoria
    for (int i = 0; i < numCategorias; i++) {
        if (strcmp(categorias[i].nome, categoria) == 0) {
            if (categorias[i].gasto_atual + valor > categorias[i].teto) {
                cout << "Aviso: Orçamento da categoria " << categoria << " ultrapassado!" << endl;
            }
            categorias[i].gasto_atual += valor;
            break;
        }
    }

    strcpy(saidas[indiceSaida].descricao, descricao);
    saidas[indiceSaida].valor = valor;
    strcpy(saidas[indiceSaida].categoria, categoria);
    indiceSaida++;

    cout << "Saida registrada: " << descricao << " - R$" << valor << " - Categoria: " << categoria << endl;
}

// Função para exibir o total de entradas e saídas
void mostrarTotal(Transacao entradas[], int numEntradas, Transacao saidas[], int numSaidas) {
    float totalEntradas = 0, totalSaidas = 0;

    for (int i = 0; i < numEntradas; i++) {
        totalEntradas += entradas[i].valor;
    }

    for (int i = 0; i < numSaidas; i++) {
        totalSaidas += saidas[i].valor;
    }

    cout << "Total de entradas: R$" << totalEntradas << endl;
    cout << "Total de saidas: R$" << totalSaidas << endl;
    cout << "Saldo: R$" << totalEntradas - totalSaidas << endl;
}

int main() {
    Transacao entradas[100];  // Array para entradas
    Transacao saidas[100];    // Array para saídas
    Categoria categorias[10]; // Array para categorias

    int indiceEntrada = 0, indiceSaida = 0, indiceCategoria = 0;
    int opcao;

    do {
        cout << "\n===== Menu =====" << endl;
        cout << "1. Cadastrar Categoria" << endl;
        cout << "2. Registrar Entrada" << endl;
        cout << "3. Registrar Saida" << endl;
        cout << "4. Mostrar Total" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cadastrarCategoria(categorias, indiceCategoria);
                break;
            case 2:
                registrarEntrada(entradas, indiceEntrada);
                break;
            case 3:
                registrarSaida(saidas, indiceSaida, categorias, indiceCategoria);
                break;
            case 4:
                mostrarTotal(entradas, indiceEntrada, saidas, indiceSaida);
                break;
            case 0:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opcao inválida! Tente novamente." << endl;
        }
    } while (opcao != 0);

    return 0;
}
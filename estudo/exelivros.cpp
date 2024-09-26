#include <iostream>
using namespace std;

struct Livro{
    string titulo;
    string autor;
    int anopub;
    float preco;
};

Aluno livros[10];
int quantidade = 0;

Livro cadastralivro(){
    Livro novolivro;
    cin.ignore();
    cout << "Qual o nome do livro?: " << endl;
    getline (cin,novolivro.titulo);

    cout << "Qual o autor do livro?: \n";
    getline (cin,novolivro.autor);

    cout << "Qual o ano de publicacao do livro?: \n";
    cin >> novolivro.anopub;

    cout << "Qual o preco do livro? \n";
    cin >> novolivro.preco;

    return novolivro;
}

void exibelivro(Livro livro){
    cout << "O nome do livro e: " << livro.titulo << endl;
    cout << "O autor do livro e: " << livro.autor << endl;
    cout << "O ano de publicacao do livro foi em: " << livro.anopub << endl;
    cout << "O preco do livro e: " << livro.preco << endl;
}

void exibetodoslivros(){
    for (int i=0; i <= quantidade; i++){
        exibelivro(livros[i]);
    }
}

int main(){
    int opcao = 0;
    while (opcao != 3){
        cout << "Digite 1 para cadastrar livro" << endl;
        cout << "Digite 2 para exibir livros cadastrados" << endl;
        cout << "Digite 3 para sair" << endl;
        cin >> opcao;

        if(opcao == 1){
            Livro novolivro;
            novolivro = cadastralivro();
            livros[quantidade] = novolivro;
            quantidade++;
        } else if (opcao == 2){
            exibetodoslivros();
        }
    }
    return 0;
}

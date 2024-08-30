#include <iostream>
using namespace std;

struct livro{
    string titulo;
    string autor;
    int anopub;
    float preco;
};

livro cadastralivro(){

    livro novolivro;
    cout << "Qual o nome do livro?: ";
    cin >> novolivro.titulo;
    cout << "Qual o nome do autor livro?: ";
    cin >> novolivro.autor;
    cout << "Qual o ano de publicacao do livro?: ";
    cin >> novolivro.anopub;
    cout << "Qual o preco do livro?: ";
    cin >> novolivro.preco;

    return novolivro;
}

void exibelivro(livro livro){
    cout << "O nome do livro e: " << livro.titulo << endl;
    cout << "O nome do autor do livro e: " << livro.autor << endl;
    cout << "O ano de publicacao do livro e: " << livro.anopub << endl;
    cout << "O preco do livro e: " << livro.preco << endl;
}

int main(){
    livro meulivro;

    meulivro=cadastralivro();

    exibelivro(meulivro);
    return 0;

}
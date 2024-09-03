#include <iostream>

using namespace std;

struct livro{
    string titulo;
    string autor;
    int anopub;
    float preco;
};

void novoouvelho(livro livro){
    if(livro.anopub >= 2018){
        cout << "o livro do " << livro.titulo << " e novo \n";
    } else {
        cout << "o livro do " << livro.titulo << " e velho \n";
    }
}

int main()
{
    livro livro1;
    livro1.titulo = "pequeno principe";
    livro1.autor = "nando reis";
    livro1.anopub = 2013;
    livro1.preco = 59.90;
    
    livro livro2;
    livro2.titulo = "harry potter";
    livro2.autor = "gustavo";
    livro2.anopub = 2019;
    livro2.preco = 34.50;

    novoouvelho(livro1);
    novoouvelho(livro2);

}

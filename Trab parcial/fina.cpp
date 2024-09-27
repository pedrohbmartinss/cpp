#include <iostream>

using namespace std;

struct Transacao{
    string tipo;
    float valor;
};

struct Categoria{
    string nome;
    float teto;
};

Categoria categoria[10];
int quantidadecategoria = 0;

transacao transacao[30];
int quantidadetransacao = 0;

void cadastracategoria(Categoria categoria[], int &quantidadecategoria){

    cout << "Quantas categorias deseja cadastrar?" << endl;
    cin >> quantidadecategoria;

    for(int i=0; i < quantidadecategoria; i++){
        cin.ignore();
        cout << "Qual o nome da categoria? " << endl;
        getline (cin,categoria[i].nome);

        cout << "Qual o valor da categoria? " << endl;
        cin >> categoria[i].teto;

    }
}

void exibecategorias(Categoria categoria[], int &quantidadecategoria){
    cout << "\n\nAs categorias cadastradas foram: " << endl;
    for(int i=0; i <= quantidadecategoria; i++){
        cout << categoria[i].nome << endl;
    }
}

void cadastratransacao(Transacao transacao[], Categoria categoria[], int &quantidadetransacao){
    cout << "Qual o tipo de transacao? " << endl;
    cin >> transacao.tipo;

    if (transacao.tipo = "entrada"){
        for(int i=0; i < quantidadetransacao; i++){
        cin.ignore();
        cout << "A entrada se enquadra em qual categoria? " << endl;
        getline (cin,categoria[i].nome);

        cout << "Qual o valor da entrada? " << endl;
        cin >> transacao[i].valor;

    }
    }

    

}
    

int main(){
    
    cadastracategoria(categoria, quantidadecategoria);
    exibecategorias(categoria, quantidadecategoria);
    return 0;
}

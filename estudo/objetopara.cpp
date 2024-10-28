#include <iostream>
using namespace std;


string carros[10];

void cadastracarro(string carros[], int quantidade){
    cin.ignore();
    for (int i=0; i < quantidade; i++){
        cout << "Qual o nome do carro que deseja cadastrar?" << endl;
        getline(cin, carros[i]);

    }
    
}

void exibecarros(string carros[], int quantidade){
    cout << "Os carros cadastrados foram: " << endl;
    for (int i=0; i< quantidade; i++){
        cout << carros[i] << endl;
    }
}

int main(){
    int quantidade = 0;

    cout << "Quantos carros deseja cadastrar?" << endl;
    cin >> quantidade;

    cadastracarro(carros, quantidade);

    exibecarros(carros, quantidade);

    return 0;
}
    
#include <iostream>
using namespace std;


string carros[10];

void cadastracarro(string carros[], int quantidade){
    for (int i=0; i < quantidade; i++){
        cout << "Qual o nome do carro que deseja cadastrar?" << endl;
        getline(cin, carros[i]);
        cin.ignore();

    }
    
}

int main(){
    int quantidade = 0;

    cout << "Quantos carros deseja cadastrar?" << endl;
    cin >> quantidade;

    cadastracarro(carros, quantidade);
    
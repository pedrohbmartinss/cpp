#include <iostream>
using namespace std;

int main(){
    int opcao;
    while (opcao != 3){
        cout << "Digite 1 para falar oi mundo" << endl;
        cout << "digite 2 para xingar" << endl;
        cout << "digite 3 para sair" << endl;
        cin >> opcao;

        if (opcao == 1){
        cout << "Ola mundo" << endl;
    }

    }
        
    return 0;
}
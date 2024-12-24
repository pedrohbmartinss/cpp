#include <iostream>

using namespace std;


int somadigito(int n){
    if (n == 0){
        return 0;
    }
    return n % 10 + somadigito(n/10);
        
}

int main(){
    int n;
    cout << "Digite um numero inteiro positivo" << endl;
    cin >> n;

    if (n<0){
        cout << "Numero invalido" << endl;
        return 0;
    }

    cout << "A soma dos digitos do numero: " << n << " e: " << somadigito(n) << endl;

        
    return 0;
}
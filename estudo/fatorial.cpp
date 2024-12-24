
#include <iostream>
using namespace std;

int fatorial(int n){
    
    if(n == 0){
        n = 1;
        return n;
    }
    
    if (n > 0){
        n = n* fatorial(n-1);
        return n;
    } 
    return n;
}
int main(){
    int n;
    cout << "Digite um numero inteiro positivo" << endl;
    cin >> n;
    
    if (n < 0){
        cout << "Numero invalido, escolha outro numero" << endl;
        return 0;
    }
    
    
    cout << "O fatorial de " << n << " e: " << fatorial(n) << endl;
    return 0;
}
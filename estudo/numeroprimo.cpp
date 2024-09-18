#include <iostream>
#include <cmath>
using namespace std;

bool ehprimo(int n){
    if(n <= 1)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }

    int raiz = sqrt(n);
    for(int i=2; i <= raiz; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void mostrarPrimos(int inicio, int fim){
    for(int i=inicio; i <=fim; i++){
       if (ehprimo(i))
       {
        cout << i << endl;
       }
    }
}

int main(){
    int inicio, fim;

   do{
    cout << "Qual sera seu numero de inicio?: " << endl;
    cin >> inicio;

    cout << "Qual sera seu numero final?: " << endl;
    cin >> fim;

   } 
   while(inicio > fim);

   mostrarPrimos(inicio, fim);
}
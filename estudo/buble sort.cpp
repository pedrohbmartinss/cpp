#include <iostream>
#include <vector>
using namespace std;

void ordenando (vector<int> &vetor, int n){
    for (int i =0; i < n - 1; i++){
        for (int j=0; j < n - 1; j++){
            if ( vetor[j] > vetor[j + 1]){
                swap(vetor[j], vetor[j + 1]);
            }
        }
    }
}

int main(){
    vector <int> vetor  = {34, 5, 7, 2, 9, 50, 32, 78};
    int n = vetor.size();

    for (int i=0; i < n-1;i++){
        cout << vetor[i] << endl;
    }

    cout << "---------------organizando----------------" << endl;
    
    ordenando(vetor, n);
    
    for (int i=0; i < n-1;i++){
        cout << vetor[i] << endl;
    }
    

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    float n1, n2, n3, media;

    cout << "Qual sua nota numero 1 ?: " << endl;
    cin >> n1;

    if ( n1 <=10 && n1 >=0){
        cout << "Qual sua nota numero 2 ?: " << endl;
        cin >> n2;
        if( n2 <=10 && n2 >=0){
            cout << "Qual sua nota numero 3 ?: " << endl;
            cin >> n3;
            if ( n3 <=10 && n3 >=0){
                media = (n1 + n2 + n3)/3;
                if (media >=7){
                    cout << "Voce foi aprovado com media: " << media << endl;
                }
            } else {
                cout << "Voce digitou uma nota errada." << endl;
            }
        } else {
            cout << "Voce digitou uma nota errada." << endl;
        }
        
    } else {
        cout << "Voce digitou uma nota errada." << endl;
    }
    return 0;
}
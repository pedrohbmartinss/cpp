#include <iostream>
#include <limits> 
#include <cstdlib>
#include <ctime>
using namespace std;

int lancadado(){
    srand(static_cast<unsigned>(time(0)));
    int dado[6] = {1, 2, 3, 4, 5, 6};
    int indicealeatorio = rand() % 6;
    return dado[indicealeatorio];
}

int main() {
    int start = 123456789;
    int opcao;

    do {
        cout << "Aperte qualquer numero para comecar: ";
        cin >> start;

    
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Entrada invalida, digite um numero." << endl;
            start = 123456789;
        }
    } while (start == 123456789);

    int skip = 0;
    cout << "Prologo" << endl;
    cout << "O mundo dos sonhos" << endl;
    cout << "Cinco amigos de longa data, Jake, Lara, Theo, Emily e Max, decidiram fazer um acampamento de férias nas montanhas.  \n"
    << "Enquanto exploravam uma caverna misteriosa que encontraram durante uma de suas caminhadas, eles descobriram um cristal \n"
    << "brilhante, guardado por runas antigas que pareciam pulsar com uma energia desconhecida.\n" 
    << endl;

    cout << "Aperte 1 para continuar\n" << endl;
    cin >> skip;
    
    cout << "\nSem saber o que estavam fazendo, Max, o mais curioso do grupo, tocou o cristal. Em um instante, o mundo ao redor\n" 
    << "deles se distorceu e eles foram engolidos por uma luz cegante, sendo teletransportados para um novo universo. O Mundo dos Sonhos.\n"
    << endl;
    
    cout << "Aperte 1 para continuar\n" << endl;
    cin >> skip;
    
    cout << "\nAo acordarem, perceberam que alem de estarem em corpos diferentes, Durante o teleporte, foram separados.\n" 
    << "Jake e Lara acordaram juntos em uma floresta, Theo e Emily acordaram em uma cidade abandonada e Max em um santuário grego.\n"<< endl;

    cout << "Aperte 1 para continuar\n" << endl;
    cin >> skip;

    do{
        cout << "-------Selecao de personagem----------" << endl;
        cout << "Escolha um numero para definir um personagem:" << endl;
        cout << "1 - Jake" << endl;
        cout << "2 - Lara" << endl;
        cout << "3 - Theo" << endl;
        cout << "4 - Emily" << endl;
        cout << "5 - Max" << endl;
        cout << "\nOBS:Dependendo do personagem escolhido, a historia da aventura e diferente.\n" << endl;
        cin >> opcao;

        switch (opcao) {
        case 1:
            cout << "Voce selecionou Jake!" << endl;
            break;
        case 2:
            cout << "Voce Selecionou Lara!" << endl;
            break;
        case 3:
            cout << "Voce selecionou Theo!" << endl;
            break;
        case 4:
            cout << "Voce selecionou Emily!" << endl;
            break;
        case 5:
            cout << "Voce selecionou Max!" << endl;
            break;
        default:
            cout << "Escolha um personagem existente." << endl;
            break;
        }
    }  while (opcao < 1 || opcao > 5);

    return 0;
}
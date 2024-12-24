#include <iostream>
using namespace std;

struct Empregado{
        string cpf;
        string pnome;
        string snome;
        int anocont;
        float salario;
};

int quantidade = 0;

void inseredados(Empregado empregado[], int &quantidade){
    int quantidadenova = 0;
    cout << "Deseja inserir as informacoes de quantos empregados?" << endl;
    cin >> quantidadenova;
    for (int i=0; i < quantidadenova; i++){
        cin.ignore();
        cout << "Qual o cpf do empregado " << endl;
        getline(cin, empregado[i].cpf);

        cout << "Qual o primeiro nome?" << endl;
        getline(cin, empregado[i].pnome);

        cout << "Qual o sobrenome?" << endl;
        getline(cin, empregado[i].snome);

        cout << "Ano de contratacao?" << endl;
        cin >> empregado[i].anocont;

        cout << "Qual o salario?" << endl;
        cin >> empregado[i].salario;

        cout << "\n\n";
    }

    quantidade += quantidadenova;
    cout << quantidade << endl;

}

void exibedados(Empregado empregado[]){
    for (int i = 0; i < quantidade; i++){
        cout << "Cpf do empregado " << (i+1) << ": "  << empregado[i].cpf << endl;
        cout << "Primeiro nome do empregado " << (i+1) << ": "  << empregado[i].pnome << endl;
        cout << "Sobrenome do empregado " << (i+1) << ": "  << empregado[i].snome << endl;
        cout << "Ano de contratacao do empregado " << (i+1) << ": "  << empregado[i].anocont << endl;
        cout << "Salario do empregado " << (i+1) << ": "  << empregado[i].salario << endl;
        cout << "\n\n";
    }
}

void salariodescrescente(Empregado empregado[]){
    for (int i=0; i < quantidade - 1; i++){
        for (int j=0; j < quantidade - 1; j++){
            if (empregado[j].salario < empregado[j+1].salario){
                swap(empregado[j], empregado[j+1]);
            }
        }
    }
    cout << "Empregados ordenados!" << endl;
}

int main(){

    int resposta;
    Empregado empregado[100];

    do {
        cout << "----------menu-----------" << endl;
        cout << "1 - Inserir dados dos empregados" << endl;
        cout << "2 - Salvar informaçoes em arquivo de texto" << endl;
        cout << "3 - Ler todos os dados do arquivo e mostrar" << endl;
        cout << "4 - Ordenar de forma decrescente por salario" << endl;
        cout << "5- Ordenar de forma crescente por ano de contrato" << endl;
        cout << "0 - Sair" << endl;
        cin >> resposta;

        switch(resposta){
            case 1:
                inseredados(empregado, quantidade);
                break;
            case 2:
                break;
            case 3:
                exibedados(empregado);
                break;
            case 4:
                salariodescrescente(empregado);
                break;
            case 0:
                break;
        }
    } while (resposta != 0);
    


    return 0;
}
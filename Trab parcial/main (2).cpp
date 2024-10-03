#include <iostream>
using namespace std;

struct Categoria{
    string nome;
    float teto;
};

struct Entrada{
    string nome;
    float valor;
};

struct Saida{
    string nome;
    string cat;
    float valor;
};

Saida saidas[50];
int quantidadesaida=0;

Entrada entradas[50];
int quantidadeentrada = 0;

Categoria categorias[50];
int quantidadecategoria = 0;

void cadastracategoria(Categoria categorias[], int &quantidadecategoria){
    cout << "Quantas categorias deseja cadastrar?" << endl;
    cin >> quantidadecategoria;
    for (int i=0; i < quantidadecategoria; i++){
        cin.ignore();
        cout << "Qual o nome da categoria a ser cadastrada?" << endl;
        getline (cin, categorias[i].nome);
        
        cout << "Qual o teto da categoria?" << endl;
        cin >> categorias[i].teto;
    }
 
}

void exibecategorias(Categoria categorias[], int &quantidadecategoria){
    cout << "As categorias cadastradas foram: " << endl;
    for (int i=0; i < quantidadecategoria; i++){
        cout << categorias[i].nome << " com teto de " << categorias[i].teto << 
        " reais" << endl;
    }
}


void cadastraentrada(Entrada entradas[], int &quantidadeentrada){
    int novaentrada;
    cout << "Quantas entradas você deseja cadastrar?" << endl;
    cin >> novaentrada;
    
    for (int i=quantidadeentrada; i < quantidadeentrada + novaentrada; i++){
        cin.ignore();
        cout << "Qual o nome da sua entrada? " << endl;
        getline (cin, entradas[i].nome);
        
        cout << "Qual o valor de sua entrada? " << endl;
        cin >> entradas[i].valor;
    }
    quantidadeentrada+= novaentrada;
}

void cadastrasaida(Saida saidas[], int &quantidadesaida){
    cout << "Quantas saidas você deseja cadastrar?" << endl;
    cin >> quantidadesaida;
    
    for (int i=0; i < quantidadesaida; i++){
        cin.ignore();
        cout << "Qual o nome da sua saida? " << endl;
        getline (cin, saidas[i].nome);
        
        cout << "Sua saida se encaixa em qual categoria? " << endl;
        getline (cin, saidas[i].cat);
        
        cout << "Qual o valor de sua saida? " << endl;
        cin >> saidas[i].valor;
    }
}

void total(Entrada entradas[], Saida saidas[]){
    float somae=0;
    float somas=0;
    float total=0;
    for (int i=0; i< quantidadeentrada; i++){
        somae+= entradas[i].valor;
    }
    
    for (int i=0; i< quantidadesaida; i++){
        somas+= saidas[i].valor;
    }
    
    total = somae - somas;
    cout << "O total e de : " << total << " reais." << endl;
}



int main(){
    int opcao;
    do{
        cout << "1 - cadastrar categorias" << endl;
        cout << "2 - exibir categorias" << endl;
        cout << "3 - cadastrar entradas" << endl;
        cout << "4- cadastrar saidas" << endl;
        cout << "5 - Verificar saldo" << endl;
        cout << "0 - sair" << endl;
        cout << "Escolha uma opcao" << endl;
        cin >> opcao;
        
        switch(opcao) {
            case 1:
                cadastracategoria(categorias, quantidadecategoria);
                break;
            
            case 2:
                exibecategorias(categorias, quantidadecategoria);
                break;
            
            case 3: 
                cadastraentrada(entradas, quantidadeentrada);
                break;
                
            case 4: 
                cadastrasaida(saidas, quantidadesaida);
                break;
            
            case 5: 
                total(entradas, saidas);
                break;
                
            case 0:
                cout << "saindo..." << endl;
                
            default:
                cout << "Esta opcao nao existe" << endl;
        }
    } while (opcao != 0);
        return 0;
}
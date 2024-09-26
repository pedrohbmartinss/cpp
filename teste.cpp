#include <iostream>
using namespace std;

struct Aluno{
    string nome;
    int matricula;
    float n1;
    float n2;
};

void leituraAluno(Aluno &aluno){

    cin.ignore();

    cout << "Qual o nome do aluno?: " << endl;
    getline (cin,aluno.nome);

    cout << "Qual a matricula do aluno?: " << endl;
    cin >> aluno.matricula;

    cout << "Qual a nota 1 do aluno?: " << endl;
    cin >> aluno.n1;

    cout << "Qual a nota 2 do aluno?: " << endl;
    cin >> aluno.n2;
}

float media(float n1, float n2){

    float media = (n1 + n2)/2;
    
    return media;
   
}
    
void exibeAluno(const Aluno &aluno){
    
    cout << "O nome do aluno e: " << aluno.nome << endl;
    cout << "A matricula do aluno e:" << aluno.matricula << endl;
    cout << "A nota 1 do aluno e: " << aluno.n1 << endl;
    cout << "A nota 2 do aluno e: " << aluno.n2 << endl;
    cout << " a media foi de: " << media(aluno.n1, aluno.n2) << endl;
}

Aluno alunos[50];
int quantidade = 0;

void leituraAlunos(Aluno alunos[], int quantidade){
    for (int i=0; i<quantidade; i++){
        leituraAluno(alunos[i]);
    }
}

void exibeAlunos(const Aluno alunos[], int quantidade){
    for(int i=0; i<quantidade; i++){
        exibeAluno(alunos[i]);
    }
}




int main(){
    cout << "Quantos alunos deseja cadastrar?: " << endl;
    cin >> quantidade;

    leituraAlunos(alunos, quantidade);
    exibeAlunos (alunos, quantidade);
    return 0;
}
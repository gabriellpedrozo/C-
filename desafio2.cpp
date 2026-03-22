#include <iostream>

using namespace std;



int main(){
    float nota1, nota2, nota3;
    float media_turma;

    cout << "Analise de desempenho do aluno." << endl;

    cout << "Informe a nota 1: " <<endl;
    cin >> nota1;

    cout << "Informe a nota 2: " << endl;
    cin >> nota2;

    cout << "Informe a nota 3: " << endl;
    cin >> nota3;

    cout << "Qual foi a media da turma?" << endl;
    cin >> media_turma;


    float media = (nota1 + nota2 + nota3) / 3;
    
    cout << "sua media foi: " << media << endl;

    if(media < media_turma){
        cout << "Voce esta abaixo da media, favor estudar mais." << endl;
    }
    else if(media == media_turma){
        cout << "Cuidado! voce esta na media"<< endl;
    }
    else {
        cout << "Parabens, voce esta acima da media!!" << endl;
    }
        


    return 0; 
}

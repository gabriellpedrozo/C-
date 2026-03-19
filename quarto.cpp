#include <iostream>

using namespace std;

int main(){
    float nota1, nota2;
    cout << "Informe a nota 1: " <<endl;
    cin >> nota1;
    cout << "Informe a nota 2: " << endl;
    cin >> nota2;
    float media=(nota1+nota2)/2;
    cout << "Media= " << media << endl;


    //comparação: Igual: ==, Diferente: !=, outros: <, >, >=, <=
    //if simples
    // if(media >= 5){
        // cout << "aluno aprovado!";
    // }

    // if(media >= 5){
        //cout << "aluno aprovado!"<<endl;    
    // }    
    // else{
        // cout << "Aluno reprovado" <<endl;
    // }


    //0-2.5 D, 2.5-5 C, 5-7.5 B, 7.5-10 A
    if(media < 2.5){
        cout << "Nota final: D\n";
    }
    else if(media < 5){
        cout << "Nota final: C\n";
    }
    else if(media < 7.5){
        cout << "Nota final: B\n";
    }
    else{
        cout << "Nota final: A\n";
        cout << "Parabens\n";
    }

    // Operadores Lógicas: E: && , OU: ||, Não: !
    float freq;
    cout << "Qual e a frequencia do aluno?\n";
    cin >> freq;

    // if(media >= 5 && freq >= 75){
        // cout << "Aluno aprovado\n";
    // }
    // else{
        // cout << "Aluno reprovado!\n";
    // }

    if(media < 5 || freq < 75){
        cout << "Aluno reprovado!\n";
    }
    else{
        cout << "Aluno aprovado\n";
    }

    //Operador ternario
    // (media >= 5) ? cout << "Aprovado" : cout << "Reprovado";

    return 0; 
}
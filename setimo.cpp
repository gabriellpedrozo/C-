#include <iostream>

using namespace std;

int main(){
//alocação estatica

    //int vet[4];
    //vet[0]=5;
    //vet[1]=10;
    //int vet[5] = {5,10, 12};

    //cout << vet[2] << endl;

    //cout << "[";

    //for(int i=0 ; i < 5 ; i++){
        //cout << vet[i] << " ";
    //}
    //cout << "]" << endl;

    //int x = sizeof(vet)/sizeof(int);
    //int y = sizeof(int);
    //cout << "tamanho de inteiro: " << y << endl;
    //cout << "Quantidades de elementos do vetor: " << x << endl;

    // Alocação Dinamica
    int tamanho;
    cout << "digite o tamanho do vetor: " << endl;
    cin >> tamanho;
    int* vetor = new int [tamanho];
    
    for (int i=1 ; i < tamanho ; i++){
        cout << "digite o elemento " << i + 1 << " do vetor: " << endl;
        cin >> vetor[i];
    }

    for (int i=0 ; i < tamanho ; i++){
        cout << vetor[i] << " " << endl;
    }
    cout << endl;

    delete [] vetor;

    return 0; 
}

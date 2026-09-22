#include <iostream>
using namespace std;

void verifica(int *a,int tam ,int marcador1, int marcador2){

    int ini = -1;
    int fim = -1; 

    for(int i = 0; i < tam; i++){
        
        if(a[i] == marcador1){
            ini = i;
        }

        if(a[i] == marcador2){
            fim = i;
        }
    }

    if(ini > fim){
        int guarda = fim;
        fim = ini;
        ini = guarda;
    }

    for(int i = fim - 1; i > ini; i--){
        if(i != fim - 1)
            cout << " ";

        cout << a[i];
    }
}

int main(){
    
    int tam;

    cin >> tam;

    int *vet = new int[tam];

    int marc1, marc2;

    for(int i = 0; i < tam; i++){
        cin >> vet[i];
    }

    cin >> marc1 >> marc2;

    verifica(vet, tam, marc1, marc2);

    delete[] vet;
        
    return 0;
}
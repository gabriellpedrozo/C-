#include <iostream>
using namespace std;


void verifica(int *a, int *b, int tam){

    bool iguais = true;

    for(int i = 0; i < tam ; i++){
        bool encontrou = false;

        for(int j = 0; j < tam ; j++){

            if(a[i] == b[j]){
                encontrou = true;
            }
        }    
            if(encontrou == false){
                iguais = false;
            }

        

    }
        if(iguais){
            cout << "IGUAIS";
        }else{
            cout << "DIFERENTES";
    }

}

int main(){
    
    int tam;
    cin >> tam;

    int *vet1 = new int[tam];
    int *vet2 = new int[tam];

        for(int i = 0; i < tam ; i++)
            cin >> vet1[i];
        

        for(int i = 0; i < tam ; i++)
            cin >> vet2[i];
    

    verifica(vet1, vet2, tam);

    delete[] vet1;
    delete[] vet2;
    
    return 0;
}
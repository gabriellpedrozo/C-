#include <iostream>
using namespace std;

void segundos(int *a, int n){
   int maior = a[0], menor = a[0]; 

    for(int i = 1; i < n; i++){
    if(a[i] > maior){
        maior = a[i];
    }

    if(a[i] < menor){
        menor = a[i];
    }
}
    int segundomaior = menor;
    int segundomenor = maior;

    for(int i = 0; i < n; i++){

    if(a[i] > segundomaior && a[i] < maior){
        segundomaior = a[i];
    }

    if(a[i] < segundomenor && a[i] > menor){
        segundomenor = a[i];
    }
}

    float *novo = new float[n - 2];
    int j = 0;

    for(int i = 0; i < n; i++){
       if((a[i] != segundomaior) and (a[i] != segundomenor)){
            novo[j] = a [i];
            j++;
       }
    }

    for(int i = 0; i < n - 2; i++){
    cout << novo[i] << endl;
}
    delete[]novo;
}

int main(){
    int n;
    cin >> n;

    int *vet = new int [n];

    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    segundos(vet, n);

    delete[]vet;
    
    return 0;
}
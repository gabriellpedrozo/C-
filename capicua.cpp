#include <iostream>
using namespace std;

void compara(int *a, int n){
    bool capicua = true;

    for(int i = 0; i < n/2 && capicua; i++){

        if(a[i] == a[n-1-i]){
            cout << i << " " << a[i] << " "
                 << n-1-i << " " << a[n-1-i] << " ";
        }
        else{
            capicua = false;
        }
    }

    cout << endl;

    if(capicua){
        cout << "sim";
    }
    else{
        cout << "nao";
    }
}

int main(){
    int n;
    cin >> n;

    int *vet = new int [n];

    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    compara(vet, n);

    delete[]vet;
    
    return 0;
}
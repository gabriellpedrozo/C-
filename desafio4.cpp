#include <iostream>

using namespace std;

float potencia(float x, int y){
    double pot=1;
    int cont =1;
    while (cont <= y){
        pot*=x;
        cont++;

    }
    return pot;
}

int main(){
    float b;
    int e;

    cout << "Digite um numero real para ser a base!" << endl;
    cin >> b;

        while (true){
            cout << "Deseja elevar a qual expoente? (Digite um numero natural)" << endl;
            cin >> e;
            if(e<= 0){
                cout << " O numero informado nao e natural, digite outro numero!" << endl;
            }
            else{
                break;
            }
        }

    double respot=potencia(b,e);
    cout << "O resultado da potencia e: "<< respot << endl;
    
    
    return 0; 
}
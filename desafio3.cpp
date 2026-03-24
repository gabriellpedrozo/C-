#include <iostream>

using namespace std;

int fat (int x){
    int fatorial=1;
    for (int i=1 ; i <= x ; i++ ){
            fatorial*=i;
    }
    return fatorial;
}

int main(){
    int n;

        while (true){
            cout << "Vamos calcular o fatorial de um numero" << endl;

            cout << "Diga um numero inteiro positivo!" << endl;
            cin >> n;
            if(n <= 0){
                cout << " O numero informado e negativo!" << endl;
            }
            else{
                break;
            }
        }

        int valorfat = fat(n);
         cout << "O fatorial de: " << n << " e: " << valorfat << endl;

   

    return 0;  
}
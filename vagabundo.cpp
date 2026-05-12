#include <iostream>

using namespace std;

int main(){

    float prod = 0.0;
    float cont=1.0;
    float matriz[5][6];
    int linha, coluna;

    for(int i=0; i<5; i++) {
            for(int j=0; j<6; j++) {
                cin >> matriz[i][j];
        }
    }

    cin >> linha >> coluna;

    for (int j = 0; j < 6; j++) {
        prod += matriz[linha][j];
    }
    cout << prod << endl;

    for(int i=0; i<5; i++){
        cont *= matriz[i][coluna];
    }
    cout << cont << endl;
        return 0;
    }


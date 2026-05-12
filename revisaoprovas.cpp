#include <iostream>

using namespace std;

int main(){
    int matriz[8][8];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin >> matriz[i][j];
            if (matriz[i][j] == 1) {
                for(int t=0; t<8; t++){
                    int anal = matriz[i][t];
                }
                else if (matriz[i][j] == 2) {
                    for(int t=0; t<8; t++){
                        int anal2 = matriz[i][t];
                    }
                }
                else if (matriz[i][j] == 2) {
                    for(int t=0; t<8; t++){
                        int anal3 = matriz[t][j];
                    }
                }
                if (anal == 2 && anal2 == 2 && anal3 == 2) {
                    cout << "bate cabeça";
                }
            }
            if (matriz[i][j] == 1) {
                for(int t=0; t<8; t++){
                    int anal = matriz[t][j];
                    int anal2 = matriz[j][t];
                    if (anal == 2 &&) {
                        cout << anal << anal2;
                    }
                }
            }

    else if (matriz[i][j] == 2){

    }
        }
    }
    
    return 0;
}
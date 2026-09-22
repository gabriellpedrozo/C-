#include <iostream>

using namespace std;

//multiplica e divide por 100
// 1m --> 100cm

float mToCm(float m){

    return m * 100;
}

float cmToM(float cm){

    return cm / 100;
}  


int main(){

    float entrada;
    string unidade;
    float resultado;

    cin >> entrada >> unidade;

    if((unidade == "centimetro") or (unidade == "metro")){
        if(unidade == "centimetro"){
            resultado = cmToM(entrada);
            cout << resultado << "m" << endl;
    
        }else{
          resultado = mToCm(entrada);
          cout << resultado << "cm" << endl;
        }
    }else{
        cout<< "ERRO"<< endl;
    }



    return 0;
}
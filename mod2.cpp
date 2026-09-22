#include <iostream>

using namespace std;

//inclinacao max --> 8%

float calculo(float x, float y){

    float inclinacao = x * 100 / y;

    return inclinacao;

}

int main(){
    int rampas, altura, base;
    float inclinacao;
    int contador = 0;
    cin >> rampas;

    for(int i = 0; i < rampas; i++){
        cin >> altura >> base;
        inclinacao = calculo(altura, base);
        if(inclinacao <= 8 )
            contador++;
            
        cout << inclinacao << endl; 
    }

    cout << contador << endl;

    return 0;
}

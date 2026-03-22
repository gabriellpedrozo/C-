#include <iostream>

using namespace std;

// funcao f(x) = x^2 - 3x + 5.

float f(float x){
    float valor;
    valor = (x * x) - 3 * x + 5;
    return valor;
}

int main(){
    float a;
    cout << "Olhe a funcao f(x) = x^2 - 3x + 5." << endl;
    cout << "Informe um numero real" << endl;
    cin >> a;
    
    float valorf = f(a);

    cout << "O valor da funcao no ponto : " << a << " e: " << valorf << endl;


    return 0; 
}

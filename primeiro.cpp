#include <iostream>

 using namespace std;


  // estudo variaveis 
  int main(){
    int inteiro ;
    inteiro = 5;
    cout << inteiro << endl;

    float real;
    real = 5.2;
    cout << real << endl; 

    double real2;
    real2 = 5.2e99;
    cout << real2 << endl;

    bool booleano;
    booleano = true;
    cout << booleano << endl;

    char letra;
    letra = 'P';
    cout << letra << endl;

    string palavra; 
    palavra = "Lenda";
    cout << palavra << endl;


    // teste valores de entrada 
    int idade;

    cout << "Qual sua idade? " << endl;
    cin >> idade;
    cout << "Sua idade e : " <<idade << endl;

    return 0;
  }
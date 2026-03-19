#include <iostream>

using namespace std;

// int t;

#define pi 3.14;
#define bomdia cout << "bom dia senhor instrutor!\n";


void saudacao(){
    cout << "ola, codigo\nBy Pedrozo!\n";

}

// & x vira o a se tira-lo nao muda o valor de a na principal
int somar(int &x, int y){
     int t;
    t=1;

    int soma;
    soma = x+y;
    x=30;
    return soma;
}

int main(){

    int t;
    t=0;

    saudacao();

    int a=5, b=4;
    int s;
    s = somar(a,b);
    cout << "valor de a:" << a << endl;
    cout << "Soma: " << s << endl;

     cout << "Valor de t: " << t << endl;

     pi;
     bomdia;


    return 0; 
}
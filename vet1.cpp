#include <iostream>

using namespace std;

void med(double x[], int tamanho){
    double soma= 0;
    int acima = 0;
    int abaixo = 0;
    int namedia = 0;

    for(int i = 0; i < 7; i++){
        soma += x[i];
    }

    double media = soma/ (double)tamanho;

    for(int i = 0; i < tamanho; i++){
        
        if(x[i] > media){
            acima++;
        }else if (x[i] == media){
            namedia++;
        }else {
            abaixo++;
        }
    }

    double maior = x[0];
        for(int i = 0; i < tamanho; i++){
           
        if(x[i] > maior)
            maior = x[i];
}
    cout << media << endl<< acima << endl << maior << endl;
}


int main(){
    int media;
    double temperaturas [7];

    for(int i = 0; i < 7; i++)
        cin >> temperaturas[i];

    med(temperaturas, 7);

    return 0;
}
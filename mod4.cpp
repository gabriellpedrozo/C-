#include <iostream>

using namespace std;

int somaDigitos(int n){
    int soma =0;
    while(n > 0){
        soma+= n%10;
        n = n/10;
    }
    return soma;
}

bool ehHarshard(int n){

    int soma = somaDigitos(n);
    
    if(n % soma == 0)
        return true;
    else 
        return false;    

}

int main(){
    int soma, resto;
    int numero;
    cin >> numero;

    soma = somaDigitos(numero);
    resto = numero % soma;
    if (ehHarshard(numero) == true){
        cout << resto << " sim" << endl;
    }else {
        cout << resto << " nao" << endl;
     }


}
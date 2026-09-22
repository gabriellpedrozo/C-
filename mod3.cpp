#include <iostream>
#include <fstream>

using namespace std;

int verifica(int x){

    if(x % 3 == 0){
        return -1;
    }else{
    return x;
}
}


int main(){
    int numeros, resultado;

    string nomeArquivo;
    cin >> nomeArquivo;
    ifstream arquivo(nomeArquivo);
    ofstream saida("saida.txt");

    while(arquivo >> numeros){

    resultado = verifica(numeros);
    if(resultado != -1){
        saida<< resultado << " ";
    }

    }

    arquivo.close();
    saida.close();

    return 0;
} 
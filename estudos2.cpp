#include <iostream>

using namespace std;


char LerPosicao( string palavra, int posicao ){
    
    char letra = palavra[posicao];

    return letra;
}

string imprimir( char letra ){
    
    letra = toupper( letra );

    if( letra == 'A'){
        return "Encontrou A";
    }
    if( letra == 'C'){
        return "Encontrou C";
    }
    if( letra == 'D'){
        return "Encontrou D";
    }
    else{
        return "Outro caractere";
    }
}

int main(){
    
    string palavra;
    int posicao;

    cin >> palavra;
    cin >> posicao;

    char letra = LerPosicao(palavra, posicao);

    cout << imprimir(letra) << endl;

    return 0;
}


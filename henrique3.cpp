#include <iostream>

using namespace std;

void menoresValores( int vetor[10], int &menor1, int &menor2 ){

    menor1 = 0;
    menor2 = 1;

    if( vetor[menor2] < vetor[menor1]){
        swap(menor1, menor2);
    }

    for( int i = 2; i < 10; i++ ){
        
        if( vetor[i] < vetor[menor1] ){
            menor2 = menor1;
            menor1 = i;
        } else if( vetor[i] < vetor[menor2] ){
            menor2 = i;
    
        }
    
    }
}

bool palindromo(string palavra){

    int tamanho = palavra.size();
    
    for(int i = 0; i < tamanho / 2; i++){

        if(palavra[i] != palavra[tamanho - 1 - i]){
            return false;
        }

    }

    return true;
}


int main(){

    int vetor[10];
    int m1 = 0, m2 = 0;

    for( int i = 0; i < 10; i++ ){
        cin>>vetor[i];
    }

    menoresValores( vetor, m1, m2 );
    
    cout<<m1<<endl;
    cout<<m2<<endl;

    /*string palavra;
    
    cin >> palavra;

    if(palindromo(palavra)){
        cout << "Palindromo";
    }
    else{
        cout << "NO";
    } */

    return 0;
}



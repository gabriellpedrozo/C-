#include <iostream>
#include <string>
    
using namespace std;

string trocar(string palavra){

    int tamanho = palavra.size();
    

    for (int i = 0; i < tamanho; i++){

        palavra[i] = tolower(palavra[i]);

        if (palavra[i] == 'a'){
            palavra[i] = 'b';
        }

        else if (palavra[i] == 'e'){
            palavra[i] = 'f';
         }

        else if (palavra[i] == 'i'){
                  palavra[i] = 'j';
        }

        else if( palavra[i] == 'o' ){
            palavra[i] = 'p';
        }

        else if (palavra[i] == 'u'){
            palavra[i] = 'v';
        }
    }

    return palavra;
}
    
int main(){
    
    string palavra = "";
    getline(cin, palavra);

    cout<<trocar( palavra )<<endl;
}




#include <iostream>
#include <string>

using namespace std;

void diferentes(string vetor1[7], string vetor2[7]) { // subprograma

    bool encontrou = false;

    for (int i = 0; i < 7; i++) {  // ver primeiro vetor

        bool existe = false;

        for (int j = 0; j < 7; j++) { // verifica se o item existe no segundo vetor

            if (vetor1[i] == vetor2[j]) {
                existe = true;
            }
        }

        if (existe == false) {  // se não existir no segundo vetor, imprime
            cout << vetor1[i] << endl;
            encontrou = true;
        }
    }

    if (encontrou == false) { // se todos existirem no segundo vetor
        cout << "NADA" << endl;
    }
}

int main() {

    string vetor1[7];
    string vetor2[7];

    for (int i = 0; i < 7; i++) {
        cin >> vetor1[i];
    }
                                       // ler vetores 
    for (int i = 0; i < 7; i++) {
        cin >> vetor2[i];
    }

    diferentes(vetor1, vetor2);

    return 0;
}
#include <iostream>

using namespace std;

int main(){

    while(true){

        int idade;
        float renda;

        cout << "Insira seus dados e veja se possui condicoes para partcipar do programa 'Moradia popular'" << endl;
        cout << "Digite sua idade: "<< endl;
        cin >> idade;
        cout << "Digite sua renda mensal" << endl;
        cin >> renda;

        if(idade < 21 || renda > 1200){
            cout << "Infelizmnte voce nao se enquadra nos requisitos do programa " << endl;
        }
        else {
            cout << "Voce se enquadra aos requisitos do programa!" << endl;
        }
        int q;

        cout << "deseja consultar outras condicoes?(1-sim/0-nao)" << endl;
        cin >> q;  

            if (q == 0){
                break;
            }
    }
    
    return 0;
}
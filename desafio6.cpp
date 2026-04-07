#include <iostream>

using namespace std;


//terminar codigo 
int main(){
    float gastofamilia[5], media; 
    
    for (int i = 0; i < 5; i++){
        cout << "Digite os gastos com alimentacao da familia " << i+1 << endl;
        cin >> gastofamilia[i];
        media += gastofamilia[i]; 
    }
    
    media/= 5;
    cout << "Media de gastos: "<< media << endl;

    for(int i=0; i < 5; i++){
        if(gastofamilia[i] < media){
            cout << "A familia "<< i + 1 << " tem gastos abaixo da media "
        }
    }

    
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    float gastofamilia[5], media; 
    
    for (int i = 0; i < 5; i++){
        cout << "Digite os gastos com alimentacao das familias " << i+1 << endl;
        cin >> gastofamilia[i];
        media += gastofamilia[i]; 
    }
    
    media= media/5;
    cout << "Media de gastos: "<< media << endl;

    
    return 0;
}
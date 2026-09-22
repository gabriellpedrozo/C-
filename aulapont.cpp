#include <iostream>

using namespace std;

void verifica(int num[], int qnt){

    int *por2 =new int[qnt]; 
    int *por3 = new int[qnt] ; 
    int *por2e3= new int[qnt];
    int tam2 = 0, tam3 = 0, tam23 = 0;

     for(int i = 0 ; i < qnt; i++){

     if(num[i] % 2 == 0){
        por2[tam2] = num[i];
        tam2++;
    }

     if(num[i] % 3 == 0){
        por3[tam3] = num[i];
        tam3++;
    }

     if((num[i] % 2 == 0) and (num[i] % 3 == 0)){
        por2e3[tam23] = num[i];
        tam23++;
    }
}

       if(tam2 == 0){
        cout << "0" << endl;
       }else{
        for(int i = 0; i < tam2; i++)
        cout << por2[i] << " ";
       }

       cout << endl;

        if(tam3 == 0){
        cout << "0" << endl;
       }else{
        for(int i = 0; i < tam3; i++)
        cout << por3[i] << " ";
       }

       cout << endl;

        if(tam23 == 0){
        cout << "0" << endl;
       }else{
        for(int i = 0; i < tam23; i++)
        cout << por2e3[i] << " ";
       }

       delete[] por2;
       delete[] por3;
       delete[] por2e3;

    
}


int main(){
    int quant;

     cin >> quant;

    int *num = new int[quant];

    for(int i = 0 ; i < quant; i++)
        cin >> num[i];
    
    verifica(num,quant);

    delete[] num;

    return 0;
}
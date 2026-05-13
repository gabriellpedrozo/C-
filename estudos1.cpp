#include <iostream>

using namespace std;

int calculoVariacao( int pop[], int indice ){
    
    int variacao = abs(pop[indice] - pop[indice-1]);

    return variacao;
    
}

void posicaoMenores( int pop[], int &pos1, int &pos2 ){

    int m1 = 0, m2 = 0;
    if( calculoVariacao( pop, 1 ) < calculoVariacao( pop, 2 )){
        m1 = calculoVariacao( pop, 1 );
        m2 = calculoVariacao( pop, 2 );
        pos1 = 1;
        pos2 = 2;
    }
    else{
        m1 = calculoVariacao( pop, 2 );
        m2 = calculoVariacao( pop, 1 );
        pos1 = 2;
        pos2 = 1;
    }

    for( int i = 3; i < 10; i++ ){
        if( calculoVariacao( pop, i ) < m1 ){
            m2 = m1;
            m1 = calculoVariacao( pop, i );
            pos2 = pos1;
            pos1 = i;
        }
        else if( calculoVariacao( pop, i ) < m2 ){
            m2 = calculoVariacao( pop, i );
            pos2 = i;
        }
    }

}

int main(){

    int ano, pop[10], vetorAnos[10];
    cin >> ano;
    
    for(int i = 0; i < 10; i++){
        cin >> pop[i];
    }

    for(int i = 0; i < 10; i++){
        vetorAnos[i] = ano;
        ano++;
    }

    int menor1 = 0, menor2 = 0;
    posicaoMenores( pop, menor1, menor2 );

    cout<<vetorAnos[menor1]<<endl;
    cout<<vetorAnos[menor2]<<endl;

    return 0;
}
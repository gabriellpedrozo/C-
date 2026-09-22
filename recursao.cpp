#include <iostream>
using namespace std;

int soma(int n){
    if(n == 0){
        return 0;
    }else{
        return n + soma(n-1);
    }
}
int fatorial(int n){
    if((n == 0) or (n ==1)){
        return 1;
    }else{
        return n + fatorial(n-1);
    }
}
int fibonacci(int n){
    if((n == 0) or (n ==1)){
        return n;
    }else{
        return n * fibonacci(n-1) + fibonacci (n-2);
    }
}
int main(){
    int num; 
    cin >> num;

    cout << fibonacci(num)<< endl;

    return 0;
}
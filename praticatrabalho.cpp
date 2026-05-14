#include <iostream>
#include <string>

using namespace std;

string OtoHtroughB(string hexadecimal) { // transforma hexadecimal em binário
    
    string binario = "";
    string octal = "";
        
    for (int i = 0; i < hexadecimal.size(); i++) {

        switch (toupper(hexadecimal[i])) {

            case '0': binario += "0000"; break;
            case '1': binario += "0001"; break;
            case '2': binario += "0010"; break;
            case '3': binario += "0011"; break;
            case '4': binario += "0100"; break;
            case '5': binario += "0101"; break;
            case '6': binario += "0110"; break;
            case '7': binario += "0111"; break;
            case '8': binario += "1000"; break;
            case '9': binario += "1001"; break;
            case 'A': binario += "1010"; break;
            case 'B': binario += "1011"; break;
            case 'C': binario += "1100"; break;
            case 'D': binario += "1101"; break;
            case 'E': binario += "1110"; break;
            case 'F': binario += "1111"; break;
        }
    }

     while (binario.size() % 3 != 0) { //zeros
        binario = "0" + binario;
    }

    for (int i = 0; i < binario.size(); i += 3) { // BINARIO -> OCTAL

        string grupo = "";

        grupo += binario[i];
        grupo += binario[i + 1];
        grupo += binario[i + 2];

        if (grupo == "000") octal += '0';
        else if (grupo == "001") octal += '1';
        else if (grupo == "010") octal += '2';
        else if (grupo == "011") octal += '3';
        else if (grupo == "100") octal += '4';
        else if (grupo == "101") octal += '5';
        else if (grupo == "110") octal += '6';
        else if (grupo == "111") octal += '7';
    }

    return octal;
}

int main() {

    string hexa;

    cout << "Digite um hexadecimal: ";
    cin >> hexa;

    cout << "Octal: " << OtoHtroughB(hexa);

    return 0;
}


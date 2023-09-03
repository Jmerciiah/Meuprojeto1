#include <iostream>

using namespace std;

int main () {


int  a, b;

    
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;

    int  soma = a + b;
    int  subtracao = a - b;
    int  multiplicacao = a * b;
    int  divisao = a / b;
    int  resto = a % b;

    
    cout << "Soma = " << soma << endl;
    cout << "Subtração = " << subtracao << endl;
    cout << "Multiplicação = " << multiplicacao << endl;
    cout << "Divisão = " << divisao << endl;
    cout << "Resto = " << resto << endl;

    return 0;

}
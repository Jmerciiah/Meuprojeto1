#include <iostream>

using namespace std;

int main() {
    float a, b;

    cout << "Digite o valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b;

    float soma = a + b;
    float subtracao = a - b;
    float multiplicacao = a * b;

    cout << "Soma = " << soma << endl;
    cout << "Subtração = " << subtracao << endl;
    cout << "Multiplicação = " << multiplicacao << endl;
    

     if (b == 0) {
        cout << "Erro: divisão por zero não é permitida." << endl;
    } else {
        float divisao = a / b;
        cout << "Divisão = " << divisao << endl;
    }

    int resto = static_cast<int>(a) % static_cast<int>(b);
    cout << "Resto = " << resto << endl;

    return 0;
}
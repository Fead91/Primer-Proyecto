#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operacion;
    float resultado;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese la operación (+, -, *, /): ";
    cin >> operacion;

    switch (operacion) {
        case '+':
            resultado = num1 + num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '-':
            resultado = num1 - num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '*':
            resultado = num1 * num2;
            cout << "Resultado: " << resultado << endl;
            break;
        case '/':
            if (num2 != 0) {
                resultado = (float) num1 / num2;
                cout << "Resultado: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir por cero." << endl;
            }
            break;
        default:
            cout << "Operación no válida." << endl;
            break;
    }

    return 0;
}

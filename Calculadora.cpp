#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char operacion;
    float resultado;

    cout << "Ingrese el primer n�mero: ";
    cin >> num1;

    cout << "Ingrese el segundo n�mero: ";
    cin >> num2;

    cout << "Ingrese la operaci�n (+, -, *, /): ";
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
            cout << "Operaci�n no v�lida." << endl;
            break;
    }

    return 0;
}

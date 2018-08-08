#include <iostream>
#include "Calculadora.h"

using namespace std;

int main() {
    Calculadora<int, long> micalc;
    Calculadora<float, double> micalc2;
    cout << "Ejercicio 00/02\n" << endl;
    cout << micalc.sumar(2,2) << endl;
    cout << micalc.restar(2,3) << endl;

    try {
        cout << micalc.dividir(4,0) << endl;
    } catch (int e ){
        cout <<e << endl;
    }
    cout << micalc.multiplicar(2,3) << endl;
    cout << micalc.sumar(2,2) << endl;
    cout << micalc.restar(2,3) << endl;
    cout << micalc.dividir(4,2) << endl;
    cout << micalc.multiplicar(2,3) << endl;

    return 0;
}
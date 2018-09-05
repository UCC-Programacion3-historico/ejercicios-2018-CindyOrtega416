#include <iostream>
#include "../Pila/Pila.h"
#include <string.h>
using namespace std;

int main() {
    char *palabra = const_cast<char *>("Prueba");
    Pila<char> hola;
    for(int i = 0; i<strlen(palabra) ; i++){
        hola.push(palabra[i]);
    }
    for(int i = 0; i<strlen(palabra) ; i++){
        cout << hola.pop();
    }
    return 0;
}
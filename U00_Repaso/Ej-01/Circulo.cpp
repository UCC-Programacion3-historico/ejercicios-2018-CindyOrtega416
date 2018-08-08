#include "Circulo.h"
#define PI 3.1415926

float Circulo::getRadio() const {
    return Circulo::radio;
}

void Circulo::setRadio(float radio){
    Circulo::radio=radio;
}
float Circulo::getPerimetro(){
    return 2*PI*radio;
}

float Circulo::getSuperficie(){

}
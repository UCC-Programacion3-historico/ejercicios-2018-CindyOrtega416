
unsigned int potencia(unsigned int base, unsigned int exp) {
    if(exp==0)
        return 1; //return 1 porque todo num elevado a la potencia 0 da 1

    return base * potencia(base, exp-1);
}


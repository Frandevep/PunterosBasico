#include <stdio.h>

int main() {

    int numero = 10;  // variable entera
    int *puntero;     // declaración de un puntero

    puntero = &numero;  // el puntero almacena la direccion de 'numero'

    // mostramos la informacion
    printf("Valor de numero: %d\n", numero);
    printf("Direccion de numero: %p\n", &numero);
    printf("Valor almacenado en puntero: %p\n", puntero);
    printf("Valor al que apunta puntero: %d\n", *puntero);

    return 0;
}

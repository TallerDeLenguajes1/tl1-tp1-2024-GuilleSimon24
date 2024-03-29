#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Hola mundo\n");

    int entero = 10;
    int *p_entero;

    p_entero = &entero;

    printf("El contenido del puntero es: %d\n", *p_entero);
    printf("La direccion de memoria almacenada por el puntero: %p\n", p_entero);
    printf("Direccion de memoria de la variable: %p\n", &entero);
    printf("Direccion de memoria del puntero: %p\n", &p_entero);
    printf("Tamanio de memoria utilizado: %zu\n", sizeof(entero));
}
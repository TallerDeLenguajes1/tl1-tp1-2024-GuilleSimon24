//Funciones

#include <stdio.h>

//a) cuadrado de un numero

int cuadrado(int x){
    x = x*x;
    return x;
}

//b) Cuadrado con void

void cuadravoid(int* x){

    int aux = *x;
    aux *= aux;

    *x = aux;

}

//c) direccion y contenido

void direccionContenido(int* x){
    printf("La direccion es: %p\n", x);
    printf("El contenido es: %d\n", *x);

}

//d) Dos parametros, invertir valores

void invertir(int* a, int*b){
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;

}
//e) Ordenar
void orden(int* a, int* b){

    if (*a >= *b)
    {
        int aux;
        aux = *a;
        *a = *b;
        *b = aux;
    }
    
}

int main(){

    int a = 1, b = 2, c = 3, d = 4;

    printf("El cuadrado del primero: %d\n", cuadrado(a));

    //Con void
    printf("Calculo con void el cuadrado de: %d\n", d);
    cuadravoid(&d);
    printf("El cuadrado con void: %d\n", d);

    //direccion
    puts("Vamos a saber la direccion y contenido de la variable c");

    direccionContenido(&c);

    //invertimos

    puts("vamos a invertir a y b");
    printf("a =  %d y b = %d\n", a,b);
    invertir(&a, &b);
    printf("Ahora a = %d y b = %d\n", a, b);

    //ordenamos

    puts("Vamos a ordenar los valores de a y d");
    orden(&a, &d);
    printf("El valor mas chico deberia ser a: %d\n", a);
    printf("El valor mas grande deberia ser b: %d", d);   

    return 0;
}
#include <stdio.h>


int main(){

    int num = 1, *puntero, tam;

    puntero = &num;

    tam = sizeof(num);
    
    printf("Hola mundo\n");

    printf("El contenido del puntero: %d\n", *puntero);
    printf("La direccion de memoria almacenada por el puntero es: %p\n", puntero);
    printf("La direccion de memoria de la variable es: %p\n", &num);
    printf("La direccion de memoria del puntero: %p\n", &puntero);
    printf("El tamaño de memoria utilizado por esa variable usando la funcion sizeof(): %d\n", tam);

    return 0;
}
#include <stdio.h>
// ejercicio a
int cuadrado(int num);

//ejercicio b
void cuadradoV(int num);

//ejercicio d
void invertir(int a, int b);

//ejercicio e
void orden(int a, int b);

int main(){
    int num = 2, numCuadrado, numIngresado;//inserto una variable para los ejercicios a y b

    int a, b;//variables para el ejercicio d

    numCuadrado = cuadrado(num);
    printf("Apartado a), El cuadrado del numero %d es: %d\n", num, numCuadrado);

    cuadradoV(num); //ejercicio b

    printf("Ingrese un numero:\n");//ejercicio c
    scanf("%d",&numIngresado);
    printf("La direccion de la variable del numero ingresado es: %p y su contenido es %d\n",&numIngresado,numIngresado);

    printf("Ingrese 2 valores a y b respectivamente:\n"); // ejercicio f
    scanf("%d %d", &a, &b);

    invertir(a,b);
    orden(a,b);



    return 0;
}

int cuadrado(int num){
    int cuadrado;
    cuadrado = num * num;
    return cuadrado;
}

void cuadradoV(int num){
    int cuadrado;
    cuadrado = num * num;
    printf("El cuadrado del numero %d es: %d\n", num, cuadrado);
}

void invertir(int a, int b){
    int aux;
    aux = a;
    a = b;
    b = aux;
    printf("Ahora el valor de a es %d y el valor de b es %d\n", a, b);
}

void orden(int a, int b){
    if (a > b)
    {
        int aux = b;
        b = a;
        a = aux;
    }
    printf("El valor ordenado de a es %d y el de b es %d", a, b);
}
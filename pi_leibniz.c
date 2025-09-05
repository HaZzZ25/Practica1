/**
* Programa que calcula el valor aproximado de PI usando la serie de Leibniz
* Hazel
*/


#include <stdio.h>

// Funcion que calcula PI con n términos
double calcular_pi(int n) {
    double pi = 0.0;
    int signo = 1;
    for (int i = 0; i < n; i++) {
        pi += signo * (4.0 / (2 * i + 1));
        signo *= -1; // alterna el signo
    }
    return pi;
}

int main() {
    int n;
    printf("Ingrese la cantidad de terminos: ");
    scanf("%d", &n);
    printf("El valor aproximado de PI es: %.10f\n", calcular_pi(n));
    return 0;
}

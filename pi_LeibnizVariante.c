/** 
* Programa variante para calcular PI con la variante de la serie de leibniz
* Elias
*/ 

#include <stdio.h>

// Calcula PI con n terminos
double calcular_pi(int n) {
    double pi = 0.0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            pi += 4.0 / (2 * i + 1);
        else
            pi -= 4.0 / (2 * i + 1);
    }
    return pi;
}

int main() {
    int n;
    printf("Ingrese numero de terminos: ");
    scanf("%d", &n);
    printf("Pi aproximado con %d terminos = %.8f\n", n, calcular_pi(n));
    return 0;
}

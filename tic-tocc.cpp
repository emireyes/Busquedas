#include<stdio.h>
#include<time.h>

// Funci�n para sumar dos n�meros
int suma(int a, int b) {
    return a + b;
}

// Funci�n para restar dos n�meros
int resta(int a, int b) {
    return a - b;
}

int main() {
    clock_t tic = clock();
    
    // Llamada a las funciones definidas
    int resultado_suma = suma(10, 103);
    int resultado_resta = resta(100, 400);

    clock_t toc = clock();
    printf("Resultado de la suma: %d\n", resultado_suma);
    printf("Resultado de la resta: %d\n", resultado_resta);
    printf("Elapsed: %f seconds\n", (double)(toc - tic) / CLOCKS_PER_SEC);
    
    return 0;
}


#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int n, quadrado;
    printf("\nInforme o número do calculo: ");
    scanf("%d", &n);
    quadrado = n * n;
    printf("\nResultado: %d", quadrado);

    return 0;
}
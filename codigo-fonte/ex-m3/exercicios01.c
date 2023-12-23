#include <stdio.h>
#include <Windows.h>

int main(void) {
    SetConsoleOutputCP(CP_UTF8);
    int n = 0;
    printf("Digite um número: ");
    scanf("%d", &n);

    printf("Número digitado: %d", n);

    return 0;
}
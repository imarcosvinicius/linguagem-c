#include <stdio.h>
#include <Windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int n1, n2, n3, n4, media;

    printf("\nDigite as notas solicitadas: \n");
    printf("\nDigite a nota 1: ");
    scanf("%d", &n1);
    printf("Digite a nota 2: ");
    scanf("%d", &n2);
    printf("Digite a nota 3: ");
    scanf("%d", &n3);
    printf("Digite a nota 4: ");
    scanf("%d", &n4);
    media = (n1 + n2 + n3 + n4) / 4;
    printf("\nMédia do aluno: %d", media);

    return 0;
}
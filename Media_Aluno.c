#include <stdio.h>

int main() {
    char nome[50];
    float nota1, nota2, nota3, media;

    printf("Digite o nome do aluno: ");
    scanf("%s", nome);

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Aluno: %s", nome);
    printf("Media: %.2f", media);

    return 0;
}

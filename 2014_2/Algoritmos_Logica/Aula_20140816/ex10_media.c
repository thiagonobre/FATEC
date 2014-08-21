#include <stdio.h>

int main() {

    float nota1 = 0, nota2 = 0, nota3 = 0, media = 0;

    printf ("Entre com 3 notas de 0 a 10\n");
    scanf ("%f%f%f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf ("A media final foi: %.2f", media);

    return 0;
}

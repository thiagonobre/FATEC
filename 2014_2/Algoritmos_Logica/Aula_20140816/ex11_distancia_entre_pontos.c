#include <stdio.h>
#include <math.h>

int main() {

    float x1 = 0, y1 = 0, x2 = 0, y2 = 0, distancia = 0;

    scanf ("%f%f%f%f", &x1, &y1, &x2, &y2);

    distancia = sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf ("A distancia entre os dois pontos é: %.2f", distancia);

    return 0;
}

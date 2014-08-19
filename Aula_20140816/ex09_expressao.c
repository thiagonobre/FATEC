#include <stdio.h>

int main() {

    int a = 0, b = 0, c = 0, r = 0, s = 0;
    float d = 0;

    printf ("Entre com 3 valores inteiros positivos\n");
    scanf ("%d%d%d", &a, &b, &c);

    r = (a+b)*(a+b);
    s = (b+c)*(b+c);

    d = (float)(r+s)/2;

    printf ("%.2f", d);

    return 0;
}

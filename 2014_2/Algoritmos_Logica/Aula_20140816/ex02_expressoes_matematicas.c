#include <stdio.h>

int main() {
    float a = 0, b = 0, c = 0, d = 0, e = 0;

    a = 2*3+4*5;
    b = (6+18)/2;
    c = 4.5/(12.2-3.1);
    d = 4.6*(3+14.9);
    e = (12.1+18.9)*(15.3-3.8);

    printf ("\n%.2f\n%.2f\n%.2f\n%.2f\n%.2f\n", a, b, c, d, e);

    return 0;
}

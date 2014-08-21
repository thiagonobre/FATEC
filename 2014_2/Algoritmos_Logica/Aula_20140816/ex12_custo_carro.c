#include <stdio.h>

int main() {

    float custoFabrica = 0,
        custoConsumidor = 0,
        porcDist = 0.28, 
        valorDist = 0, 
        porcImp = 0.45, 
        valorImp = 0, 
        valorTotal = 0;

    scanf ("%f", &custoFabrica);

    valorDist = custoFabrica * porcDist;
    valorImp = custoFabrica * porcImp;
    custoConsumidor = custoFabrica + valorDist + valorImp;

    printf ("Valor do distribuidor: %.2f\n", valorDist);
    printf ("Valor dos impostos: %.2f\n", valorImp);
    printf ("Custo ao consumidor: %.2f\n", custoConsumidor);

    return 0;
}

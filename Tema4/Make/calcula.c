#include "calc.h"
#include <stdio.h>

int main(){
    int a = 10;
    int b = 5;

    printf("La suma de %d i %d és %d\n",a, b, suma(a,b));
    printf("La resta de %d i %d és %d\n",a,b,resta(a,b));
    printf("La multiplicació de %d i %d és %d\n",a,b,multiplicacio(a,b));
    printf("La divisió de %d i %d és %d\n",a,b,divisio(a,b));
    printf("El major entre %d i %d és %d\n",a,b,mayor(a,b));
}

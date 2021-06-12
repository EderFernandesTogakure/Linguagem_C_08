#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r, x=5, y=3;

    r = !(x > 2);
    printf("Resultado = %d\n", r);

    r = !((x > 7)&&(x > y));
    printf("Resultado = %d\n", r);

}

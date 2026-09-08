#include <stdio.h>
#include <stdlib.h>

void reciboPago();

int main()
{
    printf("===RECIBO DE SUELDO===");
    reciboPago();
    system("pause");
    return 0;
}

void reciboPago()
{
    float dt, sd, isr, imss, sn, st;

    printf("\n Ingresa los dias trabajados: ");
    scanf("%f", &dt);
    printf("\n Ingresa el sueldo diario: ");
    scanf("%f", &sd);
    st = dt * sd;
    isr = st * 0.0192;
    imss = st * 0.0221;
    sn = (st - isr) - imss;
    printf("\n El sueldo bruto es: $ %f", st);
    printf("\n ISR: $ %f", isr);
    printf("\n IMSS: $ %f", imss);
    printf("\n El sueldo a pagar es: $ %f", sn);
}

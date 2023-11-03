#include <stdio.h>
int main ()
{
    float raio, perimetro;
    double Pi = 3.1415927, area;
    printf ("Introduza o raio da circunferência: ");
    scanf ("%f", &raio);
    area = Pi * raio * raio;
    perimetro = Pi * 2 * raio;
    printf("Área = %f\nPerímetro = %f\n", area, perimetro);
    return 0;
}

#include <stdio.h>

int main() {
    double A, B, C;
    double areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite as tres medidas A, B e C: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    areaQuadrado = A * A;
    areaTriangulo = (A * B) / 2.0;
    areaTrapezio = ((A + B) * C) / 2.0;

    printf("AREA DO QUADRADO = %.4lf\n", areaQuadrado);
    printf("AREA DO TRIANGULO = %.4lf\n", areaTriangulo);
    printf("AREA DO TRAPEZIO = %.4lf\n", areaTrapezio);

    return 0;
}

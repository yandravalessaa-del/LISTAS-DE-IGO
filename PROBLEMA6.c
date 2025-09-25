#include <stdio.h>
#include <math.h>

int main() {
    double r, area;
    printf("Digite o valor do raio: ");
    scanf("%lf", &r);

    area = M_PI * r * r; // ou usar 3.14159

    printf("AREA = %.3lf\n", area);

    return 0;
}

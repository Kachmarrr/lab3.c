#include <stdio.h>
#include <math.h>

#define PI 3.1415926

double arithmetic_mean(double x1, double x2) {
    return (x1 + x2) / 2.0;
}

double calculate_z1(double beta) {
    return pow(cos(3.0 / 8.0 * PI - beta / 4.0), 2) - pow(cos(11.0 / 8.0 * PI + beta / 4.0), 2);
}

double calculate_z2(double beta) {
    return (sqrt(2.0) / 2.0) * sin(beta / 2.0);
}

int main() {
    double x1, x2, x, y, beta, z1, z2;

    printf("Enter two values for x1 and x2: ");
    scanf("%lf %lf", &x1, &x2);

    printf("The arithmetic mean is: %.2f\n", arithmetic_mean(x1, x2));

    printf("Enter a value for x: ");
    scanf("%lf", &x);

    y = -2.7 * x * x * x + 0.23 * x * x - 1;
    printf("The value of y is: %.2f\n", y);

    printf("Enter the value of beta (in radians): ");
    scanf("%lf", &beta);

    z1 = calculate_z1(beta);
    z2 = calculate_z2(beta);

    printf("z1 = %.6f\n", z1);
    printf("z2 = %.6f\n", z2);

    if (fabs(z1 - z2) < 1e-6) {
        printf("z1 and z2 are equal.\n");
    } else {
        printf("z1 and z2 are not equal.\n");
    }

    return 0;
}

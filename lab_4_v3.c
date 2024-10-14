#include <stdio.h>
#include <math.h>
#include <windows.h>

void printVariables(float a, float b, float c) {
    if (fabs(a) >= 100000 || fabs(b) >= 100000 || fabs(c) >= 100000) {
        printf("Error: One or more numbers have more than 5 digits in the integer part.\n");
    } else {
        printf("a = %.3f; b = %.3f; c = %.3f\n", a, b, c);
    }
}

int main() {
    SetConsoleCP(65001); //set input encoding to UTF-8
    SetConsoleOutputCP(65001); //set output encoding to UTF-8

    // Task 1
    printf("Andrii\nKachmar\nIhorovych\n+380980362126\n");

    // Task 2
    printf("І на оновленій землі\nВрага не буде, супостата,\nА буде син і буде мати,\nІ будуть люди на землі…\n\nТ. Г. Шевченко\n");

    // Task 3
    float u, r;
    printf("Enter two real numbers separated by a space: ");
    scanf("%f %f", &u, &r);
    printf("You entered: u = %.3f, r = %.3f\n", u, r);

    // Task 4
    float a, b, c;
    printf("Enter three real numbers separated by spaces: ");
    scanf("%f %f %f", &a, &b, &c);
    printVariables(a, b, c);

    return 0;
}

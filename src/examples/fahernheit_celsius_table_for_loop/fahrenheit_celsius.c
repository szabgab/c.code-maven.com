#include<stdio.h>

int main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;      // lower limit of temperature table
    upper = 300;    // upper limit
    step = 20;      // step size

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
    }
    return 0;
}
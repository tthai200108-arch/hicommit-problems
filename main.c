#include <stdio.h>

int main() {
    double w, h;
    scanf("%lf %lf", &w, &h);

    double h_m = h / 100.0;
    double bmi = w / (h_m * h_m);

    if (bmi < 18.5) {
        printf("UNDERWEIGHT\n");
    }
    if (bmi >= 18.5 && bmi < 25.0) {
        printf("NORMAL\n");
    }
    if (bmi >= 25.0 && bmi < 30.0) {
        printf("OVERWEIGHT\n");
    }
    if (bmi >= 30.0) {
        printf("OBESE\n");
    }

    return 0;
}
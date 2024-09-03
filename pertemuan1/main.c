#include <stdio.h>

int main () {
    float C, R, K, F;

    printf("Input angka suhu dalam Celcius : ");
    scanf("%f", &C);

    R = (4.0/5.0) * C;
    F = ((9.0/5.0) * C) + 32;
    K = C + 273;

    printf("%.2f derajat Celcius dalam Reamur adalah %.2f\n", C,R);
    printf("%.2f derajat Celcius dalam Fahrenheit adalah %.2f\n", C,F);
    printf("%.2f derajat Celcius dalam Kelvin adalah %.2f\n", C,K);

    return 0;
}
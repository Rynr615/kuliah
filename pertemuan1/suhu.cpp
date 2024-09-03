#include <iostream>

using namespace std;

int main () {
    float C, R, K, F;

    printf("Input angka suhu dalam Celcius");
    scanf("%f", &C);

    R = 0.8 * C;
    F = (1.8 * C) + 32;
    K = C + 273;

    printf("%f derajat Celcius dalam Reamur adalah %f\n", C,R);
    printf("%f derajat Celcius dalam Fahrenheit adalah %f\n", C,F);
    printf("%f derajat Celcius dalam Kelvin adalah %f\n", C,K);
}
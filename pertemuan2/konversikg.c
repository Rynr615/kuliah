#include <stdio.h>

int main() {
    // Studi Kasus 3: Aplikasi Konversi Berat dari Kilogram ke Gram
    /*Buat program sederhana yang mengkonversi berat dalam kilogram menjadi gram. 
    Program menerima input dalam kilogram dan menampilkan output dalam gram.*/

    // dekralasi variable, disini saya menggunakan float karena kg bisa bisa saja berupa desimal contoh 1.5
    float kg, gram;

    // menampilkan pesan berapa banyak kg yang ingin di konversi ke gram
    printf("Masukkan berat dalam kilogram : ");

    // input ke variable kg
    scanf("%f", &kg);

    // proses konversi
    gram = kg * 1000; // 1 kg = 1000 gram

    // menampilkan hasil konversi
    printf("%.2f kg adalah %.2f gram.\n", kg, gram);


}
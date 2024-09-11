#include <stdio.h>

int main() {

    // Studi Kasus 7: Aplikasi Konversi Usia ke Bulan dan Hari
    /*Buat program yang mengkonversi usia seseorang dalam tahun menjadi usia dalam 
    bulan dan hari. Program meminta input berupa usia dalam tahun.*/

    // dekralasi variable
    int tahun, bulan, hari;

    //menampilkan pesan nilai usia yang ingin dikonversi
    printf("Masukkan usia yang ingin dikonversi : ");

    //inputkan ke variable tahun
    scanf("%d", &tahun);

    //rumus konversi bulan dan hari

    bulan = tahun * 12;
    hari = tahun * 365;

    //menampilkan hasil konversi
    printf("Usia dalam bulan: %d bulan\n", bulan);
    printf("Usia dalam hari: %d hari\n", hari);

    return 0;

}
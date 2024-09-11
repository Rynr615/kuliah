#include <stdio.h>

int main() {
    //Studi Kasus 8: Aplikasi Penghitung Gaji Bersih
    /*Buatlah program yang menghitung gaji bersih karyawan setelah dipotong pajak. 
    Program menerima input gaji pokok dan persentase pajak, kemudian menghitung 
    dan menampilkan gaji bersih.*/

    //dekralasi float 
    float gajiPokok, pajak, gajiBersih;

    //menampilkan pesan untuk menginput gaji pokok
    printf("Masukkan gaji pokok : ");
    //membaca input gaji pokok
    scanf("%f", &gajiPokok);

    //menampilkan pesan untuk menginput persentase pajak
    printf("Masukkan persentase pajak : ");
    //membaca input persentase pajak
    scanf("%f", &pajak);

    //rumus gaji bersih
    gajiBersih = gajiPokok - (gajiPokok * pajak/100);
    
    //menampilkan gaji bersih
    printf("Gaji bersih : %.2f", gajiBersih);
}
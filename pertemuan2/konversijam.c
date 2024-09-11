#include <stdio.h>

int main () {
    /*Studi Kasus 2: Aplikasi Konversi Jam ke Menit dan Detik
    Buatlah program yang menerima input dalam bentuk jam, kemudian menghitung dan 
    menampilkan berapa menit dan detik yang setara dengan waktu tersebut.*/

    // dekralasi variable
    int jam, menit, detik;

    // menampilkan pesan berapa jam yang ingin di konversi ke menit dan detik
    printf("Silahkan masukkan berapa jam yang ingin di konversi ke menit dan detik : ");
    // input nilai ke variable jam
    scanf("%d", &jam);

    // rumus konversi menit dan detik
    menit = jam * 60;
    detik = jam * 3600;

    // menampilkan hasil konversi ke layar
    printf("%d jam sama dengan %d menit dan %d detik.\n", jam, menit, detik);


}
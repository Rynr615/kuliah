#include <stdio.h>

int main() {
    //Studi Kasus 5: Aplikasi Penghitung Harga Setelah Diskon
    /*Buat program yang menerima harga awal suatu barang dan persentase diskon, lalu 
    menghitung harga akhir setelah diskon.*/

    //dekralasi variable
    float hargaAwal, diskon, hargaAkhir;

    //menampilkan pesan harga awal 
    printf("Harga Awal: ");
    // menyimpan input ke varable hargaAwal
    scanf("%f", &hargaAwal);
    //menampilkan besaran diskon
    printf("Masukkan besaran: ");
    //menyimpan input ke variable diskon
    scanf("%f", &diskon);

    // rumus harga akhir setelah diskon
    hargaAkhir = hargaAwal - (hargaAwal * diskon/100);

    //menampikan harga akhir setelah diskon
    printf("Harga Akhir: %.2f\n", hargaAkhir);


}
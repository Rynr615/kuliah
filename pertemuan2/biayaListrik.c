#include <stdio.h>

int main () {
    //Studi Kasus 10: Aplikasi Penghitung Biaya Listrik
    /*Buat program yang menghitung biaya listrik berdasarkan daya yang digunakan dan 
    lama penggunaan. Program menerima input daya (watt) dan waktu penggunaan 
    (jam), serta biaya per kWh.*/

    // dekralasi variable
    float daya, waktu, tarif, biaya, energi;

    // menampilkan pesan berapa besar daya yang digunakan
    printf("Masukkan berapa besar daya yang digunakan dalam satuan watt : ");

    // masukkan ke variable daya
    scanf("%f", &daya);

    //menampilkan pesan untuk berapa waktu yang digunakan
    printf("Masukkan berapa lama waktu penggunaan dalam satuan jam : ");

    //masukkan ke variable waktu
    scanf("%f", &waktu);

    //menampilkan pesan untuk memasukkan tarif per kWh
    printf("Masukkan tarif per kWh : ");

    // masukkan ke variable tarif
    scanf("%f", &tarif);

    // Menghitung energi yang digunakan
    /* Rumus (daya / 1000) * waktu digunakan karena satuan yang dihitung adalah kilowatt-hours (kWh),
   sedangkan daya yang dimasukkan oleh user adalah satuan watt. 
   Oleh karena itu, daya perlu dikonversi dari watt ke kilowatt dengan membaginya oleh 1000,
   sehingga hasil akhirnya dalam satuan kilowatt (kW).*/
    energi = (daya/1000) * waktu;

    //mehitung biaya yang digunakan
    biaya = energi * tarif;

    //menampilkan hasil biaya
    printf("Biaya yang harus dibayarkan adalah : Rp.%.2f", biaya);


}
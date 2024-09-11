#include <stdio.h>

int main() {
    //Studi Kasus 6: Aplikasi Penghitung Jarak Tempuh
    /*Buatlah program yang menghitung jarak tempuh berdasarkan kecepatan dan waktu 
tempuh. Program menerima kecepatan (km/jam) dan waktu (jam), kemudian 
menampilkan jarak yang ditempuh.*/

// dekralasi variable
float jarak, kecepatan, waktu;

//menampilkan pesan berapa besaran kecepatan
printf("Masukkan besar kecepatan dalam satuan km : ");

//menginputkan kecepatan
scanf("%f", &kecepatan);

//menampilkan pesan berapa besaran waktu
printf("Masukkan waktu dalam satuan jam : ");

//menginputkan waktu
scanf("%f", &waktu);

//rumus jarak
jarak = kecepatan * waktu;

//menampilkan hasil jarak
printf("Jarak yang ditempuh adalah : %.2f km", jarak);

return 0;

}
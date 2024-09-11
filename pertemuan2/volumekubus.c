#include <stdio.h>

int main () {
    // Studi Kasus 4: Aplikasi Penghitung Volume Kubus
    /*Buatlah program yang menerima input sisi kubus dari pengguna dan menghitung 
    volume kubus tersebut*/

    // dekralasi varible
    int sisi_kubus;

    // menampilkan pesan angka yang ingin di input
    printf("Masukkan sisi kubus: ");
    // input variable ke sisi_kubus
    scanf("%d", &sisi_kubus);

    // rumus volume kubus
    int volume_kubus = sisi_kubus * sisi_kubus * sisi_kubus;

    // menampilkan hasil
    printf("Volume kubus: %d\n", volume_kubus);
}
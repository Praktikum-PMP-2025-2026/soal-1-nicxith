/* EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 
 * Modul      : Overview of C language
 * Pembuat    : Saragih, Jan Roman Arthuro
 * NIM        : 13224012
 * Deskripsi  : Program untuk menentukan apakah seseorang dapat masuk ke suatu tempat berdasarkan izin, suhu, radiasi, dan jam.
 */

#include <stdio.h>

int main() {

    int izin, suhu, radiasi, jam;
    
    scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);

    if (radiasi >= 6) {
        printf("TOLAK\n");
    } else if (suhu >= 390) {
        printf("KARANTINA\n");
    } else if (izin == 1 && (jam < 6 || jam > 20)) {
        printf("TOLAK\n");
    } else if (izin == 1) {
        printf("MASUK\n");
    } else if (izin == 2 && radiasi <= 2 && jam >= 8 && jam <= 18) {
        printf("MASUK\n");
    } else if (izin == 2) {
        printf("PEMERIKSAAN\n");
    } else if (izin == 3 && radiasi == 0 && suhu < 380) {
        printf("MASUK\n");
    } else {
        printf("TOLAK\n");
    }

    return 0;
}
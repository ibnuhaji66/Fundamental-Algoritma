#include <stdio.h>

int main() {
    // Filebase

    // read, write, append
    // r -> read
    // w -> write
    // a -> append
    // r+ -> read,write
    // w+ -> read,write
    // a+ -> append,read

    // open, process, close

    char txt[200];
    FILE *fp;

    fp = fopen("data.txt", "w"); // Buka file untuk menulis
    fprintf(fp, "Hello, world!"); // Tulis data ke file
    fclose(fp); // Tutup berkasnya

    fp = fopen("data.txt", "r"); // Buka file untuk dibaca
    fscanf(fp, "%[^\n]", txt); // Membaca data dari file
    printf("%s\n", txt); //Cetak data yang sudah dibaca
    fclose(fp); // Tutup berkasnya

    return 0;
}


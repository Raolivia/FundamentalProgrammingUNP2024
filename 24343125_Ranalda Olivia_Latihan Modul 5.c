/*
    Nama File : Modul5.c
    Programmer : Ranalda Olivia 
    Tgl. pembuatan : 18/10/2024
    Deskripsi : Perulangan 
*/
#include <stdio.h>
#include <string.h>

int main()
{   
    printf("MODUL5.c \n");
    printf("=====================================\n");
    printf("Nama  : Ranalda Olivia \n");
    printf("NIM   : 24343125 \n");
    printf("=====================================\n");
    printf("\n");
    
    int jumlahperulangan; 
    printf("Masukkan jumlah data mahasiswa: ");
    scanf("%d", &jumlahperulangan); 
    
   
    getchar();

    for (int i = 0; i < jumlahperulangan; i++) {
        char nama[100];
        char nim[20];
        char prodi[50];
        char universitas[50];
        char alamat[100];

        printf("\nSistem Informasi Data Mahasiswa\n");

        printf("Masukkan Nama         : ");
        scanf("%99[^\n]", nama);
        getchar(); // Kosongkan buffer

        printf("Masukkan NIM          : ");
        scanf("%19[^\n]", nim);
        getchar(); // Kosongkan buffer

        printf("Masukkan Program Studi: ");
        scanf("%49[^\n]", prodi);
        getchar(); // Kosongkan buffer

        printf("Masukkan Universitas  : ");
        scanf("%49[^\n]", universitas);
        getchar(); // Kosongkan buffer

        printf("Masukkan Alamat       : ");
        scanf("%99[^\n]", alamat);
        getchar(); // Kosongkan buffer

        // Output informasi mahasiswa
        printf("\nInformasi Data Mahasiswa yang Dimasukkan:\n");
        printf("Nama         : %s\n", nama);
        printf("NIM          : %s\n", nim);
        printf("Program Studi: %s\n", prodi);
        printf("Universitas  : %s\n", universitas);
        printf("Alamat       : %s\n", alamat);

        puts("\nTerima kasih atas informasi yang Anda berikan!");
    }
    
    return 0;
}
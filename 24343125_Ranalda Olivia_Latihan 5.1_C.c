#include <stdio.h>

// Fungsi untuk menghitung faktorial secara rekursif
int hitungFaktorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * hitungFaktorial(n - 1);
    }
}

int main()
{
    printf(" \t Hitung Faktorial\n");
    printf("\t=======================\n");
    printf("Nama    : Ranalda Olivia\n");
    printf("NIM     : 24343125\n");

    int n;

    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &n);

    // Memanggil fungsi dan menampilkan hasil
    int faktorial = hitungFaktorial(n);
    printf("Faktorial dari %d adalah: %d\n", n, faktorial);

    return 0;
}
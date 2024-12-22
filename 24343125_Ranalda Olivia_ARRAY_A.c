#include <stdio.h>

void judul() {
    printf("Nama  : Ranalda Olivia\n");
    printf("NIM   : 24343125\n");
}

int main() {
    judul();
    int angka[5] = {10, 20, 30, 40, 50};
    for(int i = 0; i < 5; i++) {
        printf("Angka ke-%d: %d\n", i + 1, angka[i]);
    }
    return 0;
}
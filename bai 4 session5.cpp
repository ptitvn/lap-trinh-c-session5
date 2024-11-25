#include <stdio.h>

int main() {
    int n;

    printf("Nh?p m?t s? nguyên dýõng t? 1 ð?n 10: ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("So nhap vào không hop le! Vui long nhap so to 1 den 10.\n");
    } else {
        printf("Bang cuu chuong cua %d:\n", n);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }

    return 0;
}


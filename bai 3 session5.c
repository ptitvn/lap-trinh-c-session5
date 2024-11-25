#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;
    
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vui long nhap mot so nguyen duong.\n");
        return 1;
    }

    for (i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Tong tu 1 den %d la: %d\n", n, sum);

    return 0;
}


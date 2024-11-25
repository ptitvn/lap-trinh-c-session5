#include <stdio.h>

int main() {
    int soChoTruoc, soNhap;

    printf("Nhap vao so cho truoc: ");
    scanf("%d", &soChoTruoc);

    do {
        printf("Nhap vao mot so: ");
        scanf("%d", &soNhap);
    } while (soNhap != soChoTruoc);

    printf("Ban da nhap dung so!\n");

    return 0;
}

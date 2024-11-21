#include <stdio.h>

int main() {
    float doC, doF;

    // khai bao bien 
    printf("Nhap nhiet do C: ");
    scanf("%f", &doC);

    // chuyen tu doC sang doF => cong thuc (doC * 9 / 5) + 32
    doF = (doC * 9 / 5) + 32;

    // In ket qua 
    printf("nhiet do F hien tai la : %.2f\n", doF);

    return 0;
}


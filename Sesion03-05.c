
 #include <stdio.h>

int main() {
    char hovaten[50];
    int tuoi;
    char phone[20];
    char email[50];

    // Nhap ho va ten 
    printf("nhap ho va ten: ");
    fgets(hovaten, sizeof(hovaten), stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);
    printf("Nhap phone: ");
    scanf("%s",&phone); 
    printf("Nh?p email c?a b?n: ");
    scanf("%s",&email);

    // In ra thông tin
    printf(": %s",hovaten);
    printf("S? tu?i: %d\n", tuoi);
    printf("S? ði?n tho?i: %s\n",phone);
    printf("Email: %s\n", email);

    return 0;
}


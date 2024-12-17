#include <stdio.h>

int main() {
    int mang[] = {10, 20, 30, 40, 50};
    int doDai = sizeof(mang) / sizeof(mang[0]);
    for (int i = 0; i < doDai; i++) {
        printf("Phan tu %d: %d\n", i + 1, mang[i]);
    }
    printf("Do dai cua mang: %d\n", doDai);
    return 0;
}


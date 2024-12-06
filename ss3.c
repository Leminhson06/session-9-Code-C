#include <stdio.h>

int main() {
    int arr[100];
    int n, currentLength = 0, delIndex;

    printf("Nhap so phan tu muon nhap (toi da 100): ");
    scanf("%d", &n);

    if (n > 100 || n < 0) {
        printf("So phan tu khong hop le!\n");
        return 0;
    }

    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    currentLength = n;

    printf("Nhap vi tri can xoa (0-%d): ", currentLength - 1);
    scanf("%d", &delIndex);

    if (delIndex < 0 || delIndex >= currentLength) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }

    for (int i = delIndex; i < currentLength - 1; i++) {
        arr[i] = arr[i + 1];
    }
    currentLength--;

    printf("Mang sau khi xoa: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

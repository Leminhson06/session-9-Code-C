#include <stdio.h>

int main() {
    int arr[100];
    int n, currentLength = 0, addIndex, addValue;

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

    printf("Nhap vi tri can them (0-99) va gia tri: ");
    scanf("%d %d", &addIndex, &addValue);

    if (addIndex < 0 || addIndex >= 100) {
        printf("Vi tri khong hop le!\n");
        return 0;
    }

    if (addIndex >= currentLength) {
        arr[addIndex] = addValue;
        currentLength = addIndex + 1;
    } else {
        for (int i = currentLength; i > addIndex; i--) {
            arr[i] = arr[i - 1];
        }
        arr[addIndex] = addValue;
        currentLength++;
    }

    printf("Mang sau khi them: ");
    for (int i = 0; i < currentLength; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

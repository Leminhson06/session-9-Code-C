#include <stdio.h>

int main(){
    int arr[] = {10,20,30,40,50};
    int size = size(arr) / sizeof(arr[0]);
    int pos, val;

    printf("Mảng ban đầu: ");
    for (int i = 0; i<size; i++){
        printf("%d", arr[i]);
        printf("\nNhap vị tri (0-%d) và vị trí mới: ", size - 1);
        scanf("%d %d", &pos, &val);

    if (pos >= 0 && pos < size) {
        arr[pos] = val;
        printf("Mang sau khi sua: ");
        for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    } else {
        printf("Vi tri khong hop le!");
    }

    return 0;
}


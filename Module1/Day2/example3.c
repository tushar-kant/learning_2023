#include <stdio.h>

int main() {
    int size;
    printf("size of the array");
    scanf("%d", &size);

    int arr[size];
    printf("elements of the array\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }
    printf("sum%d\n", sum);

    return 0;
}

#include <stdio.h>

void swapalternate(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

void display(int arr[], int size) {
    printf("alternated array ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("size:");
    scanf("%d", &size);
    
    int arr[size];
    printf("elements of array");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\n");
    
    swapalternate(arr, size);
    display(arr, size);
    
    return 0;
}
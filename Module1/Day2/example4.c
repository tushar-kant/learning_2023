#include <stdio.h>
int countsetbit(int num) {
    int count = 0;
    while (num != 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}
int funtotalbit(int arr[], int size) {
    int totalBits = 0;
    for (int i = 0; i < size; i++) {
        totalBits += countsetbit(arr[i]);
    }
    return totalBits;
}

int main() {
    int a[3] = {0x1, 0xF4, 0x10001};
    int size = sizeof(a) / sizeof(a[0]);
    int totalbits = funtotalbit(a, size);
    printf("total%d\n", totalbits);

    return 0;
}

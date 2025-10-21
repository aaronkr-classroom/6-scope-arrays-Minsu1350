// q3.c

#include <stdio.h>

int main() {
    int arr[9] = { 4,6,9,8,7,2,5,1,3 };
    int i, j= 0;
    int sum = 0;

    for (i = 0; i < 5; i++) {
        for (j = 1; j < 5; j++) {
            if (arr[j] < arr[j + 1]) {
                arr[i] = arr[j + 1];
            }
        }
        for (i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
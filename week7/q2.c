// q2.c

#include <stdio.h>

int main() {
    int arr[9] = { 4,6,9,8,7,2,5,1,3 };
    int i = 0; 
    int sum = 0;

    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i] + arr[i]);
    }

    return 0;
}
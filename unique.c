/*
Name: Sanchita Warade
Roll No: 61
Branch: IT
Batch: C*/

#include <stdio.h>

int main() {
    int arr[] = {4, 2, 3, 2, 1, 4, 5, 6, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

        Unique(arr, size);

    return 0;
}

void Unique(int arr[], int size) {
    printf("Unique elements in the array: ");
    
    for (int i = 0; i < size; i++) {
        int isUnique = 1;

        // Check if arr[i] is unique
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\n");
}


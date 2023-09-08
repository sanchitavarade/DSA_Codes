/*
Name: Sanchita Warade
Roll No: 61
Branch: IT
Batch: C*/

#include <stdio.h>

int countDuplicates(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] != -1) { // Skip elements that have already been counted
            int duplicate = 0;

            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    duplicate++;
                    arr[j] = -1; // Mark the duplicate element as visited
                }
            }

            if (duplicate > 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int arr[] = {4, 2, 3, 2, 1, 4, 5, 6, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    int duplicateCount = countDuplicates(arr, size);
    printf("Total number of duplicate elements: %d\n", duplicateCount);

    return 0;
}

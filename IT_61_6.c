/*
Name: Sanchita Warade
Roll No: 61
Branch: IT
Batch: C*/

#include <stdio.h>

#define MAX_SIZE 100

// Function to insert an element at the end of the array
int insertElement(int arr[], int size, int element) {
    if (size < MAX_SIZE) {
        arr[size] = element;
        return size + 1; // Return the new size
    } else {
        printf("Array is full. Cannot insert element.\n");
        return size;
    }
}

// Function to delete an element from the array
int deleteElement(int arr[], int size, int element) {
    if (size == 0) {
        printf("Array is empty. Cannot delete element.\n");
        return size;
    }

    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            for (int j = i; j < size - 2; j++) {
                arr[j] = arr[j + 1];
            }
            found = 1;
            printf("Element %d deleted successfully!\n", element);
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", element);
    }
    return found ? size - 1 : size;
}

// Function to traverse and display the elements of the array
void traverse(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to search for an element in the array
void search(int arr[], int size, int element) {
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("Element %d found in the array.\n", element);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", element);
    }
}

int main() {
    int arr[MAX_SIZE];
    int size = 0;
    int choice, element;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert element\n");
        printf("2. Delete element\n");
        printf("3. Traverse array\n");
        printf("4. Search element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to insert: ");
                scanf("%d", &element);
                size = insertElement(arr, size, element);
                break;
            case 2:
                if (size == 0) {
                    printf("Array is empty. Cannot delete element.\n");
                } else {
                    printf("Enter the element to delete: ");
                    scanf("%d", &element);
                    size = deleteElement(arr, size, element);
                }
                break;
            case 3:
                traverse(arr, size);
                break;
            case 4:
                printf("Enter the element to search: ");
                scanf("%d", &element);
                search(arr, size, element);
                break;
            case 5:
                printf("Exiting the program.\n");
                return 0;
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }

    return 0;
}

/*
Name: Sanchita Warade
Roll No: 61
Branch: IT
Batch: C*/

#include <stdio.h>
#include <string.h>

struct Student {
    int roll_no;
    char name[50];
    float percentage;
};

void sortAscending(struct Student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].percentage > arr[j + 1].percentage) {
                struct Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    struct Student students[5];
    
    // Input student records
    for (int i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Name: ");
        scanf(" %[\n]", students[i].name);
        printf("Percentage: ");
        scanf("%f", &students[i].percentage);
    }

    // Sort students in ascending order of percentage
    sortAscending(students, 5);

    // Display sorted student records
    printf("\nStudent Records in Ascending Order of Percentage:\n");
    
    printf("Roll No\nName\nPercentage\n");

    for (int i = 0; i < 5; i++) {
        printf("%d\n%s\n%.2f\n", students[i].roll_no, students[i].name, students[i].percentage);
    }

    return 0;
}

/*
Name: Sanchita Warade
Roll No: 61
Branch: IT
Batch: C*/

#include <stdio.h>
void main() {
    int n,largest;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    largest = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest) 
        {
            largest = arr[i];
        }
    }
    
    printf("The largest element in the array is: %d\n", largest);
    

}

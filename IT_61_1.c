/*
Name: Sanchita Warade
Roll No: 61
Branch: IT
Batch: C*/

#include <stdio.h>
  void main() {
        int data, n1 = 0, n2 = 1, temp, flag = 0;
        printf("Enter the input:");
        scanf("%d", &data);
        /* 0 and 1 are fibonacci numbers */
        if (data == n1 || data == n2) {
                printf("%d is a fibonacci number\n", data);      
        }
        while (n2 <= data) {
                temp = n2;
                n2 = n1 + n2;
                n1 = temp;
                if (n2 == data) {
                        flag = 1;
                        break;
                }
        }   
        if (flag) {
                printf("\n%d is a fibonacci number\n", data);
        } else {
                printf("\n%d is not a fibonacci number\n", data);
        }
        
  }        
            



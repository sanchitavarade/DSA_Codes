/*
Name: Sanchita Warade
Roll No: 61
Branch: IT
Batch: C*/

#include <stdio.h>

int main()
{
        int n,c=1,b,i,j;
        printf("Input number of lines");
        scanf("%d",&n);
        for(i=0;i<=n;i++)
        {
            for(b=1;b<=n-i;b++)
            printf(" ");
            for(j=0;j<=i;j++)
            {
                if(j==0||i==0)
                   c=1;
                else
                   c=c*(i-j+1)/j;
                printf("%4d",c);   
            }
            printf("\n");
        }
        return 0;
}
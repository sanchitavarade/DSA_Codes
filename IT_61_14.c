
/*
Name = Sanchita Warade
Roll No. = 61
pid = 14
SE-IT (sem 3)
2023-24
*/

/*Array implementation of double-ended Queue*/

#include<stdio.h>
int f=-1, r=-1;
int n=5, x, ch;
int arr[5];
void makeEmpty(int arr[])
{
    //making Queue empty
    f=r=-1;
}
void enQueueRear(int x, int arr[])
{
    if((r==n-1)&&(f==0)||(f==r+1))
    {
        //Queue Overflow
        printf("Queue is full");
        return;
    }
    if(f==-1)
    {
        //entering first value
        f++;
    }
    r = (r+1)%n;
    arr[r]= x;
}
void enQueueFront(int x, int arr[])
{
    if((r==n-1)&&(f==0)||(f==r+1))
    {
        //Queue Overflow
        printf("Queue is full");
        return;
    }
    if(f==-1)
    {
        //entering first value
        enQueueRear(x, arr);
        return;
    }
    if(f==0){
    	//entering element in end as cannot enter before
    	f=n-1;
    	arr[f]=x;
    	return;
    }
    f--;
    arr[f]=x;
}
void deQueueFront(int arr[])
{
    if(f==-1)
    {
        //Queue Underflow
        printf("Queue is empty");
        return;
    }
    if(f==r)
    {
        //single element to pop
        f=-1;r=-1;
        return;
    }
    f=(f+1)%n;
}
void deQueueRear(int arr[])
{
    if(f==-1)
    {
        //Queue Underflow
        printf("Queue is empty");
        return;
    }
    if(f==r)
    {
        //single element to pop
        f=-1;r=-1;
        return;
    }
    if(r==0){
    	r=n-1;
    }
    else{
    	r--;
    }
}
void display(int arr[])
{
    if(f==-1)
    {
        //no element to print
        printf("Queue is empty");
        return;
    }
	for(int i=f; i!=r; i=(i+1)%n){
		printf("%d\n", arr[i]);
	}
	printf("%d", arr[r]);
}
void main()
{

    do{
        //description of menu bar//
        printf("\n\n\n\n-----These are the menu panel-----");
        printf("\n1. Enter element in Que from front end");
        printf("\n2. Enter element in Que from rear end");
        printf("\n3. Delete from Que from front end");
        printf("\n4. Delete from Que from rear end");
        printf("\n5. Display ");
        printf("\n6. Exit");
        printf("\nenter the option no.: ");
        scanf("%d", &ch);

       // swtich on the entere choice

        switch(ch)
        {
           /*Calling the functions case wise*/
            case 1: 
            printf("enter the number you want to push: ");
            scanf("%d", &x);
            enQueueFront(x, arr);
                break;
            case 2: 
            printf("enter the number you want to push: ");
            scanf("%d", &x);
            enQueueRear(x, arr);
                break;
            case 3: deQueueFront(arr);
                break;
            case 4: deQueueRear(arr);
                break;
            case 5: display(arr);
                break;
            case 6: printf("\nExiting the program");
                break;
            default:
                printf("incorrect choice");
        } 
    }while (ch!=6);
   
}
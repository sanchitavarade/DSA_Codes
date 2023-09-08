/*
Name: Sanchita Warade
Roll No: 61
Branch: IT
Batch: C 
*/
# include <stdio.h>
# include <stdlib.h>
//# include <conio.h>

struct node
{
int info;
struct node *next;
};

struct node *list;

struct node* getnode (void)
{
return  (( struct node* ) malloc (sizeof(struct node)));
}

void freenode(struct node *p)
{
free(p);
}


void display()
{
int i;
struct node *t;
t=list;

if(t==NULL)
		printf("\n The Linked List is Empty");
	else
	{
	       printf("\n The Linked List Elements are:");
    while(t!=NULL)
		{
			printf("-> %d ",t-> info);
			t=t->next;
		}
	}

}


void insertbeg (int x) //function to add the node at the begining
{
struct node *newnode;
newnode=getnode();
newnode->info=x;
newnode->next= list;
//printf("inserted %d",x);
list=newnode;
display();
}

void insertend(int x)  //function to add the node at the end
{
struct node *newnode, *temp;
newnode=getnode();
newnode->info =x;
newnode->next=NULL;

temp=list;

if(temp==NULL)                 // Condition to check whether list is empty or not
		list=newnode;
else
	{
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
	display();
}

void insertloc(int p, int x)  //function to add the node at the given location
{

struct node *newnode, *temp;
int i;
temp=list;
			
if(temp==NULL)             // Condition to check whether list is empty or not
	
	 insertbeg(x);

else
	{				for(i=1;i<p-1;i++)
				{

					 if(temp-> next==NULL)
					{
					printf("There are less than %d elements in the List, so inserted element at the end",p);
					break;
					}
				   temp=temp->next;
				}
			newnode = getnode();
			newnode->info=x;
			newnode->next=temp->next;
			temp->next=newnode;
			display();
	}
}





void delbeg() // function to delete node at begining
{
struct node * temp;
temp=list;

 if(list==NULL)
	 printf("List is already Empty");
 else
	{
	printf("Element  %d successfully deleted",temp->info);
		  list=temp->next;
	
	freenode(temp);
		display();
	}
}

void delend() // function to delete node at end
{int x;
struct node * temp, *t1;                           // *t1 point to element before the deleted element
temp=list;

 if(list==NULL)											//   list is empty
	 printf("List is Empty");
 else
	{
       if(temp->next==NULL)						 //   List has only one element
		{
		    x=temp->info;
			list=NULL;
	    }
	   else
		{
			while(temp->next!=NULL)
			{
		  t1=temp;
			  temp=temp->next;
			}
			x=temp->info;
			t1->next=NULL;
	    }
		printf("Element  %d successfully deleted",x);
		freenode(temp);
		display();
	}
}


void delloc(int p) // function to delete the node at the given location
{
int x,i;
struct node * temp, *t1;
temp=list;
 if(list==NULL)											//   list is empty
	 printf("List is already Empty");
else
	{
		if(p==1)
				list=list->next;
		else
		{
		for(i=1;i<p;i++)
		{
			if(temp-> next==NULL)
				{
					printf("There are less than %d elements in the Less",p);
					break;
				}
				t1=temp;                                     // Follower
				temp=temp->next;
		}
		}
	   if(temp->next!=NULL)
		{
	   printf("Element  %d successfully deleted",temp->info);
	   t1->next=temp->next;
	   freenode(temp);
		}

			display();
	}
}

void search(int x) // function to search the list 
{

int i;
struct node * temp;
temp=list;
if(list==NULL)
    printf("List is Empty");
else
{
 i=1;
 while (temp->next!=NULL)
 {
    if (temp->info==x)
     {
      printf("Position of Element %d is %d",x,i);
     break;
     }
    temp=temp->next;
    i++;

 }
if(temp->next==NULL && temp->info==x)
printf (" Position of Element %d is %d", x, i);
if(temp->next==NULL && temp->info!=x)
  printf("\n Element Not Found");

}
}

void main ()
{
struct node *getnode(void);
int ch,p,x;

int ans;


do
{
//clrscr();
printf("\n   Linked List  ");
printf("\n 1. Insert at begining");
printf("\n 2. Insert at end");
printf("\n 3. Insert at location");
printf("\n 4. Delete at begining");
printf("\n 5. Delete at end");
printf("\n 6. Delete at location");
printf("\n 7. Search an element");
printf("\n 8. Display List");
printf("\n 9. Exit");

printf("\n Enter your Choice : ");
scanf("%d",&ch);
switch(ch)
	{
	 case 1: printf(" Enter the node value:");
				scanf("\n %d",&x);
				insertbeg(x);
			      //	printf("\n after insert method");
			      //	getch();
				break;
	 case 2 : printf(" Enter the node value:");
				scanf("\n %d",&x);
				insertend(x);
				break;
	case 3 : printf("\n Enter the node value:");
				scanf("\n %d",&x);
				printf("\n Enter the position for element %d :",x);
				scanf("\n %d",&p);
				insertloc(p,x);
				break;
	case 4 : delbeg();
             break;
	case 5 : delend();
             break;
	case 6 : printf("Enter the node no. to be deleted:");
		     scanf("%d",&p);
		     delloc(p);
             break;
	case 7 : printf("\n Enter the node value:");
		     scanf("\n %d",&x);
		     search(x);
             break;
	case 8 : display();
             break;
	case 9 : exit(1);

	default : printf ("\n Invalid Choice");
	}

	printf("\n Do you want to continue (1=yes/0=no)?");
	scanf("%d",&ans);
//	printf("\n %d",ans);
//	getch();
}
while (ans==1);


	}
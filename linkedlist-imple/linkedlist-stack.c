#include<stdio.h>
#include<stdlib.h>
typedef struct node * position ;
struct node
{
int data ;
position next ;
} ;
void create() ;
void push() ;
void pop() ;
void display() ;
position s, newnode, temp, top ; 
void main() {
int op ;

do {
printf( "\n Linked List Implementation of stack operations \n\n" ) ;
printf( "\n Press 1-Create\n 2-Push\n 3-Pop\n 4-Display\n 5-Exit\n" ) ;
printf( "\n Your option ? " ) ;
scanf( "%d",& op) ;
switch (op) {
case 1:
create( ) ;
break ;
case 2:
push();
break;
case 3:
pop();
break;
case 4:
display();
break;
case 5:
exit(0);
}
}while(op<5);


}
void create()
{
int n,i;
s=NULL;
printf("Enter the no of nodes to be created\n");
scanf("%d",&n);
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data\t");
scanf("%d",&newnode->data);
newnode->next=NULL;
top=newnode;
s=newnode;
for(i=2;i<=n;i++)
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data\t");
scanf("%d",&newnode->data);
newnode->next=top;
s=newnode;
top=newnode;
} }
void display()
{ top=s;
while(top!=NULL)
{
printf("%d->",top->data);
top=top->next;
}
printf("NULL\n");
}
void push()
{ top=s;
newnode=(struct node*)malloc(sizeof(struct node));
printf("Enter the data\t");
scanf("%d",&newnode->data);
newnode->next=top;
top=newnode;
s=newnode;
display();
}
void pop()
{
top=s;
if(top==NULL)
printf("Empty stack\n\n");
else
{
temp=top;
printf("Deleted element is \t %d\n\n",top->data);
s=top->next;
free(temp);
display();
} }

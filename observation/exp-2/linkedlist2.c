#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insert();
void find();
void delete();
typedef struct node *position;
position L,p,newnode;
struct node
{
int data;
position next;
};
void main()
{
int choice;
do
{
printf("1.create\n2.display\n3.insert\n4.find\n5.delete\n\n\n");
printf("Enter your choice\n\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
create();
break;
case 2:
display();
break;
case 3:
insert();
break;
case 4:
find();
break;
case 5:
delete();
break;
case 6:
exit(0);
}
}
while(choice<7);
}
void create()
{
int i,n;
L=NULL;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\n Enter the number of nodes to be inserted\n");
scanf("%d",&n);
printf("\n Enter the data\n");
scanf("%d",&newnode->data);
newnode->next=NULL;
L=newnode; p=L;
for(i=2;i<=n;i++)
{
newnode=(struct node *)malloc(sizeof(struct node));
scanf("%d",&newnode->data);
newnode->next=NULL;
p->next=newnode;
p=newnode;
}
}
void display()
{ p=L;
while(p!=NULL)
{
printf("%d -> ",p->data);
p=p->next;
}
printf("Null\n");
}
void insert()
{
int ch;
printf("\nEnter ur choice\n");
printf("\n1.first\n2.middle\n3.end\n");
scanf("%d",&ch);
switch(ch)
{
case 2:
{
int pos,i=1;
p=L;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data to be inserted\n");
scanf("%d",&newnode->data);
printf("\nEnter the position to be inserted\n");
scanf("%d",&pos);
newnode->next=NULL;
while(i<pos-1)
{
p=p->next;
i++;
}
newnode->next=p->next;
p->next=newnode;
p=newnode;
display();
break;
}
case 1:
{
p=L;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data to be inserted\n");
scanf("%d",&newnode->data);
newnode->next=L;
L=newnode;
display();
break;
}
case 3:
{
p=L;
newnode=(struct node*)malloc(sizeof(struct node));
printf("\nEnter the data to be inserted\n");
scanf("%d",&newnode->data);
while(p->next!=NULL)
p=p->next;
newnode->next=NULL;
p->next=newnode;
p=newnode;
display();
break;
}
}
}
void find()
{
int search,count=0;
printf("\n Enter the element to be found:\n");
scanf("%d",&search);
p=L;
while(p!=NULL)
{
if(p->data==search)
{
count++;
break;
}
p=p->next;
}
if(count==0)
printf("\n Element Not present\n");
else
printf("\n Element present in the list \n\n");
}
void delete()
{
position p,temp;
int x; p=L;
if(p==NULL)
{
printf("empty list\n");
}
else
{
printf("\nEnter the data to be deleted\n");
scanf("%d",&x);
if(x==p->data)
{ temp=p;
L=p->next;
free(temp);
display();
}
else
{
while(p->next!=NULL && p->next->data!=x)
{
p=p->next;
}
temp=p->next;
p->next=p->next->next;
free(temp);
display();
}
}
}


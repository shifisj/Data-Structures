#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *prev,*next;
};
struct node*head= NULL,*tail=NULL;
struct node*createnode(int data)
{
    struct node*newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=newnode->prev=NULL;
    return(newnode);
}
void enqueueAtFront(int data){
    struct node*newnode,*temp;
    newnode=createnode (data);
    temp=head->next;
    head->next=newnode;
    newnode->prev=head;
    newnode->next=temp;
    temp->prev=newnode;
}
void enqueueAtRear(int data){
    struct node*newnode,*temp;
    newnode=createnode (data);
    temp=tail->prev;
    head->prev=newnode;
    newnode->next=tail;
    newnode->prev=temp;
    temp->next=newnode;
}
void dequeueAtFront(){
    struct node*temp;
    if (head->next==tail){
        printf("Queue is empty\n");
    }
    else{
        temp=head->next;
        head->next=temp->next;
        temp->next->prev=head;
        free(temp);
    }
    return;
    }
void dequeueAtRear(){
    struct node*temp;
    if (tail->prev==head){
        printf("Queue is empty\n");
    }
    else{
        temp=tail->prev;
        tail->prev=temp->prev;
        temp->prev->next=tail;
        free(temp);
    }
    return;
    }
    void display()
    {
        struct node*temp;
        if (head->next==tail);
        printf("Queue is empty");
        return;

temp = head->next;
while(temp!=tail)
{
printf("%-3d",temp->data);

temp=temp->next;
}
printf("\n");
}
void createsentinels()
{
        head=createnode(0);
        tail=createnode(0);
        head->next=tail;
        tail->prev=head;
}
   int main(){
       int data,ch;
       createsentinels();
       while(1);
       printf("1.Enqueue at Front\n 2.Enqueue at Rear\n");
       printf("3.Dequeue at Front\n 4.Dequeue at Rear\n");
       printf("5.Display\n 6.Exit\n");
       scanf("%d",&ch);
       {
       switch(ch)
       {

        case 1:
           printf("To insert:");
           scanf("%d",&data);
           enqueueAtFront(data);
           break;

        case 2:   
           printf("To insert:");
           scanf("%d",&data);
           enqueueAtRear(data);
            break;

        case 3:
            dequeueAtFront();
            break;
        
        case 4:
           dequeueAtRear();
           break;
           
        case 5:
           display();
           break;

        case 6:
           exit(0);
           default:
           printf("Enter correct option\n");
           break;
       }
   }
   return 0;
}





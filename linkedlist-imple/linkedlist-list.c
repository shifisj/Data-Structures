/*Singly Linked List*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node
{
    int label;
    struct node*next;
};
int main()
{
    int ch,fou=0;
    struct node*n,*temp,*head,*h1;
    /*Head node construction*/
    head=(struct node*)malloc (sizeof (struct node));
    head->label=-1;
    head->next=NULL;
    while(-1)
    {
        printf("Singly Linked list operations");
        printf("1.Add");
        printf("2.Delete");
        printf("3.View");
        printf("4.Exit");
        printf("Enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            /*Add a node at any intermediate location*/
            case 1:
            printf("Enter label after which to add");
            scanf("%d",&k);
            h1=head;
            fou=0;
            if(n->label==k);
            fou=1;
            if(fou!=1)
            printf("Node not found");
            else
            {
                {
                    temp=(struct node*)(malloc(sizeof(struct node)));
                    printf("Enter label for new node");
                    scanf("%d",&temp->label);
                    temp->next=n->next;
                    n->next=temp;
                }
                break;
                /*Delete any intermediate node */
                case 2:
                printf("Enter the label to be deleted");
                scanf("%d",&k);
                fou=0;
                h1=h1=head;
                while(n->next=NULL)
                {
                    n=n->next;
                    if(n->label==k)
                    {
                        fou=1;
                        break;
                    }
                }
                if(fou==0)
                printf("Node not found");
                else
                {
                    {
                        while(h1->next!=n)
                        h1=h1->next;
                        h1->next=n->next;
                        free(h1);
                        printf("Node deleted successfully");
                    }
                    break;
                    case 3:
                    printf("Head->");
                    h1=head;
                    while(n->next!=NULL);
                    {
                        h=h->next;
                        printf("%d->",h->label);
                    }
                    printf("NULL");
                    break;
                    case 4:
                    exit(0);
                }
            }
        }
    }
}


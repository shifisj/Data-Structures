#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 5
int top=-1;
void push(int x)
{
stack[++top]=x;
}
int pop()
{
return(stack[top--]);
}
void view()
{
int i;
if(top<0)
printf("Stack Empty");
else
{
printf("\n\nTop->\n\n");
for(i=top;i>=0;i--)
{
printf("%d",stack[i]);
}
printf("\n");
}
}
int main()
{
int ch=0,val;
while(ch!=4)
{
printf("Stack Operation");
printf("\n1.Push\n");
printf("\n2.Pop\n");
printf("\n3.View\n");
printf("\n4.Quit\n");
printf("\nEnter choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
if (top<max-1)
{
printf("Enter stack element\n");
scanf("%d"\n,&val);
push(val);
}

else
{
printf("Stack overflow");
break;
case 2:
if(top<0)
printf("Stack overflow");
else
{
val=pop();
printf("Popped element is %d",val);
}
break;
case 3:
view();
break;
case 4:
exit(0);
default:
printf("Invalid choice");
}
}
}
}

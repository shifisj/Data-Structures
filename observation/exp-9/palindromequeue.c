#include<stdio.h>
int main()
{
    int num,reverse_num=0,rem,temp;
    printf("Enter the integer: ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        reverse_num=reverse_num*10+rem;
        temp/=10;
    }
    if (reverse_num==num)
    printf("%d is a palindrome number",num);
    else
        printf("%d is not a palindrome number",num);
        return 0;
}

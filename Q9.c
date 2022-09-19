//Program to Convert even number into its upper nearest odd number Switch Statement.
#include<stdio.h>
int main()
{
    int Number,a,b;
    printf("Enter a number to be round off to nearest odd or even\n");
    scanf("%d",&Number);
    switch(Number%2==0)
    {
    case 1:
        b=Number+1;
        printf(" Rounded off to nearest upper odd =%d",b);
        break;
    case 0:
        b=Number-1;
        printf(" Rounded off to nearest lower even=%d",b);
        break;
    }
}

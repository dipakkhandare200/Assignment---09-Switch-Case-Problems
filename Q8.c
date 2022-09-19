//Program to convert a positive number into a negative number and negative number into a positive number using a switch statement.
#include<stdio.h>
int main()
{
   int i,a,b,c;
   printf("1.positive number into a negative number\n");
   printf("2.negative number into a positive number\n");
   printf("Enter what is choice\n ");
   scanf("%d",&i);
   switch(i)
   {
   case 1:
     printf("Enter a number \n ");
     scanf("%d",&a);
     c=a*(-1);
     printf("the number converted %d",c);
     break;
   case 2:
      printf("Enter a number \n ");
      scanf("%d",&a);
      c=a*(-1);
      printf("the number converted %d",c);
      break;
   default:
    printf("Invaid Choice");
    break;
   }
}

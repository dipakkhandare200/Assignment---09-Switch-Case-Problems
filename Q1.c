//Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main()
{
 int x;
 printf("Enter the month number you want to check how many days(1-12)\n");
 scanf("%d",&x);
 switch(x)
 {
 case 1:
 case 3:
 case 5:
 case 7:
 case 8:
 case 10:
 case 12:
      printf("31 days in month ");
           break;
 case 4:
 case 6:
 case 9:
 case 11:
      printf("30 days in month ");
           break;
 case 2:
      printf("29 or 28 days in month ");
           break;
 default:
    printf("invalid number  ");
           break;
 }
}

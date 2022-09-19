//Write a menu driven program with the following options:
//a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
//b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not
//c. Check whether a given set of three numbers are equilateral triangle or not
//d.Exit
#include<stdio.h>
#include<stdlib.h>

int main()
{

    int x,a,b,c;
    printf("1. Check whether a given set of three numbers are lengths of an isosceles triangle or not \n");
    printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not \n");
    printf("3. Check whether a given set of three numbers are equilateral triangle or not \n");
    printf("4. Exit \n");
    printf("Enter the number \n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Enter the value of a,b,c\n");
        scanf("%d%d%d",&a,&b,&c);
       if(a == b || b== c || c == a)
       {
           printf("The given Triangle is isosceles\n");
           }
       else
       {
         printf("The given Triangle is not isosceles\n");
         }

        break;
    case 3:
       printf("Enter the value of a,b,c");
       scanf("%d%d%d",&a,&b,&c);
     if(a== b && b == c)
     {
      printf("The Given Triangle is equilateral\n");
    }
    else
    {
   printf("The Given Triangle is equilateral\n");
  }
        break;
    case 2:
        printf("Enter the value of a,b,c");
        scanf("%d%d%d",&a,&b,&c);
       if(a*a== b*b+c*c || b*b== c*c+a*a || c*c==b*b+a*a)
       {
           printf("The given Triangle is Right angle\n");
           }
       else
       {
         printf("The given Triangle is not Right angle\n");
         }
         break;
    case 4:
        exit(0);

    }

}

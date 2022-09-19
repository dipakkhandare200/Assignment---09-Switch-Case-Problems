//2. Write a menu driven program with the following options:a. Additionb. Subtraction c. Multiplication d. Division e. Exit
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,a,b,c;
    printf("1.Addition\n 2.Subtraction\n 3.Multiplication  \n 4.Division \n 5.Exit\n");
    printf("\n Enter the Number  ");
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        printf("Enter the two values of a & b\n");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("\n Addition of two number = %d",c);
        break;
    case 2:
        printf("Enter the two values of a & b\n");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf(" \nSubtraction of two number = %d",c);
        break;
    case 3:
        printf("Enter the two values of a & b\n");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf(" \nMultiplication of two number = %d",c);
        break;
    case 4:
        printf("Enter the two values of a & b\n");
        scanf("%d%d",&a,&b);
        c=a/b;
        printf("\n Division of two number = %d",c);
        break;
    case 5:
        exit(0);

    }


}

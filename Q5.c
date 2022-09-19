#include<stdio.h>
int main()
{

    int i;
    printf("Enter week number (1-3): ");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("Good\n");
        break;
    case 2:
        printf("Better\n");
        break;
    case 3:
        printf("Best\n");
        break;
    default:
        printf("\n Invalid ");
    }

}

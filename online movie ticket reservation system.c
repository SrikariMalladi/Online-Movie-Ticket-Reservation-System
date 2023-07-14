#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int n;
    char name[20],sh,ch;
    float amt;
    printf("Enter your name:");
    scanf("%s",&name);
    show();
    seat();
}
int show()
{
    char ch;
    printf("------------------------\n");
    printf("Enter the movie you want to watch:");
    scanf(" %c",&ch);
    switch(ch)
    {
       case 'A':printf("Avengers End Game\n");
                break;
       case 'B':printf("Spiderman\n");
                break;
       case 'C':printf("Tom and Jerry\n");
                break;
        default:printf("Invalid choice\n");
    }
}
int seat()
{
    int n;
    float amt;
    char sh;
    char name,ch;
    printf("Enter Number of persons:");
    scanf("%d",&n);
    printf("Enter your preferred seat:");
    scanf(" %c",&sh);


    switch(sh)
    {
        case 'A':printf("VIP seating\n");
                 amt=700.00*n;
                 break;
        case 'B':printf("Economy Class Seating\n");
                 amt=500.00*n;
                 break;
        case 'C':printf("First Class Seating\n");
                 amt=300.00*n;
                 break;
        case 'D':printf("Second Class Seating\n");
                 amt=150.00 *n;
                 break;
        default:printf("Invalid Choice\n");
    }

    printf("-------------------------------------------\n");
    printf("Total Price:%.2f\n",amt);
    printf("Thanks for booking your ticket\n");
    printf("Hope you enjoy the show\n");
    return 0;
}

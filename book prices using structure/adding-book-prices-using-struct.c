//write a code snippet to show how we can add prices of three different story books using struct


#include<stdio.h>
int main()
{
    struct book
    {
        char title[20];
        int price;
    };
    struct book b1,b2,b3;
    printf("Enter the title of the first book: ");
    scanf("%s",b1.title);
    printf("Enter the price of the first book: ");
    scanf("%d",&b1.price);
    printf("Enter the title of the second book: ");
    scanf("%s",b2.title);
    printf("Enter the price of the second book: ");
    scanf("%d",&b2.price);
    printf("Enter the title of the third book: ");
    scanf("%s",b3.title);
    printf("Enter the price of the third book: ");
    scanf("%d",&b3.price);
    printf("The price of the first book is: %d\n",b1.price);
    printf("The price of the second book is: %d\n",b2.price);
    printf("The price of the third book is: %d\n",b3.price);
    printf("The total price of the books are: %d\n",b3.price+b2.price+b1.price);

    return 0;
}
#include <stdio.h>
int main()
{
    int num1,num2,*x,*y;

    printf("Enter value of num1: ");
    scanf("%d",&num1);
    printf("Enter value of num2: ");
    scanf("%d",&num2);

    //displaying numbers before swapping
    printf("Before Swapping: num1 is: %d, num2 is: %d\n",num1,num2);

    x=&num1;
    y=&num2;
    //swapping the values of num1 and num2
    int t;
     t   = *x;
    *x   = *y;
    *y   =  t;

    //displaying numbers after swapping
    printf("After  Swapping: num1 is: %d, num2 is: %d\n",num1,num2);

    return 0;
}
//Write a program in C to find the maximum number between two numbers using a pointer.

#include <stdio.h>
int main(){
    //enter 2 numbers
    int n1,n2;
    printf("Enter the first number: ");
    scanf("%d",&n1);
    printf("Enter the second number: ");
    scanf("%d",&n2);
    //find the maximum number
    int *p;
    p=&n1;
    if(n1>n2){
        p=&n1;
    }
    else{
        p=&n2;
    }
    printf("The maximum number is %d",*p);
    return 0;
}
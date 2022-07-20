//Write a program in C to sort an array using Pointer.
#include <stdio.h>
int main(){
    //input the number of elements in the array
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    //input the elements in the array
    int a[n];
    printf("Enter the elements in the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    //sort the array using pointer
    int *p;
    p = a;//point to the first element of the array
    int i, j, temp;
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(*(p + j) > *(p + j + 1)){//
                temp = *(p + j);//
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
    //print the sorted array
    printf("The sorted array is: ");
    for(int i=0; i<n; i++){
        printf("%d ", *(p + i));
    }
    return 0;
}
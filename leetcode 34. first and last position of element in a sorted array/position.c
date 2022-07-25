//find the last and first position of an element in a sorted array

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,k,l,m;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements in the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            l=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]==k)
        {
            m=i;
            break;
        }
    }
    printf("The position of the element is %d and %d\n",l,m);
    return 0;
}
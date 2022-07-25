//find first and last position of an element in a sorted array with O(log n) time complexity
// Language: c
// Path: first and last position of element in a sorted array\position.c
// Compare this snippet from leetcode 34. first and last position of element in a sorted array\position.c:
// //find the last and first position of an element in a sorted array
//
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
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==k)
        {
            l=mid;
            break;
        }
        else if(a[mid]<k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    low=0;
    high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==k)
        {
            m=mid;
            break;
        }
        else if(a[mid]<k)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    printf("The position of the element is %d and %d\n",l,m);
    return 0;
}

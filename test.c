//insertion sort
#include <stdio.h>
int main()
{
    int i,j,n,temp,a[100];
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=a[i];//temp is the value to be inserted
        j=i-1;//j is the index of the element to be compared with temp
        while(j>=0&&a[j]>temp)//if the element to be compared is greater than temp, then swap the elements
        {
            a[j+1]=a[j];//shift the elements to the right
            j=j-1;//decrement the index
        }
        a[j+1]=temp;//insert the value in the correct position
    }
    printf("The sorted array is\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
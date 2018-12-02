#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j,temp,a[20];
    printf(" Enter number of items \n");
    scanf("%d",&n);
    printf(" Enter the items to sort \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<n;j++)
    {
        for(i=0;i<n-j;i++)
        {
            if(a[i]>=a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    printf(" The sorted array elements are \n");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);

}

/* Bubble sort is a simple sorting algorithm.This sorting algorithm is comparison-based
algorithm in which each pair of adjacent element is compared and the elements are swapped if they are
not in order.This algorithm is not suitable for large data sets as its average and worst case
complexity are of O(nsquare) where n is the number of items  */

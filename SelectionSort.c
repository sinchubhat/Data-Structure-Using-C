#include<stdio.h>
void main()
{
    int n,i,j,temp,a[20],pos;
    printf(" Enter the number of items \n");
    scanf("%d",&n);
    printf(" Enter the items to sort \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[pos])
            {
                pos=j;
            }
        }
            temp=a[pos];
            a[pos]=a[i];
            a[i]=temp;
    }
    printf(" The sorted items are \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}

/* The selection sort algorithm sorts an array by repeatedly finding the minimum element
(considering ascending order) from unsorted part and putting it at the beginning.The algorithm
maintains two sub-arrays in a given array .
1. The sub-array which is already sorted.
2. Remaining sub-array which is unsorted.
In every iteration of selection sort,the minimum element(considering ascending order) from the
unsorted sub-array is picked and moved to the sorted sub-array */

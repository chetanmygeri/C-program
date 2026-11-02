#include <stdio.h>
int main ()
{
    int a[50],original[50];
    int n,i,j,temp;
    printf("enter number of elements:");
    scanf("%d",&n);
    if (n<1||n>50);
    {
        printf("enter a value from 1 to 50.\n");
        return 0;
    }
    printf("enter %d integers:",n);
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        original[i]=a[i];
    }
    for (i=0; i<n-1-i; i++)
    {
        for (j=0; j<n-1-i; i++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("original array:");
    for (i=0; i<n; i++)
    printf("\nacending order:");
    for (i=0; i<n; i++)
    printf("\ndesending order:");
    for (i=n-1; i>=0; i--)
    printf("%d",a[i]);
    printf("\n");
    return 0;
}
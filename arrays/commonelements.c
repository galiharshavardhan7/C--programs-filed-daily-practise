#include<stdio.h>
int main()
{
    int i,j,size1,size2;
    printf("Enter the size of array1\n");
    scanf("%d",&size1);
    int arr1[size1];
    printf("Enter the size of array2\n");
    scanf("%d",&size2);
    int arr2[size2];
    printf("Enter the array1 elements\n");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the array2 elements\n");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    printf("Common elements\n");
    for(i=0;i<size1;i++)
    {
        for(j=0;j<size2;j++)
        {
            if(arr1[i]==arr2[j])
            {
                printf("%d ",arr1[i]);
            }
        }
    }
}
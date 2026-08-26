#include<stdio.h>
int main()
{
    int i,j,num,flag=0,size1,size2;
    printf("Enter the array1 size : ");
    scanf("%d",&size1);
    printf("Enter the array2 size : ");
    scanf("%d",&size2);
    int arr1[size1],arr2[size2];
    printf("Enter the array1 elements : ");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the array2 elements : ");
    for(i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    if(size1==size2)
    {
        for(i=0;i<size1;i++)
        {
            flag=0;
            for(j=0;j<size2;j++)
            {
                if(arr1[i]==arr2[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
        if(flag==1)
        {
            printf("Array elements are equal.");
            flag=0;
        }
        else
        {
            printf("Array elements are not equal.");
        }
    }
    else
    {
        printf("Array elements are not equal.");
    }
}
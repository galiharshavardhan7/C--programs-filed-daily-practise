#include<stdio.h>
int main()
{
    int n,i,j,size,temp,count=0;
    printf("Enter the array size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = 0; i < size; i++)
    {
        if(arr[i] != 0)
        {
            arr[j] = arr[i];
            j++;
    }
}

    while(j < size)
    {  
       arr[j] = 0;
        j++;
        
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
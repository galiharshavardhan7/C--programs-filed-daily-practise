#include<stdio.h>
int main()
{
    int i,j,k,size,flag=0,uniq_count=0;
    printf("Enter array size: ");
    scanf("%d",&size);
    int arr[size],uniq_arr[size];
    printf("Enter array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<uniq_count;j++)
        {
            if(arr[i]==uniq_arr[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            uniq_arr[uniq_count]=arr[i];
            uniq_count++;
        }
        flag=0;
        
    }
    printf("Unique array elements: ");
    for(i=0;i<uniq_count;i++)
    {
        printf("%d ",uniq_arr[i]);
    }
}

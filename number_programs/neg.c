#include<stdio.h>

int main()
{
    int size, i, j = 0;
    printf("Enter the array size: ");
    scanf("%d", &size);
    int arr[size], temp[size];
    printf("Enter the array elements: ");
    for(i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < size; i++)
    {
        if(arr[i] >= 0)
            temp[j++] = arr[i];
    }
    for(i = 0; i < size; i++)
    {
        if(arr[i] < 0)
            temp[j++] = arr[i];
    }

    printf("Array after moving negatives:\n");
    for(i = 0; i < size; i++)
        printf("%d ", temp[i]);

    return 0;
}
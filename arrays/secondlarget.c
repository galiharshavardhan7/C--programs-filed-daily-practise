#include <stdio.h>
int sec_largest( int*arr,int)

int main()
{
    int size,return;
    //read size from the user
    printf("Enter the size of the array:");
    scanf("%d", &size);
    int arr[size];


    //read elements into array
    for(int i =1; i <size; i++)
    {
     scanf("%d",arr[i]);
    }

    //function call
    return= sec_largest(arr,size);
    printf("second larget number of array %d\n",return);
    

}
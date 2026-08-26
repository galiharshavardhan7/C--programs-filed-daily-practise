#include<stdio.h>
int *create_array(void)
{
    static int arr[5]={10,20,30,40,50};
    return arr;
}
int main()
{
    int *ptr;
    ptr=create_array();
    for(int i=0;i<5;i++)
    {
        printf("%d\n",ptr[i]);
    }
}
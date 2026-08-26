#include<stdio.h>
int main()
{
    int l,b,side;
    float r;
    printf("Enter the length of rectangle:");
    scanf("%d",&l);
    printf("Enter the breadth of rectangle:");
    scanf("%d",&b);
    printf("Area of rectangle=%d\n",l*b);
    printf("Perimeter of rectangle=%d\n",2*(l+b));
    printf("Enter the side of square:");
    scanf("%d",&side);
    printf("Area of square=%d\n",side*side);
    printf("Perimeter of square=%d\n",4*side);
    printf("Enter the radius of circle:");
    scanf("%f",&r);
    printf("Area of circle=%0.2f\n",3.14*r*r);
    printf("Perimeter of circle=%0.2f\n",2*3.14*r);
}   
#include<stdio.h>
#include<conio.h>
int area(int);
int main()
{
    int r;
    float a;
    printf("Enter radius of circle");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area of circle is  %f",a);
    getch();
}
int area(int a)
{
    int s;
    s=3.14*a*a;
    return s;
}

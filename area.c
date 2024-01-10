#include<stdio.h>
int main(){
    double a,b,c,triangle,circle,trapizium,square,ractangle;
    const double pi=3.14159;
    printf("Enter the value of A,B,C:\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    triangle=a*(c/2);
    circle=pi*c*c;
    trapizium=((a+b)/2)*c;
    square=b*b;
    ractangle=a*b;

    printf("Area of Triangle: %0.2lf\n",triangle);
    printf("Area of Circle: %0.2lf\n",circle);
    printf("Area of Trapizium: %0.2lf\n",trapizium);
    printf("Area of Square: %0.2lf\n",square);
    printf("Area of Ractangle: %0.2lf\n",ractangle);

    getch();
}

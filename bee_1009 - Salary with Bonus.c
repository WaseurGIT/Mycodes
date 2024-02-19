#include<stdio.h>
int main(){
    char x[100];
    double a,b,d,e;
    gets(x);
    scanf("%lf %lf",&a,&b);
    d=(b*15)/100;
    e=a+d;
    printf("TOTAL = R$ %0.2lf\n",e);
    getch();
}

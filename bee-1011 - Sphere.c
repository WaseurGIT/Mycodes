#include<stdio.h>
int main(){
    double R,pi,x;
    printf("Enter Radius:");
    scanf("%lf",&R);
    pi=3.14159;
    x=(4.0/3)*pi*R*R*R;
    printf("VOLUME = %0.3lf\n",x);
    return 0;
}

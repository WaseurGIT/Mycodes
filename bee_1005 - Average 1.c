#include <stdio.h>
int main(){
    float A,B,x;
    scanf("%f%f",&A,&B);
    x=(A*3.5+B*7.5)/(3.5+7.5);
    printf("MEDIA = %0.5f\n",x);
    getch();
}

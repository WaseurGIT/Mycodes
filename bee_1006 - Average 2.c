#include<stdio.h>
int main(){
    float A,B,C,x;
    printf("Enter three floating number:\n");
    scanf("%f%f%f",&A,&B,&C);
    x=(A*2+B*3+C*5)/(2+3+5);
    printf("MEDIA = %0.1f\n",x);
    getch();
}

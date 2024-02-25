#include<stdio.h>
int main(){
    int x;
    float y,z;
    printf("Enter Distance:");
    scanf("%d",&x);
    printf("Enter total fuel spent:");
    scanf("%f",&y);
    z=x/y;
    printf("\nThe average consumption of the car : %0.3f km/l\n",z);
    getch();
}

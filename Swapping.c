#include<stdio.h>
int main(){
    int x,y,temp=0;
    printf("Before swapping\n\n");
    printf("First Number:");
    scanf("%d",&x);
    printf("Second Number:");
    scanf("%d",&y);

    temp=x;
    x=y;
    y=temp;

    printf("\nAfter swapping\n\n");
    printf("First number:%d\n",x);
    printf("Second number:%d\n",y);
    getch();
}

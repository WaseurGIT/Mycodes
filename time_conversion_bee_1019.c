#include<stdio.h>
int main(){
    int a,b,c,hour,min,sec;
    printf("Enter any number:");
    scanf("%d",&a);
    hour=a/3600;
    b=a%3600;
    min=b/60;
    c=b%60;
    sec=c/1;
    printf("\nHour:Minute:Second\n%d  :    %d :    %d\n",hour,min,sec);
    getch();
}

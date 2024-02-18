#include<stdio.h>
int main(){
    int a,b,c,year,month,day;
    printf("Enter a number:");
    scanf("%d",&a);
    year=a/365;
    b=a%365;
    month=b/30;
    c=b%30;
    day=c/1;
    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",day);
    getch();
}

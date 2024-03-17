#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    float s=n*(n+1)/2.0;
    printf("%0.2f",s);
    getch();
}

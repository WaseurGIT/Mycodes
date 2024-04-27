//using power function
#include<stdio.h>
#include<math.h>
int main(){
    int a,n,d;
    printf("Enter any number: ");
    scanf("%d",&a);
    printf("Enter the power: ");
    scanf("%d",&n);
    d=pow(a,n);
    printf("%d",d);
    getch();
}

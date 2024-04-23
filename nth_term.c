#include<stdio.h>
int N(int a,int n,int d){
    return (a+(n-1)*d);
}
int main(){
    int a,n,d;
    printf("Enter 1st term:");
    scanf("%d",&a);
    printf("Enter Number of term:");
    scanf("%d",&n);
    printf("Enter Difference:");
    scanf("%d",&d);
    printf("\n%dth term is:%d",n,N(a,n,d));
    getch();
}

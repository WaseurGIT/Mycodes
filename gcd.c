#include<stdio.h>
int main(){
    int a,b,rem;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
    }
    printf("\nThe GCD of the two number is : %d\n",a);
    getch();
}

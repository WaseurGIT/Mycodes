#include<stdio.h>
int main(){
    int a,r,sum=0,temp;
    printf("enter any number:");
    scanf("%d",&a);

    temp=a;

    while(a!=0){
        r=a%10;
        sum=sum+r*r*r;
        a=a/10;
    }
    if(temp==sum){
        printf("Armstrong number.");
    }
    else{
        printf("not Armstrong.");
    }
getch();
}

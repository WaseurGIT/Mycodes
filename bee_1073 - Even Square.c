#include<stdio.h>
int main(){
    int a,i,square;
    printf("Enter a number:");
    scanf("%d",&a);
    for(i=2;i<=a;i++){
        if(i%2==0){
            square=i*i;
            printf("%d^%d = %d\n",i,2,square);
        }
    }
    getch();
}

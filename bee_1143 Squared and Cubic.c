#include<stdio.h>
int main(){
    int n,i,square,cube;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        square=i*i;
        cube=i*i*i;
        printf("%d  %d  %d\n",i,square,cube);
    }
    getch();
}

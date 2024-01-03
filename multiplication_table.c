#include<stdio.h>
int main(){
    int i,n;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("\n%d x %d = %d\n",i,n,i*n);
    }
    getch();
}

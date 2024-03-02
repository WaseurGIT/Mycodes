#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){  //10000
        if(i%n==2){
            printf("%d\n",i);
        }
    }
    return 0;
}

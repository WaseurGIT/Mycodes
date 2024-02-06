#include<stdio.h>
int main(){
    int n,i,j;        //i=row,j=column
    printf("Enter any number:");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
       for(j=0;j<i;j++){
            printf("*");
       }
       printf("\n");
    }
    printf("\n");
    for(i=n;i>0;i--){
       for(j=0;j<i;j++){
            printf("*");
       }
       printf("\n");
    }
    getch();
}

#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);  //taking row numbers
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){  //printing spaces
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){  //printing stars
            printf("*");
        }
        printf("\n");
    }
    getch();
}

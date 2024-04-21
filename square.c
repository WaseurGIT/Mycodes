//manually square the number
#include<stdio.h>
int main(){
    int i,j,n,count=0;
    printf("Enter any Number:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            count=count+1;
        }
    }
    printf("Square of %d = %d\n",n,count);
    getch();
}

#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        int x,y;
        printf("Enter x and y:\n");
        scanf("%d %d",&x,&y);
        if(y!=0){
            double d=(double)x/y;
            printf("%.1f\n",d);
        }
        else{
            printf("divisao impossivel\n");
        }
    }
    getch();
}

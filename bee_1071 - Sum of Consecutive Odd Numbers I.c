#include<stdio.h>
int main(){
    int x,y,sum=0,temp,i;
    printf("Enter two numbers:\n");
    scanf("%d%d",&x,&y);
    if(x>y){
        temp=x;
        x=y;
        y=temp;
    }
    for(i=x+1;i<y;i++) {
        if(i%2!=0){
            sum+=i;
        }
    }
    printf("%d\n",sum);

    getch();
}

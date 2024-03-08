#include<stdio.h>
int main(){
    int a,b,i;
    while(1){
        printf("Enter two numbers:\n");
        scanf("%d %d",&a,&b);
        int start,end,sum=0;
        if(a<=0||b<=0){
            break;
        }
        if(a<b){
            start=a;
            end=b;
        }
        else{
            start=b;
            end=a;
        }
        for(i=start;i<=end;i++){
            printf("%d ",i);
        }
        for(i=start;i<=end;i++){
                sum+=i;
        }
        printf("\nSum=%d\n",sum);
    }
    getch();
}

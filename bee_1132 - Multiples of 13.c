#include<stdio.h>
int main(){
    int a,b,i,sum=0,temp=0;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    if(a>b){
        temp=a;
        a=b;
        b=temp;
    }
    for(i=a;i<=b;i++){
        if(i%13!=0){
            sum+=i;
        }
    }
    printf("%d\n",sum);
    getch();
}

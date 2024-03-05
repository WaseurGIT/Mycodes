#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(i=0;i<n;i++){
        int a,b,sum=0,j;
        scanf("%d %d",&a,&b);
        if(a>b){
            int temp=a;
            a=b;
            b=temp;
        }
        for(j=a+1;j<b;j++){
            if(j%2!=0){
                sum+=j;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}

#include<stdio.h>
int main(){
    int n,i,st;
    scanf("%d",&n);
    char a[100];

    for(int i=0;i<n;i++){
        scanf("%s",a);
        st=strlen(a);

        if(st>10){
            printf("%c%d%c\n",a[0],st-2,a[st-1]);
        }
        else{
            printf("%s\n",a);
        }
    }
    return 0;
}

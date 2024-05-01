#include<stdio.h>
int main(){
    int n,i;
    char x[5];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%s",x);
        if(strcmp(x,"one")==0 || strcmp(x,"owe")==0){
            printf("1\n");
        }
        if(strcmp(x,"two")==0 || strcmp(x,"too")==0){
            printf("2\n");
        }
        else if(strcmp(x,"three")==0 || strcmp(x,"theee")==0){
            printf("3\n");
        }
    }
    getch();
}

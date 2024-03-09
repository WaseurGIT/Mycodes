#include<stdio.h>
int main(){
    int x,y;
    printf("Enter two numbers:\n");
    while(1){
        scanf("%d %d",&x,&y);
        if(x==y){
            break;
        }
        else if(x>y){
            printf("Decrescente");
        }
        else{
            printf("Crescente");
        }
    }
    getch();
}

#include<stdio.h>
int main(){
    int x,y;
    while(1){
        printf("Enter Two integer numbers:\n");
        int res=scanf("%d%d",&x,&y);
        if(res==EOF){
            break;
        }
        if(x>0&&y>0){
            printf("primeiro\n");
        }
        else if(x<0&&y>0){
            printf("segundo\n");
        }
        else if(x<0&&y<0){
            printf("terceiro\n");
        }
        else if(x>0&&y<0){
            printf("quarto\n");
        }
        else if(x==0||y==0){
            printf("");
        }
    }
    getch();
}

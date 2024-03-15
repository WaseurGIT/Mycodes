#include<stdio.h>
int main(){
    int a;
    printf("Enter integer number:\n");
    while(scanf("%d",&a)!=EOF){
        if(a==0){
            printf("vai ter copa!\n");
        }
        else{
            printf("vai ter duas!\n");
        }
    }
    getch();
}

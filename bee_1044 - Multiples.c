#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);
    if(b%a==0 || a%b==0){
        printf("Sao Multiplos\n");
    }
    else{
        printf("Nao sao Multiplos\n");
    }
    getch();
}

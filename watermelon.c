#include<stdio.h>
int main(){
    int x;
    printf("Enter a number:");
    scanf("%d",&x);
    if(x>2 && x%2==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    getch();
}

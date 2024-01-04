#include<stdio.h>
int FACT(int a){
    if(a>=1){
        return a=a*FACT(a-1);
    }
    if(a==0){
        return 1;
    }
}
int main(){
    int a;
    printf("Enter any number: ");
    scanf("%d",&a);
    printf("%d! = %d",a,FACT(a));
    getch();
}


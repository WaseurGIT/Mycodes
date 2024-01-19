#include<stdio.h>
int main(){
    int a,original,rem=0,rev=0;
    printf("Enter any number:");
    scanf("%d",&a);
    original=a;
    while(a!=0){
        rem=a%10;
        rev=rev*10+rem;
        a=a/10;
    }
    if(original==rev){
        printf("palindrome");
    }
    else{
        printf("Not palindrome");
    }
    getch();
}

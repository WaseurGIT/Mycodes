#include<stdio.h>
int main(){
    int a,i;
    printf("Enter any number: ");
    scanf("%d",&a);
    while (a!=0){
        a=a/10;
        i++;
    }
    printf("Total digits are: %d\n",i);
    getch();
}

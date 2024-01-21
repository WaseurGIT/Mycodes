#include<stdio.h>
int main(){
    char x[1000];
    printf("Enter a string:");
    gets(x);
    x[0]=toupper(x[0]);
    printf("%s\n",x);
    getch();
}

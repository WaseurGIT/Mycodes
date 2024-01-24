#include<stdio.h>
int main(){
    char str[15];
    int i;
    printf("Enter a string: ");
    gets(str);
    while(str[i]!='\0'){
        i++;
    }
    printf("The length of the string is :%d\n",i);
}

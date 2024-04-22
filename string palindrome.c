#include<stdio.h>
int main(){
    char a[20],b[20];
    printf("Enter a string: ");
    gets(a);
    int i,j,len=0;
    while(a[i]!=0){
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++){
        b[j]=a[i];
    }
    b[j]='\0';
    printf("After Reverse the string: %s\n\n",b);
    int d=strcmp(a,b);
    if(d==0){
        printf("Strings are palindrome.");
    }
    else{
        printf("Strings are not palindrome.");
    }
    getchar();
}

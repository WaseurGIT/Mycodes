//if the number of uppercase letters is greater than then the number of lowercase letter then it converts the string into uppercase letter and vice varca
#include<stdio.h>
int main(){
    char x[100],s[100];
    int i,ucount=0,lcount=0;
    printf("Enter a string:");
    gets(x);
    for(i=0;x[i]!='\0';i++){
        if(isupper(x[i])){
            ucount++;
        }
        else{
            lcount++;
        }
    }
    if(ucount>lcount){
        for(i=0;x[i]!='\0';i++){
            printf("%c",toupper(x[i]));
        }
    }
    else{
        for(i=0;x[i]!='\0';i++){
            printf("%c",tolower(x[i]));
        }
    }
    getch();
}

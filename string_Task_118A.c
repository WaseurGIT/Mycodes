#include<stdio.h>
int main(){
    char x[100];
    int i=0,count=0;
    gets(x);
    printf("The consonants of this string is :\n");
    for(i=0;x[i]!='\0';i++){
        char c=tolower(x[i]);
        if(isalpha(c) && !(c=='a' || c=='e' || c=='y' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='Y')){
                count++;
            printf("%c\n",c);
        }
    }
    printf("\nSo, This string has total %d consonant\n",count);
    return 0;
}

#include<stdio.h>
#include<string.h>
int main(){
    char x[20];
    gets(x);
    int i,len,upper=0,lower=0,number=0,vowel=0,consonant=0;
    len=strlen(x);
    printf("\nThe line has %d characters.\n\n",len);
    for(i=0;x[i]!='\0';i++){
        if(x[i]>='A' && x[i]<='Z'){
            upper++;
        }
        if(x[i]>='a'&& x[i]<='z'){
            lower++;
        }
        if(x[i]>='0' && x[i]<='9'){
            number++;
        }
        if(x[i]=='A' || x[i]=='E' || x[i]=='I' || x[i]=='O' || x[i]=='U' || x[i]=='a' || x[i]=='e' || x[i]=='i'|| x[i]=='o' || x[i]=='u'){
            vowel++;
        }
        else if((x[i]>='A' && x[i]<='U') || (x[i]>='a' && x[i]<='u')){
            consonant++;
        }
    }
    printf("Uppercase Letter: %d\n",upper);
    printf("Lowercase Letter: %d\n",lower);
    printf("Number: %d\n",number);
    printf("Vowel: %d\n",vowel);
    printf("Consonant: %d\n",consonant);
    getch();
}

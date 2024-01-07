#include<stdio.h>
int main(){
    //character to ascii value
    char x;
    printf("Enter any character: ");
    scanf("%c",&x);
    int b=x;
    printf("Ascii value of this is : %d\n\n",b);

    //ascii value to character
    //for capital latter 65-90,small letter 97-122
    int c;
    printf("Enter any number: ");
    scanf("%d",&c);

    char p=c;
    printf("Character of this is: %c",p);
    getch();
}

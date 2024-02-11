//this code only works for integer number
#include<stdio.h>
int main(){
    int a,b;
    char c;
    double d;

    printf("Choose an operator(+,-,*,/):\n");
    scanf("%c",&c);

    printf("\nEnter two integer numbers:\n");
    scanf("%d%d",&a,&b);

    switch(c){
    case '+':
        d=a+b;
        printf("%d+%d=%0.2lf\n",a,b,d);
        break;
    case '-':
        d=a-b;
        printf("%d-%d=%0.2lf\n",a,b,d);
        break;
    case '*':
        d=a*b;
        printf("%d*%d=%0.2lf\n",a,b,d);
        break;
    case '/':
        if(b==0){
            printf("Sorry!Divisors can't be zero,please take another value:\n");
            scanf("%d",&b);
        }
        d=a/b;
        printf("%d/%d=%0.2lf\n",a,b,d);
        break;

    default:
        printf("operator not found.");
    }
    getch();
}

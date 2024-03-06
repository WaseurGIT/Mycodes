#include<stdio.h>
int main(){
    int n,i;
    printf("How many numbers: ");
    scanf("%d",&n);
    printf("Enter the values:\n");
    for(i=0;i<n;i++){
        float a,b,c,d;
        scanf("%f %f %f",&a,&b,&c);

        d=(a*2+b*3+c*5)/10;
        printf("Weighted Average: %0.1f\n",d);
    }
    getch();
}

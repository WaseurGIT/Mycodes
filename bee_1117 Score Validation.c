#include<stdio.h>
int main(){
    float a,sum=0.0,average;
    printf("Enter two numbers:\n");
    while(a<2){
        float score;
        scanf("%f",&score);
        if(score<0 || score>10){
            printf("nota invalida\n");
        }
        else{
            sum+=score;
            a++;
        }
    }
    average=sum/2;
    printf("media = %0.2f\n",average);
    getch();
}

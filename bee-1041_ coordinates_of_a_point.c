#include<stdio.h>
int main(){
    float x,y;
    printf("Enter two values:\n");
    scanf("%f%f",&x,&y);
    if(x>0&&y>0){
        printf("At Q1\n");
    }
    else if(x<0&&y>0){
        printf("At Q2\n");
    }
    else if(x<0&&y<0){
        printf("At Q3\n");
    }
    else if(x>0&&y<0){
        printf("At Q4\n");
    }
    else if(x==0&&y==0){
        printf("Origem\n");
    }
    else if(x>0||x<0&&y==0){
        printf("Eixo X\n");
    }
    else if(x==0&&y>0||y<0){
        printf("Eixo Y\n");
    }
    return 0;
}

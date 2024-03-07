#include<stdio.h>
int main(){
    int a[5],i,max,position;
    printf("Enter five numbers:\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    position=1;
    for(i=1;i<=5;i++){
        if(max<a[i]){
            max=a[i];
            position=i+1;
        }
    }
    printf("Highest Value is: %d\n",max);
    printf("Position of Highest Value is: %d\n",position);
    getch();
}

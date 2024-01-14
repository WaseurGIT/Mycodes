#include<stdio.h>
int main(){
    int a[100],n,i,max,min;
    printf("Enter Array Size:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    min= a[0];
    for(i=1;i<n;i++){
        if(max<a[i])
            max=a[i];
    }
    printf("Max value is:%d\n",max);

    for(i=1;i<4;i++){
        if(min>a[i])
            min=a[i];
    }
    printf("Min value is:%d\n",min);
    getch();
}

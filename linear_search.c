#include<stdio.h>
int main(){
    int a[5],i,n;
    printf("Enter array elements:\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter any number:");
    scanf("%d",&n);

    for(i=0;i<5;i++){
        if(a[i]==n){
            printf("Found at index :%d\n",i);
            getch();
        }
    }
    printf("Element not found");
    getch();
}

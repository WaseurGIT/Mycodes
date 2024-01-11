#include<stdio.h>
int main(){
    int a[5],i,n,left,right,middle;
    printf("Enter sorted array elements:\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the key value:");
    scanf("%d",&n);
    left=0;
    right=4;

    while(left<=right){
    middle=(left+right)/2;
        if(a[middle]==n){
            printf("Found at index %d\n",middle);
            break;
        }
        else if(a[middle]<n){
            left=middle+1;
        }
        else{
            right=middle-1;
        }
    }
    if(left>right){
        printf("Element not found.");
    }
    getch();
}

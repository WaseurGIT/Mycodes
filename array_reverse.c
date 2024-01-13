#include<stdio.h>
int main(){
    int a[100],i,j=0,arr[100],n;
    printf("Enter Array size:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--){
        arr[j]=a[i];
        j++;
    }
    printf("\nAfter Reverse:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    getch();
}

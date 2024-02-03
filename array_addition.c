#include<stdio.h>
int main(){
    int A[100],n,i,sum=0;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++){
        sum+=A[i];
    }
    printf("Sum of the all elements is: %d\n",sum);
    getch();
}

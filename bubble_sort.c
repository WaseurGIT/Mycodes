#include<stdio.h>
int main(){
    int a[20],i,j,temp=0,n;

    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nAfter sorted:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    getch();
}

#include<stdio.h>
int main(){
    int a[20],i,j,temp,min,n;

    printf("Enter the number of elements in the array:");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++){
    min=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
    }

    printf("\nAfter sorted:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    getch();
}

#include<stdio.h>
int main(){
    int a[20],i,position=0,n;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
        if(a[0]<a[i]){
            a[0]=a[i];
            position=i;
        }
    }
    printf("\n");
    printf("Largest element is: %d\n",a[0]);
    printf("Largest element position is at index: %d\n",position);
    getch();
}

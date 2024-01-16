#include<stdio.h>
void qs(int a[10],int first,int last){
    int i,j,pivot,temp;
    if(first<last){
        pivot=first;
        i=first;
        j=last;
        while(i<j){
            while(a[i]<=a[pivot] && i<last)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        qs(a,first,j-1);
        qs(a,j+1,last);
    }
}
int main(){
    int i,n,a[100];
    printf("Enter the Array Size:\n");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qs(a,0,n-1);
    printf("After sorted:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    getch();
}

#include<stdio.h>
int main(){
    int a[100],i,n,counteven=0,countodd=0,countpos=0,countneg=0;
    printf("Enter array size:");
    scanf("%d",&n);
    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]%2==0){
            counteven++;
        }
        else if(a[i]%2!=0){
            countodd++;
        }
        if(a[i]>0){
            countpos++;
        }
        else if(a[i]<0){
            countneg++;
        }
    }
    printf("Total Even number :%d \n",counteven);
    printf("Total Odd number :%d \n",countodd);
    printf("Total Positive number :%d\n",countpos);
    printf("Total Negative number :%d\n",countneg);
    getch();
}

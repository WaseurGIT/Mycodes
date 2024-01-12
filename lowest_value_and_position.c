#include<stdio.h>
int main(){
    int a[20],i,n,pos;
    printf("Enter array size:");
    scanf("%d",&n);

    printf("Enter array Elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[0]>a[i]){
            a[0]=a[i];
            pos=i;
        }
    }
    printf("Lowest value is: %d\n",a[0]);
    printf("Position of Lowest value is: %d\n",pos);
    getch();
}

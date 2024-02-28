#include<stdio.h>
int main(){
    int n,i;
    double sum=0.0,res;
    printf("Enter array size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array elements ,put space between two elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=(double)a[i];
    }
    res=(sum/(n*100.0))*100.0;
    printf("%0.12lf\n",res);
    getch();
}

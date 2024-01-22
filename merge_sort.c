#include<stdio.h>
void merge_sort(int arr[],int p,int r){
    if(p<r){
        int mid=(p+r)/2;
        merge_sort(arr,p,mid);
        merge_sort(arr,mid+1,r);
        merge(arr,p,mid,r);
    }
}
void merge(int arr[],int p,int mid,int r){
    int n1=mid-p+1;
    int n2=r-mid;
    int L[n1+1],R[n2+1],i,j;
    for(i=0;i<n1;i++){
        L[i]=arr[p+i];
    }
    for(j=0;j<n2;j++){
        R[j]=arr[mid+1+j];
    }
    i=0;
    j=0;
    int k=p;
    L[n1]=1000,R[n2]=1000;
    for(k=p;k<=r;k++){
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
    }
}
int main(){
    printf("Merge Sort\n");
    int arr[20],n,i;
    printf("Enter Array Size:");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    merge_sort(arr,0,n-1);
    printf("\nAfter Sorted:\n");
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    getch();
}


/*#include<stdio.h>
void merge_sort(int a[10],int l,int h) {
    if(l<h){
        int mid=(l+h)/2;  // Calculate the middle index
        merge_sort(a,l,mid);   // Recursively sort the left half
        merge_sort(a,mid+1,h); // Recursively sort the right half
        merge(a,l,mid,h);  // Merge the sorted halves
    }
}
void merge(int a[],int l,int mid,int h){
    int i,j,k,temp[10];
    i=l;
    j=mid+1;
    k=l;
    while(i<=mid && j<=h){
        if(a[i]<=a[j]){
            temp[k]=a[i];
            i++;
        }
        else{
            temp[k]=a[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        temp[k]=a[i];
        i++;
        k++;
    }

    while(j<=h){
        temp[k]=a[j];
        j++;
        k++;
    }

    for(k=l;k<=h;k++){
        a[k]=temp[k];
    }
}
int main(){
    int a[10],i,n;
    printf("How many numbers:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    merge_sort(a,0,n-1);

    printf("After sorted:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    getch();
}*/

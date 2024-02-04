#include<stdio.h>
void swap(int *a,int *b){
    int temp=*a;
    *a =*b;
    *b = temp;
}
void heapify(int arr[],int h,int i){
    int parent=i;
    int leftchild=2*i+1;
    int rightchild=2*i+2;

    if(leftchild<h && arr[leftchild]>arr[parent]){
        parent=leftchild;
    }
    if(rightchild<h && arr[rightchild]>arr[parent]){
        parent=rightchild;
    }
    if(parent!=i){
        swap(&arr[i],&arr[parent]);
        heapify(arr,h,parent);
    }
}
void max_heap(int arr[],int  h){
    for(int i=(h/2-1);i>=0;i--){
        heapify(arr,h,i);
    }
}

void max_heapsort(int arr[],int h){
    max_heap(arr,h);
    for(int i=h-1;i>0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,i,0);
    }
}
// 60 1 3 8 34 4 9
int main(){
    int i,n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max_heap(arr,n);
    max_heapsort(arr,n);

    printf("Max heap sort:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    getch();
}

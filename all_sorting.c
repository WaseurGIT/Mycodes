#include<stdio.h>
void bubble_sort(int a[],int n){
    int i,j,temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}

void selection_sort(int a[],int n){
    int i,j,temp,min;
    for(i=0;i<5;i++){
    min=i;
        for(j=i+1;j<5;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
    temp=a[i];
    a[i]=a[min];
    a[min]=temp;
    }
}

void insertion_sort(int a[],int n){
    int i,j,temp;
    for(i=1;i<5;i++){
        temp=a[i];
        for(j=i-1;temp<a[j] && j>=0;j--){
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
}

void quick_sort(int a[],int first,int last){
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
        quick_sort(a,first,j-1);
        quick_sort(a,j+1,last);
    }
}

void merge_sort(int a[10],int l,int h) {
    if(l<h){
        int mid=(l+h)/2;
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,h);
        merge(a,l,mid,h);
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
    int a[20],c,n,i;

    printf("How many elements:");
    scanf("%d",&n);

    printf("Enter array elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter 1 for Bubble Sort\nEnter 2 for Selection Sort\nEnter 3 for Insertion Sort\nEnter 4 for Quick Sort\nEnter 5 for Merge sort\n\n");
    scanf("%d",&c);

    switch(c){
    case 1:
        bubble_sort(a,n);
        break;
    case 2:
        selection_sort(a,n);
        break;
    case 3:
        insertion_sort(a,n);
        break;
    case 4:
        quick_sort(a,0,n-1);
        break;
    case 5:
        merge_sort(a,0,n-1);
        break;
    default:
        printf("Wrong choice....\n");
        return 1;
    }

    printf("\nAfter Sorted:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    getch();
}

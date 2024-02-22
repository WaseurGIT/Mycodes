#include<stdio.h>
int main(){
    int a[5],i,counteven=0,countodd=0,countpos=0,countneg=0;
    printf("Enter the elements:\n");
    for(i=0;i<5;i++){
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
    printf("%d valor(es) par(es)\n",counteven);
    printf("%d valor(es) impar(es)\n",countodd);
    printf("%d valor(es) positivo(s)\n",countpos);
    printf("%d valor(es) negativo(s)\n",countneg);
    getch();
}


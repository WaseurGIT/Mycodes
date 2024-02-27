#include<stdio.h>
int main(){
    int x,y;
    float price;
    printf("Enter product code:\n");
    scanf("%d%d",&x,&y);
    if(x==1){
        price=(float)(4.00*y);
    }
    else if(x==2){
        price=(float)(4.50*y);
    }
    else if(x==3){
        price=(float)(5.00*y);
    }
    else if(x==4){
        price=(float)(2.00*y);
    }
    else if(x==5){
        price=(float)(1.50*y);
    }
    printf("Total: R$ %0.2f\n",price);
    getch();
}

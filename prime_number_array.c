#include <stdio.h>
int main(){
   int a[4],i,n,c;
   printf("Enter array size:");
   scanf("%d",&n);
   printf("Enter array elements:\n");
   for(i=0;i<n;i++){
        scanf("%d",&a[i]);
   }

   for(i=0;i<n;i++){
        c=0;
        for(int j=2;j<a[i];j++){
            if(a[i]%j==0){
                c=1;
                break;
            }
        }
   if(c==0){
      printf("Prime\n");
   }
   else{
      printf("Not Prime\n");
   }
}
   getch();
}

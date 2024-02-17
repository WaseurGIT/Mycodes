#include <stdio.h>
int main() {
    int A,B,C,D,x;
    printf("Enter four integers:\n");
    scanf("%d%d%d%d",&A,&B,&C,&D);
    x=(A*B-C*D);
    printf("DIFERENCA = %d\n",x);
    getch();
}

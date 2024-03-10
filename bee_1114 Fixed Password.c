#include<stdio.h>
int main(){
    int n;
    do{
        printf("\nEnter Password:\n");
        scanf("%d",&n);
        if(n!=2002){
            printf("Senha Invalida\n");
        }
    }while(n!=2002);

    printf("Acesso Permitido\n");
    getch();
}

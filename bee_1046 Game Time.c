#include<stdio.h>
int main(){
    int ihour,fhour,duration;
    scanf("%d %d",&ihour,&fhour);

    duration=(fhour-ihour+24*60)%(24*60);
    if(ihour==fhour){
        printf("O JOGO DUROU 24 HORA(S)");
    }
    else{
        printf("O JOGO DUROU %d HORA(S)",duration);
    }
    return 0;
}

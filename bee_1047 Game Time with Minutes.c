#include<stdio.h>
int main(){
    int ihour,imin,fhour,fmin,initialtotalmin,finaltotalmin,totaltimemin,totaltimehour,remainmin;
    scanf("%d %d %d %d",&ihour,&imin,&fhour,&fmin);
    initialtotalmin=(ihour*60+imin);
    finaltotalmin=(fhour*60+fmin);
    totaltimemin=(finaltotalmin-initialtotalmin+24*60)%(24*60);
    totaltimehour=totaltimemin/60;
    remainmin=totaltimemin%60;
    if(initialtotalmin==finaltotalmin){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",totaltimehour,remainmin);
    }
    return 0;
}

#include<stdio.h>
int main(){
    //calculating celsius
    float celsius,fahrenheight;
    printf("Enter Fahrenheit: ");
    scanf("%f",&fahrenheight);
    celsius=(fahrenheight-32)*5/9;
    printf("%.2f Fahrenheit=%0.2f Celsius\n\n",fahrenheight,celsius);

    //calculating fahrenheit
    float cel,fah;
    printf("Enter Celsius: ");
    scanf("%f",&cel);
    fah=(cel*9/5)+32;
    printf("%.2f Celsius=%0.2f Fahrenheit\n",cel,fah);
    getch();
}

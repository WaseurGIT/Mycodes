#include<stdio.h>
int main(){
    float weight, height_meter, height_feet, height_inches, bmi;
    printf("--------------\n");
    printf("Check your BMI\n");
    printf("--------------\n");
    printf("Enter your weight in kg: ");
    scanf("%f",&weight);
    printf("Enter your height in feet and inches : \n");
    printf("Height in Feet: ");
    scanf("%f",&height_feet);
    printf("Height in Inches: ");
    scanf("%f",&height_inches);
    height_meter = (height_feet*0.3048) + (height_inches * 0.0254);
    bmi=weight/(height_meter*height_meter);
    printf("Your BMI : %.2f\n",bmi);

    printf("--------------\n");
    if(bmi < 18.5){
        printf("Oops! You are under weight\n");
    }
    else if(bmi >=18.5 && bmi <25){
        printf("Congratulations, You are normal weight\n");
    }
    else if(bmi >=25 && bmi <30){
        printf("Oh no! You are over weight\n");
    }
    else{
        printf("You are obese\n");
    }
    getch();
}

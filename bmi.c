#include<stdio.h>
float bmi,height,weight;
int main(){
    scanf("%f",&height); // Height [m]
    scanf("%f",&weight); // Weight [kg]
    bmi = weight / (height * height); // BMI = weight/height^2
    if(bmi > 30){
        printf("Fat");
    }else if(bmi > 21){
        printf("Normal");
    }else if(bmi <= 21){
        printf("Thin");
    }
    return 0;
    
}
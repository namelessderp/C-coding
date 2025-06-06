#include <stdio.h>

float bmi_calc(float weight,float height){
    float bmi;
    bmi = weight/(height*height);
    return bmi;
}


int main(){
    float weight,height,bmi;
    printf("Enter weight in kilograms:\n");
    printf("Enter height in metres:\n");
    scanf("%f %f",&weight,&height);
    bmi = bmi_calc(weight,height);
    printf("Your bmi is : %f\n",bmi);
}
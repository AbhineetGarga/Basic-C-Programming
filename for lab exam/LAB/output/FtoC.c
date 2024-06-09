#include<stdio.h>

int main(){
    float f,c=0,d=5.0/9.0;
    printf("enter the temp in fehrenhite");
    scanf("%f",&f);
    c=d*(f-32);
    printf("The %f degree fehrenhite is %f degree cenc",f,c);
    return 0;
}
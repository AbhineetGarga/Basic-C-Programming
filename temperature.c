// #include<stdio.h>
// int main()
// {
//     float f , c , d=5/9;
//     printf("Enter the temperature in fahrenheit\n");
//     scanf("%f", &f);
//     c= d*(f-32);
//     printf("The temperature in celcious is %f", c);
//     return 0;
// }

#include<stdio.h>
float Convert(float *fer){
    float c;
    c=(5.0 / 9.0)*(*fer - 32);
    return c;
}

int main()
{
    float f, c;
    printf("hi");
    scanf("%f", &f);
    c=Convert(&f);
    printf("Temperature is %f",c);

    return 0;
}
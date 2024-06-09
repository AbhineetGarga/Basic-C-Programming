#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;
    printf("Enter coefficients a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - 4 * a * c;

    int discriminantType;
    if (d > 0)
        discriminantType = 1;
    else if (d == 0)
        discriminantType = 0;
    else
        discriminantType = -1;  
    switch (discriminantType) {
        case 1:
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are %f and %f\n", r1, r2);
            break;

        case 0:
            r1 = -b / (2 * a);
            printf("Root is %f\n", r1);
            break;

        case -1:
            printf("No real roots\n");
            break;
    }

    return 0;
}


// or 
/*
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, r1, r2;
    printf("Enter coefficients a, b and c: ");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Roots are %f and %f\n", r1, r2);
    }
    else if (d == 0)
    {
        r1 = -b / (2 * a);
        printf("Root is %f\n", r1);
    }
    else
    {
        printf("No real roots\n");
    }

    return 0;
}
*/
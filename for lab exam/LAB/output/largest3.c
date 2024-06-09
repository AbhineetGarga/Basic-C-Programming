#include<stdio.h>
int main(){
    int a, b, c, d;
    printf("Enter the values :");
    scanf("%d %d %d",&a,&b,&c);
    d=(a>b)?((a>c?a:c)):((b>c)?b:c);
    printf("the largest number is %d",d);
    return 0;
    // if (a>b)
    // {
    //     if (a>c)
    //     {
    //         printf("Largest Number is: %d",a);
    //     }
    //     else{
    //         printf("Largest Number is: %d",c);
    //     }
        
    // }
    // else if (b>a)
    // {
    //     if (b>c)
    //     {
    //         printf("Largest Number is: %d",b);
    //     }
    //     else{
    //         printf("Largest Number is: %d",c);
    //     }
        
    // }
    
}
#include<stdio.h>

int main(){
    int a,b;
    int choice;
    printf("raed A and b");
    scanf("%d %d",&a,&b);
    printf("1>Addition \n 2>Subtraction \n 3>Multiplication \n 4>Devision \n");
    printf("Enter the choice");
    scanf("%d",&choice);
    
    switch (choice)
    {
    case 1:
        printf("The addition of  %d + %d= %d",a, b, (a+b));
        break;
    
    case 2:
        printf("The subtraction of  %d - %d= %d",a, b, (a-b));
        break;

    case 3:
        printf("The Multiplication of  %d*%d= %d",a, b,(a*b));
        break;
    
    case 4:
        printf("The devision of  %d/%d= %f",a, b, (float)(a/b));
        break;
    default:
        printf("Wrong Choice");
        break;
    }
    return 0;
}
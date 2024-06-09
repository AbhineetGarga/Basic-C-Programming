#include<stdio.h>
int main(){
    int num, num1, reverse=0, remainder=0;
    printf("The value of  numbe",num);
    scanf("%d",&num);
    num1=num;
    while (num!=0)
    {
        remainder= num%10;
        reverse= reverse*10 + remainder;
        num/=10;
    }
    if (num1==reverse)
    {
       printf("Pelendrom");
    }
    else{
        printf("Not Pelendrom");
}
    return 0;
}
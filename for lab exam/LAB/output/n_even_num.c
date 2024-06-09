#include<stdio.h>

int main(){
    int  i,n,sum=0;
    printf("Enter the value for N: \n");
    scanf("%d",&n);
    i=2;
    while(i<=n)
    {
       sum = sum + i;
       i=i+2;
    }
    printf("The sum of even numbers up to %d is %d\n", n, sum);
    return 0;
}
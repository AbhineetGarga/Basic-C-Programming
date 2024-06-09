#include<stdio.h>

int main()
{
    int a=0,b=1,c,n;
    printf("Read n");
    scanf("%d",&n);
    printf("%d \t %d \t ",a,b);
    for(c=2;c<=n;c++)
    {
        printf("%d \t",(a+b));
        int temp = a;
        a = b;
        b = temp + b;
    }
    return 0;
}
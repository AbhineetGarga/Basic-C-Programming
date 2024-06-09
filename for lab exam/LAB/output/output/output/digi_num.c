#include<stdio.h>
int main(){
    int sum=0, rem, n;
    printf("Read n");
    scanf("%d",&n);
    do
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    } while (n!=0);
    
    printf("The sum of digit of number is %d",sum);
    return 0;
    //............For loop
    // for (i=1; i>0; i++)
    // {
    //         rem=n%10;
    //         sum=sum+rem;
    //         n=n/10;
    // }
    //............while loop
    // while (n>0)
    // {
    //        rem=n%10;
    //        sum=sum+rem;
    //        n=n/10;
    // }
    

    
    
    
}
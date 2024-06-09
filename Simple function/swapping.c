// Swapping of 2 numbers 
#include<stdio.h>
int main(){
    int a=10, b=20, c;
 
    // After swapping 
    printf("Before swapping= A=%d \t B=%d \n", a,b);

    c=a;
    a=b;
    b=c;
    // before swapping
    printf("After Swapping A=%d \t B=%d", a,b);
 /* 
 a=a+b; =30
    b=a-b; =10
    a=a-b;=20

 printf("After Swapping A=%d \t B=%d", a,b);
 */
   

    return 0;
}
#include<stdio.h>
void swap(int *a,int *b){
    int temp=*b;
    *b=*a;
    *a=temp;
}
int main(){
    int num1=10,num2=5;
    printf("Before swapping num1=%d and num2=%d\n",num1,num2);
    swap(&num1, &num2);
    printf("After swapping num1=%d and num2=%d\n",num1,num2);
    return 0;
}
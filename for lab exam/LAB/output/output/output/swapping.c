#include<stdio.h>
void swap(int* a, int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int num1, num2;
    printf("Read num1 and num2 \n");
    scanf("%d %d",&num1, &num2);
    // Before Swapping 
    printf("Before Swapping numbers are %d %d \n",num1, num2);
    // After Swapping
    swap(&num1, &num2);
    printf("After Swapping numbers are %d %d\n",num1, num2);
    return 0;
}
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the charecter\n");
    scanf("%c",&ch);
    printf("the upper case letter is %c", ch-32);//ch+32 for lower case
    return 0;
}  
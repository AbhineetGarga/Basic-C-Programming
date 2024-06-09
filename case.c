#include<stdio.h>
int main(){
    char ch= '8';
    // if(ch>= 'a' && ch <='z'){
    //     printf("ch is a lower case alphabet");
    // }
    // else{
    //     printf("Cch is upper case");
    // }
       if(ch>= 97 && ch <= 122){
        printf("ch is a lower case alphabet");
    }
    else if (ch>= 48 && ch <= 59)
    {
        printf("The Valeu is numeric");
    }
    else
    {
        printf("Cch is upper case");
    }
    return 0;
}
#include<stdio.h>
int main(){
    char ch;
    printf("Read ch= \n");
    scanf("%c",&ch);
    if (ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        printf("Vowel");
    }
    else if (ch!='a'||ch!='A'||ch!='e'||ch!='E'||ch!='i'||ch!='I'||ch!='o'||ch!='O'||ch!='u'||ch!='U')
    {
       printf("Consonent");
    }
    else{
        printf("Say something");
    }
    
    
    return 0;
}
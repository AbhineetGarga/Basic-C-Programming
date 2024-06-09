#include<stdio.h>
int main(){
    int i, n, count;
    printf("Read N");
    scanf("%d",&n);
    i=1;
    count=0;
    while (i<=n)
    {
        if (n%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2){
        printf("prime \n");
    }
    else{
          printf("Not Prime");
        }
    return 0;
}
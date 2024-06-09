#include<stdio.h>
int main(){
    int i,n=5,j;
    // printf("Read N");
    // scanf("%d",&n);
    for (i=0;i<n;i++){
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// *
// * *
// * * *
// * * * *
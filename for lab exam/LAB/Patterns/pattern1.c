#include<stdio.h>
int main(){
    int i,n,j;
    printf("Read n");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++){
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}

// *       *       *       *       *
// *       *       *       *       *
// *       *       *       *       *
// *       *       *       *       *
// *       *       *       *       *
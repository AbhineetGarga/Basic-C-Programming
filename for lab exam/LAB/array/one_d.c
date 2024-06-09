#include<stdio.h>
int main(){
    // ##Case 1###
    // int num[5];
    // num[0]= 1;
    // num[1]= 2;
    // num[2]= 3;
    // num[3]= 4;
    // num[4]= 8;
    // printf("%d", num[1]);

    // Case 2 = array in loop

    int arr[10]={1,23,13,76, 87 , 6, 600,1,87,87},i, sum=0, largest, smallest, n=0, j;
    // int b=1, a="",c;
    // for(i=0; i<10; i++){
    //     scanf("%d", &arr[i]);
    // }
    // lets imagine arr[0] isthelargest 
    largest=arr[0];
    smallest=arr[0];
    for(i=0; i<10; i++){
        printf("%d+", arr[i]);
        sum= sum+arr[i];
        // for largest 
        if (arr[i]>largest)
        {
            largest= arr[i];
        }
        // for smallest 
        if (arr[i]<smallest)
        {
            smallest= arr[i];
        }
    }
    // a=1, a==1

        // similar element 
        for(i=0;i<10;i++){
            for (j=0;j<10;j++)
            {
              if(arr[i]==arr[j]){
               n++;
              }
            }
            if (n!=1)
            {
                 printf("\n %d appears %d times", arr[i], n);
                
            }
             n=0;
           
        }

    printf("\n sum is %d ",sum);
    printf("\n largest is %d ",largest);
    printf("\n smallest is %d ",smallest);
    // printf("\n smallest is %d ",smalles
    return 0;
}
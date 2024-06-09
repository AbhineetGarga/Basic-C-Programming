#include<stdio.h>
int main(){
    int arr[3][3],i,j, d1=0,d2=0;
       
    //    taking value 
    for (i= 0; i < 3; i++){
      for ( j = 0; j < 3; j++)
      {
       scanf("%d", &arr[i][j]);
      }
    }
    
    // operation 
    
    for(i=0;i<3;i++){
        d1= d1 + arr[i][i];
        d2= d2+arr[i][2-i];
    }



    printf("Sum of diagonal left diagonal is %d ", d1);
    printf("Sum of diagonal Right diagonal is %d ", d2);
    printf("Sum of both diagonal is diagonal is %d ", d1 + d2);
}